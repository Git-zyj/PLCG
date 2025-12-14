/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163747
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
    var_13 = ((/* implicit */unsigned char) ((unsigned short) (short)-24563));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13868)) && (((/* implicit */_Bool) 398349897U)))) && (((/* implicit */_Bool) var_1))))), ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (short)24563)))))))));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((short) max((((/* implicit */short) var_12)), (var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] |= ((((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) -4928418967444601218LL))))) - (((/* implicit */int) (signed char)75)));
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2694633512246488622LL), (((/* implicit */long long int) arr_7 [i_2] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [(unsigned short)1] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((arr_11 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_3] [10])))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned char)249))) / (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_7))))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [21LL] = ((short) (-(((9223372036854775807LL) % (((/* implicit */long long int) arr_0 [22U]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : ((-(((((/* implicit */_Bool) 4294967277U)) ? (arr_11 [i_0] [i_1] [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)12] [i_5])))))))));
                    arr_21 [i_5] = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((unsigned char) (short)-24573))))) / (((/* implicit */int) ((unsigned short) ((((((/* implicit */int) (short)-24563)) + (2147483647))) << (((((/* implicit */int) var_3)) - (174)))))))));
                }
                for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_6] [i_1] [i_0 + 4] [i_1]);
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_29 [i_6] [i_6] [(unsigned char)8] [i_6 - 1] [i_6 - 2]))))))));
                            var_20 = ((/* implicit */unsigned int) var_10);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)246))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)231)))))) : (((long long int) var_11))))) ? ((-(((int) arr_10 [i_0] [i_1] [i_0] [(unsigned char)21] [i_1] [i_8])))) : (((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [(short)10] [i_0] [i_0 + 4])), (max((((/* implicit */short) var_12)), (arr_24 [i_8] [i_8] [i_8] [i_8]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_22 *= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1])) & (((/* implicit */int) arr_4 [i_6 + 2] [i_9]))));
                            arr_33 [i_9] [i_0] = arr_16 [i_0] [i_0] [i_6 - 1] [i_7] [i_0] [i_9] [i_0];
                            var_23 = ((/* implicit */signed char) var_4);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((-(-5036934061662814128LL))))))));
                        }
                        var_25 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1222)), (arr_5 [i_1] [i_7])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_0 - 3] [i_10] [i_0 - 3] [(signed char)19] [i_0] = ((/* implicit */unsigned short) ((((long long int) 2694633512246488648LL)) % (((/* implicit */long long int) (~(24))))));
                        var_26 = ((/* implicit */long long int) ((short) ((unsigned char) arr_25 [i_6 + 1] [i_1] [i_0])));
                    }
                }
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((arr_19 [i_0] [i_0]), (((/* implicit */unsigned int) arr_24 [i_0 + 1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_12)), (2694633512246488607LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_27 [i_0 + 1] [i_1] [i_1] [i_1]))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((max((127U), (((/* implicit */unsigned int) (_Bool)1)))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_11] [i_1] [i_0 + 4] [i_0 + 4])))))));
                    var_29 = ((/* implicit */short) max((((max((16383LL), (arr_35 [i_0] [i_0] [i_1] [i_0]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) (~(max((var_8), (((/* implicit */unsigned int) var_3)))))))));
                }
            }
        } 
    } 
}
