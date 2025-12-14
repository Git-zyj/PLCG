/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173804
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0])) : ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_18);
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967288U)))));
        arr_9 [i_1] = ((/* implicit */unsigned int) (+((-(var_1)))));
        arr_10 [(short)8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1] [i_1])), ((unsigned short)49278)))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1 + 3] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) : (min((var_15), (var_15)))))));
    }
    for (signed char i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */_Bool) (~(var_14)));
        var_22 = ((/* implicit */unsigned long long int) var_18);
        arr_14 [i_2 + 3] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) ^ (((((/* implicit */_Bool) (unsigned short)49288)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))))))));
    }
    var_23 = ((/* implicit */signed char) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)63))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) || (((/* implicit */_Bool) var_2)))))));
    var_25 += ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned int i_6 = 4; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_25 [4ULL] [i_6] [i_4] [i_4 - 1] &= ((/* implicit */signed char) var_0);
                            var_26 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_19 [i_4 + 1] [i_5 + 2])))) + (2147483647))) >> (((var_6) - (488635341)))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_7 [i_4 + 1] [i_3]))))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (-887755099)))) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (max((arr_16 [i_3] [i_3]), (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                {
                    arr_30 [1U] [i_4 - 1] [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)30414), (((/* implicit */unsigned short) (short)-5906))))) << (((((((/* implicit */_Bool) min((var_14), (((/* implicit */int) (unsigned char)192))))) ? (var_15) : (((/* implicit */unsigned long long int) (~(-405901730)))))) - (10778672854719248156ULL)))));
                    var_28 = ((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_4] [i_7]);
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((((((/* implicit */int) arr_31 [(unsigned short)20] [i_4] [i_4])) << (((arr_16 [i_7 - 1] [i_7]) - (1047173057))))) | ((+(((/* implicit */int) arr_19 [i_3] [i_7 - 1]))))))));
                        arr_35 [i_8 + 3] [i_8] [i_7] [i_4] [i_8] [i_3] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)5609)) ? (((/* implicit */int) (unsigned short)49278)) : (((/* implicit */int) (short)-32082))))), ((-(max((var_7), (((/* implicit */long long int) var_4)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((max((17U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48708)) && (((/* implicit */_Bool) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_7 - 2])) ? (((/* implicit */int) (!(arr_18 [i_4] [i_7 - 1] [i_8])))) : (((((/* implicit */_Bool) 1339610528)) ? (((/* implicit */int) var_8)) : (arr_17 [i_4] [i_4])))))))))));
                    }
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        arr_39 [i_3] [i_4] [i_7] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) == (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_4]))) / (var_7))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_27 [i_3]);
                        var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [7ULL] [i_4]))) % (4607182418800017408LL)))) : ((+(17418925267500394395ULL)))))) ? (((/* implicit */int) var_18)) : (arr_17 [i_4 - 1] [i_7])));
                        var_33 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)-32082)))), (887755098)));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) var_6);
                        arr_42 [i_3] [i_3] [i_3] [i_3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) var_9)) : (((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3])))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) arr_12 [i_3]);
                        arr_45 [i_7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((arr_28 [i_7]), (((/* implicit */long long int) 0U)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))))) - (((/* implicit */int) arr_44 [i_3] [(unsigned short)1] [i_7] [i_11] [(unsigned short)1]))));
                        var_36 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((arr_44 [i_3] [i_3] [i_7 + 1] [i_3] [i_11 - 1]) ? (((/* implicit */int) arr_44 [i_3] [i_4] [i_4] [i_7 - 1] [i_3])) : (((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) arr_12 [(unsigned char)21])) ^ (var_1)))))));
                        arr_46 [i_4] [(signed char)12] [i_7] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) 7887676215539800437LL));
                    }
                }
                var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(-8388608)))), (var_15)));
            }
        } 
    } 
}
