/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174036
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32150)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((12373183120517624637ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(-1904907366)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16273447262864631059ULL)) ? (((/* implicit */int) var_3)) : (-1904907366)));
                        var_15 = ((/* implicit */int) arr_5 [i_1]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_4 + 1] [i_4])) : (var_2)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 - 1]))) > (var_5)));
                            var_16 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12186)))));
                            arr_18 [i_5] [i_5] [i_1] = ((/* implicit */int) var_12);
                        }
                        for (int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_1] [i_6] [i_1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_0] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_6]))));
                            arr_23 [i_0] [i_0] [i_2] [i_4 + 1] [i_6] [i_6 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                        }
                        arr_24 [i_0] [6LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_4 + 1] [i_0])))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        arr_25 [i_0] [i_1] [11LL] [i_4] [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4 + 1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))));
                        arr_26 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5179218583980642801LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 2ULL)) ? (1567375414U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_4 [i_1] [i_1] [i_8]), (((/* implicit */unsigned long long int) (signed char)3))))) ? (((((/* implicit */_Bool) var_6)) ? (2173296810844920557ULL) : (18446744073709551595ULL))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))))));
                                arr_32 [i_0] [i_0] [i_7] [i_0] [i_8] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_4), (var_1)))), (max((var_10), (((/* implicit */unsigned long long int) var_4)))))))));
                                arr_33 [i_7] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-18))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (max((-3137171907263490942LL), (0LL)))))));
                            }
                        } 
                    } 
                    arr_34 [i_1] [i_0] = ((((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_2]), (arr_2 [i_0] [i_2])))) > ((+(2173296810844920557ULL))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) 18446744073709551615ULL);
    }
    var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (var_5))), (((/* implicit */unsigned int) 1936380822))));
}
