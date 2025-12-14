/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103589
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
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((536838144), (((/* implicit */int) (short)21369))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((short) 0U));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((max((arr_16 [i_4]), (arr_16 [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_6))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)27794))))))))));
                var_23 |= ((/* implicit */short) max((((arr_16 [i_4]) / (arr_16 [i_5]))), (((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [i_5]) : (arr_16 [i_4])))));
            }
        } 
    } 
    var_24 = ((var_11) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) -1LL))), (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
}
