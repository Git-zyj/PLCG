/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160390
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
    var_14 = ((/* implicit */int) var_1);
    var_15 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */short) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)18])) ? (((/* implicit */int) (short)-8)) : (arr_0 [(short)0])))))));
                            arr_11 [i_2 + 1] [i_0] [i_2 - 2] [i_3] = ((/* implicit */_Bool) var_1);
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_1]) : (var_11)))))) ? ((-(min((((/* implicit */unsigned long long int) (signed char)-19)), (var_12))))) : ((~(min((((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3] [i_3])), (arr_3 [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) var_7);
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_8 [3] [i_1] [i_2 + 1] [i_3]), (arr_6 [i_0] [i_1] [i_2] [4])))) ? (arr_6 [i_0] [i_0] [i_0] [(signed char)0]) : (min((((/* implicit */unsigned long long int) (short)-30877)), (arr_8 [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (signed char)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (arr_12 [i_4]))))));
                    var_22 = ((/* implicit */signed char) arr_6 [i_6] [i_5] [i_4] [i_6]);
                    arr_18 [i_4] [i_5] [8] [i_5] &= ((/* implicit */int) -1440854457726178458LL);
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (max((4088LL), (((/* implicit */long long int) (unsigned char)179)))) : (0LL))))));
                }
                var_24 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_4] [i_4] [i_4])), (min((((/* implicit */unsigned long long int) (unsigned char)127)), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30877)))))))));
            }
        } 
    } 
}
