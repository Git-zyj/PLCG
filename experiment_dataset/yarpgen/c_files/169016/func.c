/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169016
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((4503599627370240LL), (((/* implicit */long long int) (unsigned short)65510))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) * (var_0))), (min((var_8), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((396565205616266798ULL) << (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            var_22 = ((/* implicit */signed char) (+((~(((/* implicit */int) (unsigned short)54283))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1 + 3] [i_0]);
            var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (0ULL))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) < (max((2044), (((/* implicit */int) var_17)))))))));
        }
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (min((146215291), (1408243724)))))), (max((((/* implicit */unsigned long long int) var_15)), (min((14162796724519730612ULL), (((/* implicit */unsigned long long int) (unsigned short)29651))))))));
                var_25 += ((/* implicit */unsigned int) arr_1 [i_3]);
                arr_11 [i_2] = ((/* implicit */unsigned char) var_10);
            }
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            var_27 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (signed char)55)))), (((2044) * (((/* implicit */int) (short)32767))))));
            }
            var_29 = var_12;
        }
    }
}
