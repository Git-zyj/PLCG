/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160820
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
    var_18 &= ((/* implicit */int) var_1);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5945813548671093178LL)) ? (838299925U) : (838299929U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((3456667367U) / (838299910U)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 838299925U)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_0))))) : (var_11)))));
        var_20 ^= ((/* implicit */unsigned short) ((((838299923U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned char)98)) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)33)), (838299933U))))));
                    arr_7 [i_0] |= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)123))))) ? (min((18446744073709551599ULL), (1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1 - 1]))))), (((/* implicit */unsigned long long int) max((-70224719629929196LL), (((/* implicit */long long int) (signed char)-51)))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10711)) || (((/* implicit */_Bool) (unsigned char)98))))), (((long long int) (_Bool)1))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3456667366U)))) ? (max((((/* implicit */unsigned int) (unsigned char)157)), (3587704859U))) : (max((((((/* implicit */_Bool) 1048575LL)) ? (3456667362U) : (838299928U))), (4294967295U))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) arr_11 [i_4 - 1] [i_3 + 3])))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [18ULL])) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) arr_12 [i_4] [i_4] [0LL]))))));
                                arr_21 [i_3] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (arr_15 [i_6 - 1] [i_4] [i_3 + 3]) : (411296709)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-104)) + (2147483647))) << (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 9185725810212460312ULL)) ? (((/* implicit */long long int) 838299916U)) : (var_4)))));
                }
            } 
        } 
        var_27 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
    }
    for (long long int i_8 = 3; i_8 < 9; i_8 += 4) 
    {
        var_28 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) (_Bool)1))), (max((arr_0 [i_8 - 1]), (((/* implicit */unsigned long long int) (unsigned short)32444))))));
        arr_25 [i_8] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_10 [i_8 - 2])), (14698387333074286156ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_2 [i_8 + 1])), (arr_10 [i_8 - 2]))))));
        arr_26 [i_8] |= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_22 [i_8] [i_8])))), (max((arr_5 [i_8] [i_8]), (((/* implicit */int) (unsigned char)15)))))), ((((_Bool)1) ? (((/* implicit */int) arr_12 [(unsigned short)4] [i_8] [(unsigned short)4])) : (((/* implicit */int) (unsigned short)11269))))));
    }
    for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
    {
        arr_30 [i_9] = min((((/* implicit */int) (((_Bool)1) || ((_Bool)1)))), (((((/* implicit */_Bool) max((14698387333074286151ULL), (((/* implicit */unsigned long long int) arr_27 [i_9]))))) ? (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-1)), (arr_27 [i_9 + 1])))))));
        arr_31 [i_9] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11263)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) 2396117653U))) : (((/* implicit */int) (signed char)-6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9 + 2]))) | (16256854622914291006ULL)))));
        arr_32 [i_9] [i_9] &= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) % ((((_Bool)0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9]))))))), (var_3)));
    }
}
