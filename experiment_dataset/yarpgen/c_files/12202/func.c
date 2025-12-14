/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12202
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) 8177925853906379348LL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1)) ? (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_0]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned char)12])) && (((/* implicit */_Bool) arr_4 [i_0]))))), (arr_8 [(signed char)4] [i_3 - 1] [i_1 - 1] [(signed char)4] [i_1 - 1]))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) ((unsigned char) arr_2 [8] [i_1]))) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_4])) : (((/* implicit */int) var_4)))) : (arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551608ULL)));
}
