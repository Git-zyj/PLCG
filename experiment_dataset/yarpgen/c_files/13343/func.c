/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13343
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) var_13));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) max(((+(1U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)253)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39634)) ? (((/* implicit */unsigned int) (-(-18)))) : (6144U)));
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned int) var_8);
                    var_23 = ((/* implicit */int) -1296255224244946033LL);
                }
                for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_16 [i_0] [(unsigned char)10] [i_0] [i_4] = ((/* implicit */short) ((int) ((8211021899354699664ULL) & (((/* implicit */unsigned long long int) -2138626203098721855LL)))));
                        var_24 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_4])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((~(1086166806277536149ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20)))))));
                        arr_17 [8U] [8U] [8U] [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 2LL));
                        arr_18 [i_0] [i_1 + 1] [i_0] [i_1 + 1] = ((/* implicit */short) (~(((var_13) & ((~(4294967295U)))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_14 [i_3 - 3] [i_4]);
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1]))))), (2147483647)))), (max((((((/* implicit */_Bool) 1048064U)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_14 [i_0] [i_0]))), (((/* implicit */long long int) arr_3 [i_0]))))));
                    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((arr_12 [i_3]), (arr_3 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) 14259010770277908030ULL))))))))));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) 1337891327682636750ULL))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((12003549883828703075ULL), (((/* implicit */unsigned long long int) (short)-23286))));
                }
                var_29 ^= ((/* implicit */unsigned int) 0LL);
                arr_22 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */long long int) (-2147483647 - 1))) >= (var_3))) || (((/* implicit */_Bool) (short)-1))))), (((((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-14606)))))) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) (unsigned short)19576)), (arr_12 [15ULL])))))));
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 1152921504606814208ULL))));
            }
        } 
    } 
}
