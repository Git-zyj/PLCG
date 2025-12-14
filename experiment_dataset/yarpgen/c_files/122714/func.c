/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122714
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) * (((/* implicit */int) ((_Bool) (+(0U)))))));
    var_14 = ((/* implicit */short) ((int) min((((((/* implicit */_Bool) var_10)) ? (4294967294U) : (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) var_2)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 10U))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((((arr_1 [i_0] [i_0]) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((_Bool) var_6))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) var_8)), ((~(((((/* implicit */int) arr_1 [i_0] [i_0])) << (((18446744073709551615ULL) - (18446744073709551587ULL)))))))));
            var_17 -= (~(18446744073709551599ULL));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) var_5)), (var_0)));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 7; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_2 - 2] [i_2] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 2] [i_0]))) ^ (1379333273U)));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 4; i_5 < 7; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_2] [i_3 + 2] [i_0] [i_0] = ((/* implicit */int) 15097146458536630497ULL);
                        arr_20 [i_0] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)44483);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((var_1) ^ (((/* implicit */long long int) var_7)))))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) + (((unsigned long long int) 4294967295U))));
                }
                arr_21 [i_0] [i_3] = ((/* implicit */unsigned short) (_Bool)0);
            }
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 3) /* same iter space */
            {
                arr_24 [i_0] [i_2 + 2] [i_0] [i_2 + 1] = ((/* implicit */signed char) 3LL);
                arr_25 [i_0] = ((/* implicit */unsigned long long int) 386834081U);
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((((arr_13 [i_0] [i_0] [i_2 + 3] [i_6]) + (2147483647))) >> (((var_7) - (209983424))));
                arr_27 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_2 - 2] [i_0] [i_0]);
            }
            for (unsigned short i_7 = 1; i_7 < 8; i_7 += 3) /* same iter space */
            {
                var_20 ^= ((/* implicit */unsigned short) 2078738105U);
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_21 *= (_Bool)0;
                            arr_35 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                            arr_36 [i_0] [i_8 + 1] [i_7 + 1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_0] [i_2 - 2])) ? (var_3) : (((/* implicit */unsigned long long int) arr_15 [i_2 + 1] [i_2 - 2]))));
                            arr_37 [i_9] [i_8] [i_0] [i_2 + 3] [i_0] = ((/* implicit */int) var_10);
                        }
                    } 
                } 
            }
            arr_38 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) >= (4294967295U));
            arr_39 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3LL) >> (((var_3) - (2314972807791728431ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-589479395744871576LL)))));
        }
    }
}
