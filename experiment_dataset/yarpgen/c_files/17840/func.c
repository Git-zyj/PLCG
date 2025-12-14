/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17840
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_13);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 = arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1];
                                arr_11 [i_4] [i_4] [i_3] [13ULL] [i_4] = ((/* implicit */long long int) arr_5 [i_0]);
                                arr_12 [i_4 + 1] [i_4] [i_2] [i_4] [i_0] = ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) (signed char)121)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((var_9) ? (arr_7 [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_4 - 1]) : (arr_7 [i_3] [i_4] [i_3] [i_4 - 1] [i_4 - 1])))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((_Bool) var_12)) ? (arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4]) : (((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4])) ? (arr_7 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4]) : (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [(short)12]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_10 [i_7] [i_6] [i_5] [i_1] [i_0])))));
                                var_21 |= ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */_Bool) (~(3442227645289705754ULL)))) && (((/* implicit */_Bool) max((var_0), (arr_18 [i_0] [i_1] [i_5] [2U] [i_7]))))))), (var_4)));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_10 [i_0] [i_1] [i_1] [i_6] [i_6]))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-117)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
