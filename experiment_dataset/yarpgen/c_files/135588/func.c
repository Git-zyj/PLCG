/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135588
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
    for (signed char i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min(((~((-(2147483647))))), ((~(((/* implicit */int) ((unsigned char) var_8)))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) + (arr_6 [i_0 + 1] [i_2 + 1] [3U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -178617577)) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_0 + 1])))))) : (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_2])) ? (4294967280U) : (arr_6 [i_0 + 1] [i_2 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_0 - 3] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) % (var_3)));
                                arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) max((((unsigned long long int) (!(((/* implicit */_Bool) 1073737728))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                                var_12 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_2 - 1] [i_4]))) & (var_5)));
                                arr_16 [i_0] [i_1] [i_2] |= ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)88)), (((unsigned short) arr_2 [i_2 - 1])))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_2] [i_3] [i_4] [i_3]))))), (var_2))));
                                arr_17 [i_2] [9U] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)4] [i_3] [i_4])) ? (((/* implicit */long long int) var_1)) : (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (15773179973243378022ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30760))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_3] [i_2] [i_1] [(_Bool)1])))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_11 [i_0 - 3] [i_1] [i_2] [i_3] [i_4])), (var_2))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (short)-9298);
                                var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3985921276U)) ^ (var_3)))) ? (min((((/* implicit */long long int) arr_0 [i_5])), (var_2))) : (((/* implicit */long long int) min((4294967282U), (((/* implicit */unsigned int) arr_13 [(unsigned char)3] [i_0 - 3]))))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2188396297U))))))));
                                var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_10 [i_0 + 1] [6U] [i_1] [(short)0] [i_5] [i_6 - 2])), (var_5)));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_2 - 1] = max((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_1] [i_0 + 2]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_1] [(signed char)5] [i_2] [i_2]))) ^ (var_2))) ^ (var_2)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                {
                    arr_35 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_29 [i_8]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8]))))), (var_3)))));
                    var_16 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
}
