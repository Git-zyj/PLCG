/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172484
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_4))))) : (max((var_5), (((/* implicit */unsigned long long int) var_7)))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 4] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(max((((/* implicit */int) var_13)), (var_7)))))), (max((var_16), (((/* implicit */unsigned int) var_12))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned char) max((var_16), (((/* implicit */unsigned int) var_0))))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */signed char) max((var_2), (var_13)))), (max((var_14), (var_10))))))));
                        var_20 *= ((/* implicit */_Bool) (-(((unsigned long long int) var_2))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9))) % (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9))), (var_9)))));
                        var_22 = ((/* implicit */unsigned int) var_10);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_7)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_3)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_3)) - (17))))) : (((/* implicit */int) var_4)))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(((unsigned long long int) var_16)))))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) 
                    {
                        var_26 = (~(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                        var_27 = ((/* implicit */signed char) (((+((-(var_16))))) << (((((((/* implicit */_Bool) (+(var_7)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_11)))))))) - (17593159602066924703ULL)))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned char) var_11)))))))) ? (max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_10))))))) : (((/* implicit */int) var_3)))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */short) var_10)), (var_0))), (((/* implicit */short) var_4)))))) : ((-(var_9)))));
                        var_30 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) var_5))))));
                        var_31 |= ((/* implicit */short) ((var_2) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned int) ((int) var_1))) : (max((10U), (((/* implicit */unsigned int) (unsigned char)72))))))));
                        var_32 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_2)), (var_0))))));
                        arr_19 [i_6] [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_10)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_13)), (var_11)))))), (((unsigned long long int) var_12))));
                    }
                }
            } 
        } 
        arr_20 [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_11)))), (max((var_7), (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (var_7)))) ? (max((var_15), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) max((4294967272U), (((/* implicit */unsigned int) (short)32754)))))))));
    }
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        for (short i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            {
                var_33 |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_15))));
                var_34 = ((/* implicit */unsigned long long int) ((short) var_3));
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) ((_Bool) var_12));
}
