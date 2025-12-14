/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115700
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (1733115906U) : (((/* implicit */unsigned int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((max(((-(((/* implicit */int) arr_3 [i_1] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (79)))))))))));
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(max((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_4 [i_0] [i_0] [i_1])))), (min((((/* implicit */int) arr_0 [(short)14])), (arr_1 [i_1])))))));
            var_15 -= ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_0 [1U])))) ? (max((((/* implicit */int) var_0)), (var_12))) : (((/* implicit */int) var_4))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */signed char) ((((_Bool) 2195517418U)) ? (arr_6 [17] [(unsigned short)1]) : (((/* implicit */long long int) ((((arr_1 [i_2]) + (2147483647))) >> (((((/* implicit */int) var_3)) + (3462))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_0 [i_2]))));
        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2]))) : (((/* implicit */int) arr_0 [i_2]))));
    }
    var_20 *= ((/* implicit */unsigned long long int) var_3);
}
