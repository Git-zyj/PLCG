/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114132
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
    var_14 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((int) max((5552318001246759659LL), (-5552318001246759679LL))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) max((((-5552318001246759657LL) ^ ((~(5552318001246759630LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (!(var_6)))), (arr_4 [i_0] [5ULL] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) var_9);
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)78)) + (((/* implicit */int) (unsigned short)16756))));
}
