/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131225
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((-1310421865204690655LL), (var_2))), (((/* implicit */long long int) ((unsigned char) (short)14))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_6);
        var_12 = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0 - 3]));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)24)) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28206))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1]))))) ^ (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)28211)))), (((((/* implicit */_Bool) (unsigned short)37329)) ? (((/* implicit */int) (unsigned short)37351)) : (((/* implicit */int) var_1))))))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(var_2))))));
        arr_6 [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) var_1))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_4 [i_1] [i_1 - 1])))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)28191))) : (((var_2) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37315)))))))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (1462162014)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_2)))) : (((((/* implicit */int) (unsigned short)28206)) / (var_0)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
}
