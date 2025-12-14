/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181359
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(max((var_4), (var_10)))))) >= (((var_0) - (max((var_5), (130528126U)))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(var_1)))) == (min((((/* implicit */long long int) var_2)), (((var_9) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))))));
    var_14 = (-(max((((/* implicit */unsigned int) max((var_2), ((unsigned char)8)))), (((((/* implicit */_Bool) -2147483645)) ? (532253564U) : (var_5))))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)221)) - (var_10)))), (((min((((/* implicit */long long int) var_4)), (var_9))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (3762713731U) : (((/* implicit */unsigned int) var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */long long int) ((unsigned char) max((var_3), (var_2))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (532253576U) : (131068U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (var_11) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)242)), (var_0))))))));
                            var_16 -= (~((~(((/* implicit */int) (unsigned char)21)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            var_17 += (-((-(((/* implicit */int) max(((unsigned char)14), (var_6)))))));
            arr_18 [11U] [i_0] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2023346125), (var_4)))) ? (max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (unsigned char)250)))) : (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (+(var_10)))))))));
            var_18 = ((/* implicit */int) var_6);
            var_19 += ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        }
        arr_19 [i_0] = ((/* implicit */int) max((((var_11) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (-5508338076904593327LL))))), (((/* implicit */long long int) ((max((((/* implicit */int) var_6)), (var_10))) > (((/* implicit */int) ((((/* implicit */int) var_2)) < (var_7)))))))));
    }
}
