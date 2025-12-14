/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146922
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
    var_20 = ((short) ((short) (~(((/* implicit */int) var_19)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)254))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)28970)) ? (((/* implicit */int) (unsigned short)26595)) : (((/* implicit */int) (short)-6894))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)35461))));
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6890)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0]))))));
            arr_5 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_7 [i_0] [i_2])))))) : ((-(var_9)))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 1])) >= (((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 1])))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_2])) & (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2]))));
                        var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9)));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) (short)-4096));
                    }
                } 
            } 
            arr_15 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_2] [i_0]))))) ? (arr_12 [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 2])))));
        }
    }
    var_29 = var_19;
}
