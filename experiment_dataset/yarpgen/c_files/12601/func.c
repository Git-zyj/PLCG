/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12601
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) ((max((arr_6 [i_2] [i_2] [i_0] [i_0]), (arr_6 [i_0] [i_0] [16LL] [i_0]))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-40)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))));
                            var_15 = ((/* implicit */unsigned short) (!(arr_6 [i_0] [i_1] [i_2] [i_3])));
                            arr_9 [i_0] [(short)4] |= ((/* implicit */int) arr_0 [i_1]);
                            arr_10 [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_3])) - (arr_1 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_16 |= ((/* implicit */_Bool) arr_2 [10ULL]);
                            arr_18 [i_0] [i_1] [i_5] [i_4] [i_5 + 1] = (((~(((((/* implicit */int) (signed char)-77)) | (((/* implicit */int) arr_17 [(signed char)9] [(signed char)9] [i_5])))))) << (((((((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)32)))) + (2147483647))) >> (((var_12) - (17062961945940478340ULL))))) - (1012))));
                            arr_19 [i_5] = ((/* implicit */unsigned short) min((var_8), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_7 [1] [i_5] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
                            arr_20 [(short)5] [i_1] [9] [i_5] = (!(((/* implicit */_Bool) min(((-(var_4))), (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned short)11] [i_4] [(unsigned short)2] [i_4] [i_5 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_0))));
}
