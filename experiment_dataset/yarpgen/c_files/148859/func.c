/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148859
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
    var_19 = var_13;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (signed char)4);
                                arr_10 [3U] [i_0] = ((/* implicit */unsigned int) var_13);
                                var_21 = ((/* implicit */unsigned long long int) ((var_12) / (var_14)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned int) arr_2 [i_0 + 3] [i_0 + 3]);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((((-1) + (2147483647))) << (((var_14) - (3498467819319276817LL))))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (short)2744))));
            }
        } 
    } 
}
