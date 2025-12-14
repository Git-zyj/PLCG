/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135985
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (signed char)127);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 1]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-10590)) || (((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */int) (short)1587)) << (((arr_0 [i_0 + 2]) - (8189451015925015243LL))))))))));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [(_Bool)1] [i_0 + 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])))))) * (max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [(short)17]))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0 + 2]), (((/* implicit */short) arr_3 [i_1] [i_0]))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_4] [i_4])))))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_0 [i_0 + 2]))) >> (((arr_2 [i_2]) - (15516577005389573413ULL)))));
                            arr_15 [(unsigned short)3] [i_0] [i_1] [i_2] [(signed char)13] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_2]))))) || (((/* implicit */_Bool) (signed char)22))));
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)201)) ? (641610678) : (((/* implicit */int) (unsigned char)127)))) << (((max((((/* implicit */long long int) max((1194546459U), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((arr_0 [i_0]), (((/* implicit */long long int) arr_17 [4ULL] [i_3] [i_2] [(unsigned char)6] [i_1] [i_1] [i_0 + 3])))))) - (1194546459LL))))))));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] [(short)2] [i_1] [i_0])) == (((/* implicit */int) ((_Bool) (signed char)-1)))))) >> (((((((((((/* implicit */int) (signed char)-120)) + (2147483647))) >> (((((/* implicit */int) (signed char)-64)) + (72))))) >> (((/* implicit */int) ((arr_19 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_1] [i_3] [i_2] [i_2] [i_1] [i_0 + 2])))))))) - (4194281)))));
                            var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0 + 2])) >> (((9717395186208937853ULL) - (9717395186208937853ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) 1813369062479102086ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)40)))))))));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0 - 2] [i_1])) >= (((/* implicit */int) (short)0)))) ? (((((/* implicit */int) (unsigned char)37)) << (((/* implicit */int) (unsigned char)8)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_6 [(short)1] [i_0 + 1] [(short)1] [i_2] [i_2])) << (((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_1])) - (62349)))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-120)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [15U] [20ULL] [i_3] [i_7]))) > (4413445995224265950ULL))))));
                            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) arr_16 [i_2] [i_0 - 1] [i_2] [i_3] [i_7] [i_1] [i_0]))))) : (((/* implicit */int) (signed char)-32))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (short)27271))));
                            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 11022094576971658364ULL)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_3] [i_3] [i_2] [i_1] [i_7] [i_3])))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1] = ((signed char) (unsigned char)60);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)8]))) ? (((unsigned int) (signed char)-5)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)66), (arr_7 [(unsigned char)19] [i_8] [i_0] [i_3] [i_8])))))))) ? (((/* implicit */int) (((((_Bool)1) ? (8281666299403321645LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) : (((((/* implicit */int) (short)-3564)) * (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                            arr_27 [i_0] [i_1] [i_0] [i_1] [i_0] [i_8] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_3] [i_2] [i_8] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [17ULL] [i_8] [i_2] [i_8]))) : (18221807055133201469ULL))) * (min((((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_1] [i_1] [i_3] [i_8])), (18446744073709551615ULL))))) >= (((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_25 [i_0 - 2] [i_1] [i_0 - 2])))))));
                        }
                        var_30 = (-(((((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_3] [i_3])) * ((((_Bool)1) ? (((/* implicit */int) arr_16 [i_1] [i_1] [0ULL] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned char)6] [i_1] [i_3])))))));
                    }
                    arr_28 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (0ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (short)254)) : (((/* implicit */int) arr_1 [i_0]))))))) >> (((((/* implicit */int) ((unsigned short) (unsigned char)255))) - (223)))));
                    arr_29 [i_0] [i_1] [i_2] = arr_13 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0] [i_0];
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (min((((/* implicit */unsigned long long int) (signed char)37)), (8990952755644754466ULL)))));
                var_32 = ((/* implicit */int) min((var_32), (min((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_0 - 2] [i_0 - 2] [i_0])) : (((/* implicit */int) (unsigned char)250)))), (min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [(unsigned short)7] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)62)))), (((/* implicit */int) (!(((/* implicit */_Bool) -1815483323902584359LL)))))))))));
                var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_5 [i_0 + 2] [1LL])))));
            }
        } 
    } 
    var_34 = ((/* implicit */short) var_3);
    var_35 -= ((/* implicit */unsigned short) var_9);
}
