/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168341
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */short) (unsigned char)15);
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 18289498389823722035ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] [i_2]))) : (arr_5 [i_3] [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                        var_12 = ((/* implicit */unsigned int) (-(max(((-(((/* implicit */int) arr_1 [i_3])))), (arr_11 [i_0] [i_1])))));
                        arr_19 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_15 [i_1 + 1] [i_1 + 3] [i_0] [i_0]);
                        var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (var_1))), (((/* implicit */unsigned long long int) arr_2 [i_1 + 1]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (18289498389823722035ULL) : (((/* implicit */unsigned long long int) 874693111U)))))));
        var_15 = ((/* implicit */signed char) ((((9245240726944428210ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4])))));
        arr_23 [i_4] |= ((/* implicit */unsigned char) arr_20 [i_4 + 2]);
        var_16 = ((/* implicit */short) arr_8 [i_4] [(unsigned short)2] [i_4]);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_27 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            arr_28 [i_5] [i_4] = ((/* implicit */signed char) 9223372036854775807LL);
        }
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_2))))) || (((/* implicit */_Bool) ((14833982582491048799ULL) / (17855576168840213145ULL)))))))))))));
    var_18 = ((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_5))), (var_5)));
    var_19 = ((/* implicit */unsigned long long int) (-(max((9223372036854775807LL), (((/* implicit */long long int) 1610612736))))));
}
