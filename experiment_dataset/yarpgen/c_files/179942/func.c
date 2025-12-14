/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179942
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (unsigned char)27);
                            arr_12 [i_0] [i_1] [i_2] [(short)10] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))));
                            var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(-6224230225159502127LL)))), (((((/* implicit */_Bool) 13ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)228))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                            {
                                arr_16 [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) (~((+(var_12)))));
                                var_16 = ((/* implicit */_Bool) ((unsigned int) 3380664688U));
                            }
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(3065912834324424026ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_1)))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((-9223372036854775796LL) != (((/* implicit */long long int) var_12))))), (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_11))))))))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            var_19 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)27)))));
            arr_22 [i_6] [2U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6 + 3] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) ((unsigned char) arr_21 [i_5] [i_6 + 2]))) : (((/* implicit */int) (!((_Bool)0))))));
        }
        for (unsigned char i_7 = 4; i_7 < 22; i_7 += 3) 
        {
            arr_25 [i_5] [i_7] [i_7 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */unsigned int) ((arr_23 [i_5] [i_5] [i_5]) ^ (((/* implicit */int) arr_24 [i_5] [i_7 - 2] [i_7 - 2]))))) : (((unsigned int) (unsigned char)225))))) != (min((max((var_13), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_7] [i_7 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) != (18446744073709551609ULL))))))));
            arr_26 [i_5] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)217)))) ? (((max((((/* implicit */int) (short)0)), (arr_23 [i_5] [i_7 + 2] [i_7 + 2]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_29 [i_5] [i_5] = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)27))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (15869497101533892049ULL))) : (((arr_28 [(_Bool)1]) / (arr_28 [i_5]))));
            arr_30 [i_5] [i_8] [i_8] = ((/* implicit */_Bool) (+(max((((long long int) 4677714356313362386LL)), (((/* implicit */long long int) (short)32767))))));
        }
        for (signed char i_9 = 1; i_9 < 24; i_9 += 2) 
        {
            arr_34 [i_5] [8] [i_9 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((14755676533458063648ULL), (((/* implicit */unsigned long long int) arr_27 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15798173187297423907ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_5] [i_9 + 1]))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((min((((unsigned long long int) arr_20 [i_9] [i_9 + 1] [i_5])), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((var_6), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30347))))))))));
            arr_35 [i_5] [i_9] [i_9 + 1] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_28 [i_9 + 1]))));
            var_21 *= (+(((unsigned long long int) (unsigned char)190)));
            /* LoopNest 3 */
            for (signed char i_10 = 2; i_10 < 24; i_10 += 4) 
            {
                for (long long int i_11 = 4; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) (short)12639)))))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_5] [i_9 + 1]))))))))) + (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_11]))) & (1263433344U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30347)) << (((/* implicit */int) (_Bool)1)))))))));
                            arr_44 [i_5] [i_5] [i_12] [i_5] [i_5] [6U] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)27)), (3031533951U)));
                        }
                    } 
                } 
            } 
        }
        arr_45 [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_5]))));
    }
}
