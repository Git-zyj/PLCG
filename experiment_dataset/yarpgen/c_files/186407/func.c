/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186407
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [8U] [i_3])))), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_5)))))) & (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_4 [i_0])) : ((~(((/* implicit */int) arr_8 [i_0] [i_3] [i_3]))))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) var_16)), ((((+(arr_14 [i_0] [i_0] [(unsigned short)7] [i_0] [(unsigned short)7] [i_4]))) / (((arr_14 [14] [i_1 - 1] [i_1] [i_1 - 1] [14] [14]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20607))));
                            var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) (+(3344020742U)))) / (max((arr_14 [i_5] [i_5] [i_4] [i_4] [i_5] [i_4]), (((/* implicit */long long int) var_13)))))));
                            var_21 |= ((/* implicit */unsigned short) max((max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) >= (var_4)))), ((+(var_1))))))));
                            arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_5] |= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)6))))), ((((_Bool)0) ? (min((((/* implicit */long long int) var_13)), (arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_5]))) : (((/* implicit */long long int) ((int) var_3)))))));
                        }
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) >> (((((((/* implicit */_Bool) (-(var_4)))) ? ((~(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_12)))))) + (52397)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) - (var_3)));
                        arr_20 [i_0 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1361364915)) ? ((((+(((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))) + (15144))))) : (((/* implicit */int) (signed char)-84))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_27 [i_6] [i_6] [i_1] [i_2] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_11 [i_1 + 1]))))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (var_8)));
                            var_25 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_12)), (var_1))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) ((signed char) (unsigned char)6));
                            arr_31 [i_0] [i_1] [i_2] [(signed char)4] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)84))))) - (min((((/* implicit */unsigned int) (unsigned char)128)), (var_6))))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 3) 
                        {
                            arr_34 [i_6] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) var_8))))));
                            var_27 += ((/* implicit */long long int) var_2);
                        }
                        arr_35 [i_0 + 2] [i_1] [i_2] [i_6] = ((/* implicit */long long int) max(((~(min((4610560118520545280ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_0] [i_0] [i_2] [i_0] [i_6])))));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        var_28 &= ((/* implicit */unsigned short) var_3);
                        var_29 = ((/* implicit */unsigned short) (~(min((arr_12 [i_0 + 1] [i_1] [i_2] [i_10]), (((/* implicit */long long int) arr_26 [i_0 + 2]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) & (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_11 + 1] [i_1]))))) >= (var_6)));
                                arr_44 [i_0] [i_1] [i_0] [i_0] [i_12] = ((/* implicit */_Bool) (+(max((var_4), ((~(var_11)))))));
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (_Bool)1))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) min((var_32), (((_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2])) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) ((short) -5565994392484661007LL));
    var_34 -= ((/* implicit */short) max((max((((((/* implicit */_Bool) 14388756874487667496ULL)) ? (((/* implicit */int) var_0)) : (-219135282))), ((+(((/* implicit */int) var_16)))))), (((/* implicit */int) ((_Bool) ((_Bool) var_0))))));
}
