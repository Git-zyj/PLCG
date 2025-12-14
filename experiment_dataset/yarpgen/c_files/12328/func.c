/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12328
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
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */signed char) (-(arr_5 [i_4] [i_3])));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_1))) << (((((/* implicit */int) var_11)) - (63281)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 15726137706532705893ULL)) && (((/* implicit */_Bool) var_13))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(-398130364)))), (1749292692U)))) % (7211749334491391353ULL))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_5] [i_2] [(_Bool)1] [i_0])) ? ((+(((arr_14 [i_0] [i_6 - 1] [i_0] [i_1] [i_0] [i_1] [i_0]) / (((/* implicit */int) (unsigned short)1848)))))) : (97382039)));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23831)) >> (((/* implicit */int) (signed char)14))))) || (((/* implicit */_Bool) max((arr_10 [12U] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]), (((/* implicit */long long int) arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_7] [(_Bool)1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) arr_9 [i_7 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) max((var_5), (var_8)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 2] [i_1 + 2] [i_7 - 1] [i_8] [i_7 + 3])) ? (arr_10 [i_1 + 2] [i_1] [i_1] [i_7] [i_8] [i_7 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-21756)))))));
                                var_19 = ((/* implicit */unsigned long long int) (unsigned short)63687);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) arr_4 [i_1] [i_1] [i_1 - 1])), ((short)-23832))))));
                        var_21 = ((/* implicit */short) arr_18 [i_0] [i_1] [i_2] [i_1 + 2]);
                        arr_32 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1]))))));
                        arr_33 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) ((arr_22 [i_1 + 2] [i_1 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_1] [i_0]);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((short) var_0))) ? (arr_11 [i_0] [i_1] [i_2] [i_10]) : ((-(((/* implicit */int) (unsigned short)6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65514))))) && ((!(((/* implicit */_Bool) -1353163786)))))))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 22; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned short) max((((arr_31 [i_2]) / (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) arr_23 [i_0] [i_11 + 3])))));
                        var_25 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_38 [i_1] [i_1 + 2] [i_1 + 2] [i_1])))), ((((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [(unsigned char)14] [i_2] [i_2])))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_1] [i_1 - 1])))), (min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)1874)) ? (((/* implicit */int) (unsigned short)63687)) : (-97382040))))))))));
                        var_27 = ((short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                        arr_43 [i_0] [i_1] [i_1] [i_2] [i_12] [i_1] = ((/* implicit */int) var_13);
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] [i_12])), (min((arr_22 [i_0] [i_0]), (((/* implicit */unsigned int) arr_23 [i_0] [i_1])))))))))));
                    }
                }
            } 
        } 
    } 
}
