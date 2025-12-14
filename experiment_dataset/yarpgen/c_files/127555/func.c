/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127555
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
    var_12 = var_4;
    var_13 -= ((/* implicit */short) ((((/* implicit */unsigned int) -962079517)) - (199215914U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(962079515)))) ? (((/* implicit */int) arr_11 [i_3] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6)))) >> (((min((((/* implicit */unsigned int) -962079517)), (arr_3 [i_1 - 1] [i_2 - 1]))) - (2007909615U)))));
                        var_15 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_7 [i_1 + 2])))), (arr_8 [i_1])));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */int) arr_3 [i_0] [i_2]);
                        var_17 = ((/* implicit */unsigned int) arr_13 [i_2 + 1] [i_2] [i_1 - 2]);
                    }
                    for (unsigned int i_5 = 4; i_5 < 18; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_7 [i_1 + 2]))));
                        var_18 = ((/* implicit */unsigned char) arr_10 [i_1] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_19 += (!((_Bool)1));
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) arr_2 [i_0])), (var_2)))))));
                            arr_23 [i_6] [i_1 - 1] [i_6] [i_1] [i_1 + 2] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 962079528)) ? (min((10060482597667091601ULL), (((/* implicit */unsigned long long int) (signed char)-114)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1]))) > (max((arr_5 [i_0] [i_7] [i_2 - 1] [(_Bool)1]), (((/* implicit */unsigned int) (unsigned short)6732))))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((int) (short)-32083)), (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_2 - 2] [i_2] [i_1 + 2] [i_0])), (var_7)))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)120)))), (962079528))))));
                            var_23 &= ((/* implicit */long long int) (_Bool)1);
                        }
                        for (unsigned short i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            arr_29 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 2] [i_9 + 2] [i_9] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)58797);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */long long int) 1233379854)), (min((((long long int) (signed char)116)), (((/* implicit */long long int) ((_Bool) (unsigned short)30178))))))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_25 |= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)35374)), ((-(min((arr_8 [(signed char)16]), (((/* implicit */int) var_8))))))));
                            arr_32 [i_1] [i_10] &= ((/* implicit */_Bool) max((max((((((/* implicit */int) arr_11 [i_1] [i_2] [(_Bool)1] [i_1])) + (((/* implicit */int) (unsigned char)11)))), (((/* implicit */int) min((((/* implicit */signed char) arr_25 [i_10] [i_6] [i_0] [i_1 - 1] [i_10])), (arr_15 [i_10] [i_10] [i_6] [i_0] [i_1] [i_0])))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 7699428378336309529ULL)) ? (7987327788673723403LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] |= ((/* implicit */short) min(((unsigned short)57186), ((unsigned short)6717)));
                        }
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) arr_28 [(unsigned char)2] [2U] [2U] [i_2] [i_2] [i_6] [2LL])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_6])) : (((/* implicit */int) (unsigned char)249)))))))))));
                        var_27 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) ((unsigned char) arr_30 [i_0] [i_1] [i_2] [i_6])))))));
                    }
                    arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) 2998771046U))), (5682904801965587354ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_12])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) (signed char)-7)))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [14LL] [i_0]))))), (min((((/* implicit */unsigned long long int) -1277440802)), (arr_26 [i_0] [i_0] [i_0] [i_11] [18U])))))));
                                var_29 = ((/* implicit */unsigned short) arr_28 [14LL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_30 -= ((/* implicit */_Bool) ((((_Bool) (_Bool)0)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_11])) ? (((/* implicit */int) arr_1 [i_12] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
