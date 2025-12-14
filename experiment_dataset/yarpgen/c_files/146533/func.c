/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146533
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_7 [i_0 - 3] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                arr_8 [i_0] [i_1] = ((/* implicit */int) var_12);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 - 3] [i_0] [i_2] [i_3] = ((((/* implicit */int) (unsigned char)164)) ^ (((/* implicit */int) var_0)));
                            arr_14 [i_0 + 2] [i_3] [i_1] [(signed char)8] [i_3] &= ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)84)), (1732421810)))) == (((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) 1067796440339061218LL)))) ? (7585020000548087830LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)92)) * (((/* implicit */int) var_3)))))))));
                            arr_15 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((unsigned int) arr_10 [i_0] [i_1] [5] [i_3])) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) * (((/* implicit */int) (unsigned char)160))))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) ^ (1987399090U)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)113)))) : ((+(-1556249245))))) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (-1067796440339061236LL)))))))));
                arr_16 [(unsigned short)6] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (signed char)-1);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_4))))) << (((((/* implicit */int) (unsigned short)511)) - (487)))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
        {
            {
                arr_23 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_5 - 1]))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 6; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)82)) >> (((-1316503065) + (1316503092))))))))));
                                arr_32 [i_5] [i_5] [i_4] [(unsigned short)5] [i_8] [i_7] = ((/* implicit */unsigned int) ((((var_5) == (((/* implicit */int) (unsigned char)92)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)251)) : (694282952)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_4] [i_7 + 4] [i_5 + 2]))) : (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [5] [i_7 + 3])) & (((/* implicit */int) (_Bool)1)))))));
                                arr_33 [i_4] |= ((/* implicit */int) var_9);
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-20513)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) (short)-20738))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_19 [i_8])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) : ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1067796440339061218LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        arr_39 [i_4] [i_4] [i_5 + 2] [i_5] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) == (((/* implicit */int) arr_22 [i_9 + 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 4; i_11 < 9; i_11 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_36 [i_9 + 1] [i_5]))))) / ((~(8533836226959210822LL)))));
                            var_19 = ((((/* implicit */int) ((unsigned short) var_7))) << (((-1) + (29))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_12 = 3; i_12 < 8; i_12 += 4) /* same iter space */
                        {
                            var_20 *= ((/* implicit */_Bool) arr_43 [i_4] [i_4] [4] [i_4] [i_4] [i_4]);
                            var_21 |= ((/* implicit */short) arr_28 [i_12 - 2] [i_10] [i_10 + 2] [i_9] [i_5 - 1]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)992))))) ^ (((/* implicit */int) (unsigned char)241))));
                            arr_46 [i_12] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4] [i_5 + 1])) / (((/* implicit */int) (_Bool)1))))) : ((+(13599029101577026342ULL))));
                        }
                        for (long long int i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_38 [i_4] [i_5] [i_9] [i_9])) * (((/* implicit */int) (unsigned short)65535))))));
                            arr_50 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((long long int) 1451928103)) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61716)))));
                        }
                        for (long long int i_14 = 3; i_14 < 8; i_14 += 4) /* same iter space */
                        {
                            var_24 &= ((/* implicit */short) (unsigned char)47);
                            var_25 += ((/* implicit */_Bool) ((arr_1 [i_14 - 1] [i_9 + 1]) << (((((/* implicit */int) (unsigned char)161)) - (160)))));
                        }
                    }
                    for (int i_15 = 2; i_15 < 7; i_15 += 3) 
                    {
                        var_26 -= ((/* implicit */long long int) arr_53 [i_4] [i_15] [i_4]);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)255)) << (((-95946118) + (95946120)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 3; i_16 < 9; i_16 += 2) 
                        {
                            arr_58 [i_16] [i_15] [i_4] [i_9] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) arr_51 [i_9 + 1] [i_15 - 2] [(signed char)8] [i_15] [(_Bool)0] [i_5] [i_5 + 1]);
                            arr_59 [i_4] [i_4] [i_5 + 1] [i_9] [i_15] [i_4] = ((/* implicit */short) ((((((arr_43 [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [i_4]) / (((/* implicit */int) arr_25 [i_16] [i_15])))) + (2147483647))) << (((((/* implicit */int) var_4)) / (((/* implicit */int) var_12))))));
                        }
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8177)) ? (-945565717) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_29 -= (_Bool)1;
                    }
                    arr_60 [(_Bool)0] [(_Bool)0] [i_9] = ((/* implicit */unsigned char) var_9);
                }
            }
        } 
    } 
}
