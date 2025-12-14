/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128869
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [2U] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_1 [i_0 - 2]), (arr_1 [i_1])))), ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] = arr_0 [i_2] [i_2];
                                arr_19 [i_0] [i_1] [2U] [(short)1] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]), (arr_14 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 2])))) ? ((+(min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (-4153521600999295412LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 + 1]), ((!(((/* implicit */_Bool) 15370192176471215274ULL))))))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)26798);
                            }
                        } 
                    } 
                } 
                arr_21 [i_0 + 1] [2ULL] = ((/* implicit */int) (+((-(arr_1 [(unsigned short)6])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 15370192176471215263ULL))))))), (4153521600999295419LL)));
}
