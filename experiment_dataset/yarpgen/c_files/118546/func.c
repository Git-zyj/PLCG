/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118546
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) 4294967295U);
                /* LoopSeq 3 */
                for (short i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)122)) : (((((/* implicit */int) arr_3 [i_2 + 1])) & (((/* implicit */int) (unsigned short)5135))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_1 + 2] [i_0 + 2] [i_2]) * (arr_6 [i_1 - 2] [i_0 - 2] [i_2])))) ? (((arr_6 [i_1 - 2] [i_0 + 1] [i_2]) * (arr_6 [i_1 - 2] [i_0 - 1] [i_2]))) : (((arr_6 [i_1 + 3] [i_0 - 3] [i_2]) * (arr_6 [i_1 + 1] [i_0 - 2] [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 -= (unsigned char)118;
                                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)22))))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_2] = (-(((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_2])) : (max((576460752303423488ULL), (((/* implicit */unsigned long long int) var_16)))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1 + 2] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)254)))), ((~(var_13)))))) * (2901574512U)));
                }
                for (int i_5 = 4; i_5 < 16; i_5 += 4) 
                {
                    arr_18 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(9223372036854775807LL))))));
                    var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned long long int) (~(var_13)))) : (arr_0 [i_1 - 2] [i_5 - 4]))))));
                    var_25 -= ((/* implicit */unsigned short) (signed char)22);
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_1 - 1] [i_6] [i_0 + 2] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_7])))) <= (((/* implicit */int) var_5))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned short)51411)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned char)158)))) : (((/* implicit */int) arr_16 [i_1 - 1] [i_6] [i_7]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_21 [i_0] [i_8] [i_1 + 3] [i_0])) & (8912369275420768279ULL))) & (min((((/* implicit */unsigned long long int) (signed char)119)), (var_3))))))));
                                arr_30 [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 2] = ((/* implicit */int) arr_2 [i_6] [i_8]);
                                arr_31 [i_0] [i_1] [i_6] [i_8] = ((/* implicit */int) (-((~(18232275655151774859ULL)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) 4227858432U);
                }
            }
        } 
    } 
    var_29 = ((((/* implicit */int) (unsigned short)51411)) | (max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-103)))));
    var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1))))) : (((var_3) + (var_2)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51418)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_7))))) + (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? ((-(((/* implicit */int) (signed char)-117)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))))));
    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-1710155310025263316LL)))))));
    var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((18446744073709551613ULL) <= (((/* implicit */unsigned long long int) var_13))))))));
}
