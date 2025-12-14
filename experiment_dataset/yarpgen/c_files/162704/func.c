/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162704
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5369206251538031590LL)) || (((/* implicit */_Bool) 6793268750625294109LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9103779489896094066LL)) ? (391142352902520465ULL) : (13055879324262490717ULL)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (3594490968289141204LL)));
                            var_20 &= ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) - (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 2])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-7500012800238396780LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3594490968289141207LL)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_4 - 1])) ? (arr_0 [i_1 - 2] [i_4 + 2]) : (arr_0 [i_1 - 1] [i_4 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_6] [16LL]), (((/* implicit */long long int) arr_8 [i_4 + 4] [i_1 - 1] [i_4] [i_5] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_4])) ? (arr_5 [i_0] [i_1 + 2] [i_4 + 1]) : (((/* implicit */int) arr_17 [i_0] [i_4] [6ULL] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_6] [i_5] [13ULL] [i_1] [i_0] [i_0])), (arr_17 [(signed char)11] [i_1] [i_5] [i_6]))))))) : (((((((/* implicit */_Bool) (unsigned short)2895)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)18] [(short)12] [i_4] [i_4] [i_6]))) : (arr_4 [i_6] [i_5] [i_4]))) << (((((/* implicit */_Bool) -7123872147996392626LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11))))))));
                                var_22 &= ((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1]);
                                arr_21 [(unsigned short)1] [i_1] [(unsigned short)1] [i_1] [i_5] [i_6] = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (10U) : (3U)))), (arr_3 [i_5] [4ULL]))) > (((/* implicit */long long int) ((/* implicit */int) (short)20402)))));
                                var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                                var_24 ^= ((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_4 + 4]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (((_Bool)1) ? (min((((/* implicit */int) (unsigned short)65535)), (min((-1331311814), (((/* implicit */int) arr_2 [i_0] [i_1 + 1])))))) : (((/* implicit */int) (unsigned char)113))));
                    var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 2] [i_1] [(short)0] [i_4 - 1]))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (10704213039241048958ULL)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-9223372036854775802LL))))));
                                var_29 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : (9007199254738944ULL)));
                            }
                        } 
                    } 
                    var_30 ^= ((/* implicit */long long int) ((arr_6 [i_7] [7ULL] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13055879324262490717ULL)) || (((/* implicit */_Bool) 17022463377095499665ULL))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_7 - 1] [(unsigned short)6] [i_7 - 2] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_8 [i_7 + 1] [i_7] [i_7 - 2] [i_1 - 2] [i_1 - 1]))));
                }
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) min(((+(arr_7 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65528)), (4597224391702644331LL))))));
            }
        } 
    } 
    var_32 ^= ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned long long int) var_17))));
    var_33 &= var_14;
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1736836649U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (13055879324262490718ULL)));
}
