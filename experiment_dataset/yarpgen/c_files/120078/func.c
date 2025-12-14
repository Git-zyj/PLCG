/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120078
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) ((7678312443185750778ULL) >= (((/* implicit */unsigned long long int) var_17)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 -= 402653184U;
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [4]);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((signed char) ((int) ((((/* implicit */int) arr_2 [i_0] [i_1])) | (arr_5 [i_0] [i_0]))))))));
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 908280808)) ? (((/* implicit */unsigned long long int) -908280808)) : (14196899676727209843ULL))) >> (((((((/* implicit */long long int) min((908280808), (((/* implicit */int) (short)31761))))) - (min((-8860160153336158869LL), (((/* implicit */long long int) -908280804)))))) - (8860160153336190571LL)))));
                    var_24 = ((((arr_5 [i_2] [i_1]) | (((/* implicit */int) arr_7 [i_1])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_2])))) : (((/* implicit */int) arr_0 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_11 [i_3]) : (arr_11 [i_3]))), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [14ULL])))) != (((/* implicit */unsigned long long int) -8860160153336158862LL)))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                            {
                                var_26 -= ((/* implicit */unsigned char) arr_18 [i_7] [i_4] [(signed char)12] [i_7] [i_7]);
                                arr_21 [i_3] [(signed char)12] [13U] [(short)3] [i_4 - 1] [i_3] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) 908280792)))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((8860160153336158868LL) & (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [8] [i_4]), (arr_20 [i_7])))))))) ? (((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((((/* implicit */int) (signed char)96)) - (((/* implicit */int) arr_18 [i_5] [i_4] [i_5] [i_6] [(short)0])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)22)) && (((/* implicit */_Bool) (signed char)-97))))))));
                                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (signed char)-66)), (arr_10 [i_3])))))) && (((/* implicit */_Bool) arr_10 [i_4]))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                            {
                                var_29 *= ((/* implicit */_Bool) ((min((((((arr_13 [18ULL] [i_6]) + (9223372036854775807LL))) << (((((arr_13 [i_3] [i_5]) + (6862969546158702049LL))) - (25LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_5] [i_6] [i_8])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-97))))))) | (((/* implicit */long long int) -908280809))));
                                var_30 = arr_22 [i_4] [(signed char)16];
                                arr_25 [i_5] [(unsigned short)2] [i_5] [i_5] [(unsigned short)19] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_3] [i_4 - 1] [i_3])) && (((/* implicit */_Bool) var_0)))));
                                var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((max((((/* implicit */long long int) arr_22 [i_3] [i_4])), (arr_12 [i_6]))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_3] [i_3] [i_3])))))))));
                                arr_26 [i_3] [14ULL] [i_5] [i_6] [i_3] [(short)16] [(unsigned short)17] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) ((short) arr_20 [i_3])))));
                            }
                            arr_27 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_3] [i_4] [i_4 - 1] [i_3] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)15872)))) : ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                arr_28 [i_3] [i_4] = ((/* implicit */int) arr_23 [15ULL] [(unsigned char)9] [(_Bool)1] [19ULL] [(_Bool)1]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) (signed char)-74);
}
