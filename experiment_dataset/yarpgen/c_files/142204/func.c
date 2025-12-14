/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142204
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_16 = min((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1475095445))))), (var_5))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)17428))))) && (((/* implicit */_Bool) max((2147483642), (((/* implicit */int) var_15)))))))));
        arr_3 [i_0] [i_0 - 4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) > (var_9)))), (((unsigned int) var_12))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((1171544362U) - (1171544362U)))))), (min((((/* implicit */unsigned long long int) var_6)), (0ULL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)247)), (var_10)))) ? (((/* implicit */int) ((0U) < (2851051040U)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_3] [i_4] [(unsigned char)8] [(unsigned char)8] [i_3] [i_1] = max((min(((-(1171544362U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)15))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) < (max((619760738U), (var_0)))))));
                                var_17 = ((/* implicit */unsigned char) (-(max(((-(1171544362U))), (min((((/* implicit */unsigned int) var_5)), (1171544355U)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (3401747699U)));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((4294967281U), (((/* implicit */unsigned int) ((3120810535U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
    }
    var_20 ^= ((/* implicit */unsigned short) var_8);
}
