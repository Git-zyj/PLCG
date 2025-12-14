/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181177
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                            arr_11 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 4294967295U)) % (((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((var_13) - (((/* implicit */long long int) 2251415342U))))))));
                        }
                    } 
                } 
                var_17 &= ((/* implicit */unsigned int) arr_8 [7ULL]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28231)) ? (15694929269656212293ULL) : (((/* implicit */unsigned long long int) 2377415148U))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_5])))))));
                arr_19 [i_5] [i_5] = ((/* implicit */long long int) 18302628885633695744ULL);
            }
        } 
    } 
}
