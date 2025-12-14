/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180000
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((var_4) / (((unsigned long long int) min((var_16), (((/* implicit */long long int) 3246034559U)))))))));
    var_20 = ((/* implicit */int) ((signed char) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (1048932737U) : (3246034559U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (1048932755U))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) + (3246034559U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (arr_7 [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048932736U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                    var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1048932719U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((((unsigned long long int) (signed char)124)), (min((25ULL), (((/* implicit */unsigned long long int) var_13))))));
                            var_25 |= ((/* implicit */unsigned int) arr_17 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) & (1ULL))))))), (-8064735485697543991LL))))));
                    var_27 = ((/* implicit */unsigned short) arr_20 [i_3] [i_7 + 1] [i_7 - 3]);
                    var_28 -= ((/* implicit */signed char) var_5);
                }
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3]);
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1093540945U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((~(((/* implicit */int) var_10)))))) + (((/* implicit */int) (unsigned short)0)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 17; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) (unsigned short)65535)));
                        var_31 = ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */unsigned long long int) ((long long int) 4294967295U))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            var_32 ^= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_11)), (256786448926331224ULL))), (((/* implicit */unsigned long long int) ((((var_14) % (((/* implicit */unsigned long long int) var_15)))) > (((/* implicit */unsigned long long int) var_1)))))));
                            var_33 = ((/* implicit */unsigned short) arr_16 [i_3]);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_3])) ? (2948145888U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3])) | (((/* implicit */int) var_12)))))))), (max((7019910167404134673ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_11] [i_10] [i_8] [i_4] [i_3])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))))))))))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)124)), ((unsigned short)0))))) : (max((arr_22 [i_10]), (12339049780970788698ULL)))))) ? (min((var_2), (((/* implicit */unsigned long long int) (signed char)11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((-6808639513675340600LL) >= (((/* implicit */long long int) 2948145888U))))), (2948145888U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) var_9)) : (var_0)))))) : ((-(var_2)))));
                            var_37 |= ((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_4]);
                            arr_38 [i_12] [i_3] [i_10] [i_8] [6ULL] [i_3] [i_3] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) max(((unsigned short)33996), ((unsigned short)65531)))), (15194148112427177659ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_3] [i_3])) % (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_8 - 2])) : ((~(1781524884)))));
                            var_39 = ((/* implicit */unsigned long long int) ((int) var_13));
                        }
                        var_40 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 2])) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) ((unsigned short) arr_14 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])))));
                    }
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((unsigned int) 0U));
                            arr_48 [i_3] [(signed char)6] [i_8] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_10))))) < (5025617953847590418ULL))), ((!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_8]))))));
                            var_42 = 3246034540U;
                            var_43 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1193178033), (((/* implicit */int) (!(((/* implicit */_Bool) 4097535610U)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_8] [i_4])) || (((/* implicit */_Bool) arr_12 [i_8]))))), (arr_29 [i_3] [i_8 - 2] [i_8]))))));
                            arr_49 [i_3] [i_4] [i_4] [i_14] [i_15] [i_15] |= ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_3] [i_4]))) ^ (arr_13 [i_3] [i_3] [i_3]))) + (arr_32 [i_14] [i_4] [i_8 - 1] [i_14] [i_14]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (1193178032)))), (min((631797536U), (((/* implicit */unsigned int) arr_9 [i_8])))))))));
                        }
                        var_44 = ((/* implicit */unsigned int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_31 [i_8] [i_8] [i_3] [i_8 - 1] [i_8 - 2] [i_14]))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned int) min((var_45), (max((1048932737U), (((((((/* implicit */unsigned int) var_13)) / (747899383U))) + (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)127)), (var_13))))))))));
                        arr_53 [i_16] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 7);
                        arr_54 [i_3] [i_8] [i_8] [8ULL] |= ((/* implicit */unsigned int) ((max((-9223372036854775794LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)105))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3246034574U))))))))));
                    }
                }
            }
        } 
    } 
}
