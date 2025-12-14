/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162054
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (18446744073709551602ULL))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-106)))), (min((2147483647), (((/* implicit */int) (short)25))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) 2147483647)), (0U)))) % (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 2147483647)) : ((-9223372036854775807LL - 1LL)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) 0U);
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (3584LL) : (((/* implicit */long long int) 2147483624))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2147483633) == (((/* implicit */int) (short)-14)))))) : ((+(9U)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2147483647)) + (18446744073709551615ULL)));
                    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4095)) | (((/* implicit */int) (signed char)127))))) & (1ULL)));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-2147483625) : (((/* implicit */int) (signed char)3))))) ? (((/* implicit */unsigned int) ((2147483621) >> (((4294967295U) - (4294967268U)))))) : (((((/* implicit */_Bool) 3580LL)) ? (4294967295U) : (((/* implicit */unsigned int) -2147483647)))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 267386880ULL)) ? (((/* implicit */long long int) 2147483647)) : (3584LL)))) ? (((/* implicit */long long int) 8191)) : (((((/* implicit */_Bool) 1572864)) ? (-9223372036854775785LL) : (9223372036854775807LL)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) & (4294967292U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) != (0U))))) : ((-(0ULL)))));
                            arr_19 [i_1] [i_3] [i_4] = ((/* implicit */int) 3584LL);
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) 4294967281U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967293U)));
                            arr_21 [i_4] [i_1] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) -512)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))));
                            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32761)) ? (2147483624) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) 2147483647)) ? ((-9223372036854775807LL - 1LL)) : (3584LL))) : (((/* implicit */long long int) 4294967284U))));
                        }
                        for (int i_5 = 4; i_5 < 23; i_5 += 3) 
                        {
                            arr_24 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 0)) / (4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8589934591ULL))))) : (((2147483647) | (14680064)))));
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */int) ((((-9223372036854775796LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3568LL))))));
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((16777214U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-13))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (13ULL)))));
                            arr_27 [i_1] [i_2] [i_1] [i_5] = ((/* implicit */long long int) 2147483646);
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) <= ((-2147483647 - 1))))) > (((/* implicit */int) (short)1024))));
                    }
                    for (int i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        var_18 = (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) | (4278190081U))));
                        arr_32 [i_2] [14] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((long long int) 9U)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (-1))))));
                        arr_33 [i_0] [i_1] [i_2] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (2147483647) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) 9223371761976868864LL)) ? (4294967293U) : (((/* implicit */unsigned int) 2147483646)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3570LL)) ? ((-2147483647 - 1)) : (2147483647)))));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 2147483641))));
                            arr_38 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) != (6ULL)));
                            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (-2147483625) : (-2147483647)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4278190081U) : (((/* implicit */unsigned int) 21))))) : ((+(-1LL)))));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_43 [i_1] [i_6] [i_2] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) < (16777196U))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), ((+(((((/* implicit */_Bool) 2147483647)) ? (9U) : (((/* implicit */unsigned int) 2147483646))))))));
                        }
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
    {
        arr_47 [i_9] = ((/* implicit */int) ((((-2147483647) >= (((/* implicit */int) (signed char)31)))) ? (((((/* implicit */_Bool) 16777214U)) ? (-3564LL) : (((/* implicit */long long int) 1610612736)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)119))))));
        var_22 = ((/* implicit */short) (((+(((/* implicit */int) (signed char)8)))) > (((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (short)-1))))));
    }
    for (int i_10 = 4; i_10 < 16; i_10 += 2) 
    {
        arr_52 [i_10] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3558LL)) ? (((/* implicit */unsigned long long int) 16777211U)) : (18446744073709551607ULL)))) ? (max((9223372036854775807LL), (527765581332480LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (4278190067U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2U)) ? (3U) : (16777193U))))));
        arr_53 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((16777214U), (((/* implicit */unsigned int) 2147483647))))) ? (min((8U), (16777214U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))) * (max((((3568LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (min((((/* implicit */long long int) 9U)), (0LL)))))));
    }
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) 4278190067U)) && (((/* implicit */_Bool) (-2147483647 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4278190106U)) ? (16777213U) : (4294967287U)))))) ? (max((((/* implicit */unsigned int) ((2147483647) <= (0)))), (((((/* implicit */_Bool) 0LL)) ? (25U) : (((/* implicit */unsigned int) 100663296)))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) -2147483647)) / (16777231U)))))));
        arr_56 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (216172782113783808LL))), (max((216172782113783808LL), (((/* implicit */long long int) 3))))))) ? (((((/* implicit */long long int) -100663296)) / (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) 2147483647)) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (16777210U)))))));
    }
}
