/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12320
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned int) ((6538616225179670681LL) >= (((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1931530303U)))))));
                                arr_16 [(short)22] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 3] [i_1] [i_2])) * (((/* implicit */int) arr_12 [i_0 + 4] [i_0 + 3] [i_0 + 2]))));
                                var_17 = ((/* implicit */unsigned long long int) ((((long long int) arr_13 [i_0 + 4] [i_0 - 3] [i_0 + 3])) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 3] [i_0 + 2])) ? (arr_13 [i_0 - 2] [i_0 - 3] [i_0 - 2]) : (arr_13 [i_0 - 3] [i_0 + 2] [i_0 - 4]))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-18840)) && (((/* implicit */_Bool) 2363437004U))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (((1931530292U) | (((/* implicit */unsigned int) -760852761))))))));
                    arr_18 [(signed char)7] [i_1] [(_Bool)1] = ((/* implicit */int) arr_1 [i_0]);
                    var_19 += ((/* implicit */unsigned short) arr_15 [i_2] [i_1] [i_1] [18ULL] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 4; i_6 < 18; i_6 += 3) 
        {
            {
                var_20 -= ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))) != (arr_8 [i_6] [i_6 - 2] [i_5]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_5] [i_5]))) * (arr_1 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151)))))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((arr_1 [i_5]) > (((/* implicit */long long int) arr_8 [i_5] [i_6 - 3] [i_5])))))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_6] [i_6] [i_5] [i_5]) && (((/* implicit */_Bool) arr_5 [i_5])))))) > (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))) ? (arr_2 [i_6 + 3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_13 [i_6 - 2] [i_6 + 1] [i_5])) == (((((/* implicit */_Bool) arr_20 [i_5] [i_6])) ? (((/* implicit */long long int) arr_8 [i_6 + 1] [i_6] [i_6])) : (arr_1 [i_6]))))))))))));
                var_22 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [16LL] [i_5])) > (((/* implicit */int) arr_12 [i_6] [i_6] [i_5])))))) + (((((/* implicit */_Bool) arr_23 [i_5] [i_6 - 2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5]))) : (arr_2 [i_5] [i_6]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5])) ^ (arr_13 [i_5] [i_6 - 3] [i_5])))));
            }
        } 
    } 
}
