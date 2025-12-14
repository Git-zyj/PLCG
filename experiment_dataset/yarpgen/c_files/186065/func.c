/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186065
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
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -865270406)) | (1021514373U)))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_9)), (var_12))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_3 [i_1])))));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) 10230600);
                                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1021514373U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) 3273452923U)) - (349266736197521853LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (1021514373U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (1021514372U) : (((/* implicit */unsigned int) arr_1 [i_1] [i_4])))))))));
                                arr_13 [i_1] [(signed char)8] [i_2] [i_2] [i_4 - 1] = ((unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_1] [i_2] [i_5] [i_6 - 1] &= ((/* implicit */long long int) (unsigned char)255);
                                var_17 &= ((/* implicit */short) max((((1021514373U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3273452920U)) && (((/* implicit */_Bool) 3969891504U)))))))), (3273452910U)));
                            }
                        } 
                    } 
                    var_18 ^= var_8;
                    var_19 -= ((/* implicit */unsigned short) max((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3273452933U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (3273452920U)));
                                arr_34 [11ULL] [i_7] [i_10] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_8] [(signed char)8]))) : (var_12)))))) ? (arr_1 [i_7] [(short)4]) : (((/* implicit */int) arr_9 [i_7] [i_8] [i_9] [i_10] [i_11]))));
                                var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_11] [i_7] [i_9] [i_8] [i_7] [i_7])) >> (((((/* implicit */_Bool) arr_21 [i_7])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_4 [i_7 + 1] [i_11] [i_9] [i_10]))))))), ((~(724118020446051477ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(3670016)))))) ? (arr_26 [i_7 + 1] [i_7 - 1] [i_7]) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_5)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */short) arr_21 [i_7]))))))))));
                                var_23 ^= ((/* implicit */unsigned char) ((signed char) var_3));
                                var_24 = ((/* implicit */unsigned int) arr_20 [i_7]);
                            }
                        } 
                    } 
                    var_25 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1488680972724710521LL))))), (arr_22 [(signed char)10])))) ? (arr_10 [i_7] [i_7] [(unsigned char)7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_7 - 1])) : (((/* implicit */int) arr_21 [i_7 + 1]))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 1021514387U)) ? (((/* implicit */long long int) 2515226793U)) : (9223372036854775807LL)));
                    arr_40 [10LL] [i_8] [i_9] &= ((/* implicit */short) (+((+(var_12)))));
                }
            } 
        } 
    } 
}
