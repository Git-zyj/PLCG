/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149837
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
    var_14 = ((/* implicit */short) min((var_6), (((((/* implicit */_Bool) var_2)) ? (7929167540433856725ULL) : (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-28544)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) 10517576533275694883ULL);
                                var_17 = ((/* implicit */short) 0);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)8)) * (((/* implicit */int) (short)-21103))));
                var_18 |= ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [(unsigned char)14]);
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_8))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_3);
}
