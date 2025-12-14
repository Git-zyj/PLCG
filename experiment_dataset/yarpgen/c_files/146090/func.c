/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146090
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
    var_11 = ((/* implicit */unsigned char) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_12 -= ((/* implicit */unsigned int) ((_Bool) (unsigned short)18392));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned short) 0U)))));
    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)42150)))), (((/* implicit */int) (short)-29762))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (463647808)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) 2784161889868207018ULL)) ? (-4165192016242359928LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))))) & (((/* implicit */long long int) (~(((/* implicit */int) (short)-8047)))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_15 = arr_6 [i_2] [(unsigned short)9];
                    var_16 = ((/* implicit */unsigned int) var_10);
                    arr_8 [i_2] [i_2 + 2] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)9] [i_1] [i_2] [i_2]))))), (max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [(_Bool)1] [7U] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 1]))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((507904U), (((/* implicit */unsigned int) 25))));
                        arr_12 [i_0] [(signed char)7] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1009777210U)) ? (7030072501848114309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15087)))));
                        arr_13 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 + 2])))) ? (min((((/* implicit */int) var_6)), ((~(var_2))))) : (((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)))) - (((arr_5 [2U] [i_1] [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_3] [i_1]))))))));
                        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_0 + 1]))) : (18014398509481983ULL)))));
                    }
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)141))));
                    arr_17 [i_0] [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551595ULL))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 4) 
                {
                    arr_20 [i_5] [i_1] [i_0 + 1] [i_0 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_5 + 1]))) >= (var_4));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_5] [5U] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_5 - 4] [i_6]))));
                                arr_29 [i_0] [i_0 + 1] [10U] [i_5] [(unsigned short)3] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [9] [i_0 + 1] [i_0 + 1])) >> (((arr_25 [i_0] [i_0] [i_0 + 1] [i_7] [i_7] [i_7] [(_Bool)1]) - (1959693910U)))));
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])));
                }
                var_21 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
}
