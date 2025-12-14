/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160993
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_11)))) ? (((/* implicit */long long int) min((683292345U), (((/* implicit */unsigned int) var_8))))) : (-1730995040936327473LL)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1856935178)) ? (8872092806063935403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10498)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [(_Bool)1] [i_0] = arr_1 [i_0];
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (signed char)122);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_1])))) ? (((/* implicit */long long int) 899114390U)) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_5 [i_1])));
        arr_9 [(short)18] [(_Bool)1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) ? ((((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15330))))) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_7 [i_1]))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_5);
}
