/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11867
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) min((1070342752U), (((/* implicit */unsigned int) ((unsigned short) (+(3224624543U)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_3]), (arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_2] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) var_6))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) | (arr_1 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57931))) ^ (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((int) arr_3 [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)466)) * (((/* implicit */int) (unsigned short)41520)))) < (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54629)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41544))) : (1070342752U)))), (var_0))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) var_5))), (((((/* implicit */_Bool) var_7)) ? (1070342752U) : (var_7))))))));
    /* LoopSeq 1 */
    for (int i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        arr_18 [i_5] [i_5 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_12 [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 2] [i_5] [i_5])) : (arr_1 [i_5])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (3224624572U)))));
        arr_19 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 1921085513))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (-1921085513)))))), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) var_8))))));
        arr_20 [i_5] [i_5 + 1] = ((/* implicit */unsigned int) arr_12 [i_5] [(unsigned char)15] [i_5 + 3] [i_5 + 2] [i_5] [i_5 + 2]);
    }
    var_12 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned long long int) var_4))));
}
