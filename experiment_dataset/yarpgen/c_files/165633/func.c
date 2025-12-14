/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165633
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
    var_19 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_13);
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)17)) & (81524623));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) - (8625793186396472235LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 81524613)) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_4] [12ULL] [i_3] [(unsigned char)12] [(short)2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_1] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6])))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-30)), ((+(((/* implicit */int) ((_Bool) 16674511942449093299ULL)))))));
                                var_23 |= ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
}
