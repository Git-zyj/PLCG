/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133135
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
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (var_12)))) ? (((/* implicit */long long int) var_3)) : (var_6)));
    var_19 = ((/* implicit */unsigned int) ((-3622683600378959523LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_5);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((var_12) - (2317576441U)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)55)) - (51)))))))) : (var_5)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_21 = ((/* implicit */int) arr_9 [i_1] [i_0 - 1] [i_0 - 1]);
                var_22 = ((/* implicit */unsigned char) (_Bool)1);
                var_23 += ((var_5) == (((/* implicit */unsigned long long int) arr_2 [i_2])));
            }
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                    var_24 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((max((arr_4 [i_0] [i_0 + 2] [i_0 + 1]), (((/* implicit */int) arr_14 [i_4])))), (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))))))), (((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned long long int) 1462286505)), (arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))) : (max((arr_9 [i_1] [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_2 [(_Bool)0]))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) << (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 3] [i_0 + 3])) < (((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 3] [i_0 - 2])))))));
                }
                /* vectorizable */
                for (short i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    arr_19 [i_5] [i_5] [i_5] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) var_16)) == (((/* implicit */int) arr_14 [i_0 + 3]))));
                    var_26 = ((/* implicit */unsigned char) arr_9 [i_5 - 2] [i_5 + 1] [i_0 + 1]);
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                }
            }
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1])) < (((/* implicit */int) var_4))));
                var_29 |= ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_1]);
                arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_21 [i_6] [i_1] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [i_1] [i_1] [i_6] [i_0 + 3])), (arr_1 [i_0] [i_0])))))));
                var_30 = ((((/* implicit */int) ((signed char) arr_23 [i_0] [i_6] [i_0]))) << (((((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 1])) + (82))));
            }
            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_1] [i_7] [i_7]) >> (((arr_20 [i_7 + 3] [i_1] [i_0 + 2] [i_0]) + (2952421718108130358LL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_7 + 2])) + (((/* implicit */int) arr_13 [i_0] [i_1] [i_7 - 1])))))));
                var_32 -= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) var_14)) - (71))))));
            }
        }
        for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            var_33 |= ((/* implicit */unsigned short) var_3);
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
        }
        var_34 = ((/* implicit */_Bool) var_17);
    }
}
