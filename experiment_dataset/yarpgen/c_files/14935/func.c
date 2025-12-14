/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14935
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)1024), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)64528)))))))));
    var_12 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) / (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) (short)0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64523))))) ? (((((/* implicit */long long int) arr_0 [i_0])) / (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        var_13 = ((/* implicit */_Bool) ((short) arr_1 [i_0]));
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)64512))))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_6)) : (arr_0 [i_0])))) : (arr_1 [i_0]))), (min((((/* implicit */long long int) arr_0 [6U])), (((((/* implicit */long long int) arr_0 [7])) ^ (arr_1 [(_Bool)1])))))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (1966250980495828095LL) : (((/* implicit */long long int) 12)))) == (((/* implicit */long long int) arr_0 [i_0]))))), (arr_1 [i_0])));
    }
}
