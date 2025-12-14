/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14696
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 2220247453U)) ? (((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)919))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13625))))))), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_2 [7ULL])), (arr_7 [i_0] [i_0] [i_2] [i_3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)64612))))))))));
                                var_15 &= ((/* implicit */int) ((unsigned short) ((unsigned short) arr_4 [i_0] [i_1] [i_4])));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */int) var_5);
    var_17 = var_8;
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(var_2))))));
}
