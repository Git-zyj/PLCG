/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128567
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))) == (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_19 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1U)) < (18446744073709551615ULL)))), (18446744073709551615ULL)));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (signed char)-1)), (18446744073709551598ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) var_6)) : (6381637318198176315ULL)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (134217727)))));
                            var_20 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_16)))), (((/* implicit */int) min(((signed char)-68), (var_11))))));
                            var_21 = (-(max(((-(((/* implicit */int) (short)-32761)))), (896142801))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */short) var_15);
                var_22 = max((min((((/* implicit */unsigned long long int) 914796342U)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (1ULL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((unsigned short) var_5));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [(unsigned char)8] [i_5] = ((/* implicit */short) (-(max(((-(((/* implicit */int) (signed char)95)))), (((int) 1ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((signed char) 2897097017U));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) var_15))), (max((((/* implicit */unsigned long long int) 896142801)), (0ULL)))));
                        var_25 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) var_7)), (var_3)))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned int) (signed char)95)), (var_3)))))));
                            arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-51)) == (((/* implicit */int) (unsigned char)255))));
                            arr_35 [6ULL] [i_9] [i_6] [i_5] = min((18421535566469576438ULL), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) -1544144809)) : (var_10)))));
                            var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)50))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (short)-12103))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)7443)) >= (((/* implicit */int) (unsigned char)9)))))) : (min((((/* implicit */unsigned long long int) var_8)), (15517704373615092273ULL)))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) 2897097044U))), (min((((/* implicit */unsigned int) var_14)), (var_8))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) max(((short)-32755), (((/* implicit */short) (unsigned char)255)))))));
                            var_30 += ((/* implicit */int) max(((signed char)57), (var_11)));
                            var_31 = min((((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-32767))))))), (((((/* implicit */_Bool) ((1397870252U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))) ? ((~(1397870239U))) : (min((1397870254U), (((/* implicit */unsigned int) (_Bool)1)))))));
                            arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned char)243);
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) max((4294967295U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))))));
                            var_33 = ((/* implicit */unsigned long long int) ((short) (signed char)-46));
                            var_34 |= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((signed char) var_14))), (2897097044U))), (((/* implicit */unsigned int) var_14))));
                            arr_41 [i_6] = ((/* implicit */unsigned int) (+(((int) var_9))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        arr_45 [i_5] [i_5] [i_5] [5LL] [i_5] |= ((/* implicit */long long int) var_8);
                        var_35 = ((/* implicit */signed char) (short)-1);
                    }
                }
            } 
        } 
    } 
}
