/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125538
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_13 -= ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_2] [(signed char)5]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_1))));
                                arr_16 [i_0] [i_0] [(unsigned char)2] [10U] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (5063790121879232201LL))) <= (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) / (var_6))) + (var_0)))));
                                var_15 = ((/* implicit */int) max((var_15), (((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 4])) ? (((/* implicit */int) (unsigned short)16842)) : (((/* implicit */int) arr_10 [i_0 - 1] [4] [(unsigned short)8] [i_1 - 4] [i_1 - 1])))) / (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_1] [i_1 - 3] [i_1 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_19 [i_5] = arr_0 [i_5];
        arr_20 [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */int) arr_18 [i_5])) * (((/* implicit */int) arr_2 [i_5]))));
        arr_21 [i_5] [i_5] = (-(3041514389U));
        arr_22 [i_5] |= ((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_23 [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30668))) * (3260924061U));
    }
    var_16 = ((/* implicit */unsigned short) ((max((var_8), (((/* implicit */long long int) var_10)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)42121)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (signed char)17)), (4294967290U))))))));
}
