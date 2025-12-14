/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113076
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
    var_11 -= var_0;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) var_9);
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((-7742659256997071719LL) ^ (9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [9LL] [9LL]))))))));
                arr_5 [i_0] [i_1] [i_1 - 1] = max((min((max((var_10), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) max((var_6), (arr_1 [i_0])))))), (((/* implicit */long long int) max((((int) var_0)), (((/* implicit */int) (unsigned char)240))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned int) min((max((max((((/* implicit */long long int) (unsigned char)1)), (4074125852472028283LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1))))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)46)))))));
                    arr_8 [16U] [(unsigned char)5] [i_2] [i_1] = ((((long long int) var_10)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)238);
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_1 + 2] [i_1])) ? (arr_13 [i_1] [i_1] [(_Bool)1] [i_1 - 1] [(unsigned short)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_1)))))) : (max((arr_13 [i_1] [i_1] [i_1] [i_1 + 2] [i_4]), (arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));
                                var_15 = min((max((((/* implicit */long long int) arr_12 [i_0] [i_1 + 2] [i_3] [i_4])), (min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_3])), (var_10))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65533)) << (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)54)))) - (53)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) var_1);
                        var_16 = max(((unsigned char)6), ((unsigned char)48));
                        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 2] [i_6 + 3])) ? (arr_3 [i_1 + 2] [i_3] [i_6 + 3]) : (arr_3 [i_1 + 2] [(unsigned char)11] [i_6 + 3]))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)188)))));
                        var_18 ^= ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_14 [i_1 - 1] [i_6 - 2] [i_6] [i_1 - 1] [i_6] [i_6])), (arr_13 [i_0] [i_1 - 1] [i_6 - 3] [i_0] [i_6]))), (((min((var_10), (((/* implicit */long long int) arr_16 [i_0])))) | (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        arr_23 [(_Bool)1] [i_0] [i_1] [i_0] = (unsigned char)19;
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_7 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1528127188U)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [(unsigned char)10] [i_3] [i_3])) : (((/* implicit */int) arr_11 [(unsigned char)8] [i_0] [i_0] [i_7])))) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_7 + 3] [i_7 - 2]))));
                        arr_25 [i_1] [i_1] [i_3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_7 + 1] [i_1 - 1] [i_1 + 2] [(unsigned char)13])) ? (var_5) : (((/* implicit */unsigned int) 2147483647))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_30 [(unsigned char)11] [i_0] [(unsigned char)11] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) max((min((arr_11 [i_8] [i_8] [i_3] [i_8]), (var_0))), (((/* implicit */unsigned short) (unsigned char)29))))) > (max((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) >> (((var_10) - (3886086497948212685LL))))), (((/* implicit */int) (unsigned char)227))))));
                        var_19 = arr_28 [i_1];
                        arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_0] [i_1 + 1] [i_3] [i_0]))))), (arr_16 [i_1 + 1])))) ? ((~(((/* implicit */int) (unsigned char)74)))) : (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) var_3))))));
                        arr_32 [i_1] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (unsigned char)3))))))));
                        arr_33 [i_1] [(unsigned short)7] [i_1] = ((/* implicit */unsigned short) var_10);
                    }
                    arr_34 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max(((unsigned char)10), ((unsigned char)255))), ((unsigned char)95)))) ? (((/* implicit */int) arr_14 [18LL] [18LL] [i_3] [i_1 + 2] [(unsigned short)10] [i_1 + 2])) : ((~(((/* implicit */int) arr_18 [i_1 + 2] [i_3] [i_1 - 1]))))));
                }
                var_20 = ((/* implicit */unsigned short) min(((-(min((((/* implicit */unsigned int) (unsigned char)100)), (4193219771U))))), ((-(((unsigned int) var_8))))));
            }
        } 
    } 
}
