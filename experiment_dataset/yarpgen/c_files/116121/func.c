/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116121
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] [6ULL] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)34110))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1 - 2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_3 - 4] [i_3 - 4] [i_2] [i_3 + 1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 3] [i_3 - 3]))))), (var_12)));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)183))))) - (var_7)))) ? (max(((+(var_11))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)75))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_18 = ((/* implicit */unsigned int) (unsigned char)187);
                            arr_11 [i_0 - 2] [i_0 - 2] [i_1] [i_3] [i_2] [i_3 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_8 [i_0] [i_0 - 3] [i_0] [i_0] [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_3 [i_1] [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 3])) < (((/* implicit */int) var_16))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0]))))))))));
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (var_13))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_12 [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) max((arr_2 [i_0 - 3] [i_1 + 1]), (((/* implicit */signed char) arr_3 [i_1] [i_0 - 3])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_4)), (9223372036854775802LL)))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        for (unsigned int i_5 = 4; i_5 < 24; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_5 - 4] [i_4]))));
                    arr_21 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)62))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4])) ? (2904770596U) : (arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_22 [i_4] [i_4]))));
                                arr_28 [i_4] [i_5] [i_5] [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_19 [i_8] [i_8] [23ULL] [i_4]))))))) ? (arr_27 [i_4] [i_4 + 1] [i_5 - 2] [i_5] [i_4 + 1] [i_7] [i_8]) : (((((/* implicit */_Bool) -9192862003379039046LL)) ? (arr_27 [4LL] [i_7] [i_7] [i_6] [i_4] [4LL] [i_4]) : (((/* implicit */unsigned long long int) arr_20 [i_4]))))));
                                var_24 = ((/* implicit */unsigned long long int) arr_20 [i_4]);
                            }
                        } 
                    } 
                    arr_29 [i_4] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(arr_23 [17LL] [i_5])))) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551615ULL))) : (var_12)))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (min((((/* implicit */unsigned long long int) arr_14 [i_6])), (arr_13 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((arr_14 [i_4]) / (arr_14 [i_4 - 1])))))))));
                }
            } 
        } 
    } 
}
