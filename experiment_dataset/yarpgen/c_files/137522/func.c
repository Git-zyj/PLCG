/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137522
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) 18446744073709551615ULL);
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_16)) < (((/* implicit */int) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((var_16) ? (((/* implicit */int) (short)-30334)) : (((/* implicit */int) arr_5 [i_6] [i_5 + 1] [i_2 + 3] [i_1 + 1]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2] [i_2])) / (arr_4 [i_0] [i_0] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5625663464257463359ULL)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-8557868007214746119LL)));
                        }
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((arr_20 [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2 + 3]) > (arr_20 [i_2] [i_2 + 3] [(short)2] [i_2] [i_2] [i_2 + 3])));
                            arr_21 [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_7 + 1] [i_2] [i_0]);
                            arr_22 [3] [3] [i_2] [i_7] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_5 - 1] [i_7 - 1])) ? (((/* implicit */int) (unsigned short)1)) : (var_2))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned short) ((_Bool) (short)20051));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [i_8 + 2] [i_0] [i_2] [i_1] [i_0]) + (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) (unsigned short)65533)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_5))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9))))) ? (((((/* implicit */_Bool) (short)4877)) ? (((/* implicit */int) (short)11288)) : (((/* implicit */int) (short)-3870)))) : (((/* implicit */int) (unsigned short)15433))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 + 1] [i_1 - 1]))) <= (arr_18 [i_1] [i_1] [i_1] [i_1 - 3] [i_1])));
                            var_29 = (~(arr_20 [i_2] [i_1] [i_2] [(short)7] [i_2] [i_2]));
                            var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) ((unsigned short) var_10)))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            arr_31 [i_0] [i_2] [20] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65517)) << (((arr_13 [i_0] [i_1 - 1] [i_2] [i_5] [i_10]) + (846952929)))))) ? ((+(((/* implicit */int) var_0)))) : (arr_12 [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1])));
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16660)) - (arr_0 [i_0])));
                        }
                        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 4) 
                        {
                            var_32 -= ((/* implicit */_Bool) (short)-16640);
                            var_33 = ((/* implicit */_Bool) ((1512569539) / (((/* implicit */int) (unsigned short)48356))));
                            arr_36 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))));
                            var_34 = arr_23 [i_11] [i_1] [i_0];
                        }
                        var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_4))))))));
                        var_36 -= ((((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_0])) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_5])));
                        arr_37 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_1 - 2] [i_1 - 1]))));
                    }
                    arr_38 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2 + 2] [i_1 - 2] [i_1 + 1] [i_0])))))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))));
}
