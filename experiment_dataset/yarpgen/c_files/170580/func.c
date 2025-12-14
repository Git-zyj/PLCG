/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170580
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [16ULL] [16ULL] &= ((/* implicit */signed char) var_3);
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_7)), (max((max((var_11), (0LL))), (((/* implicit */long long int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_14 = var_7;
    /* LoopNest 3 */
    for (short i_3 = 4; i_3 < 15; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4]);
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_3))))))), ((unsigned short)18)));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_6))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [12LL]))) + (max((0LL), (-8LL)))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] = ((/* implicit */unsigned short) 0LL);
                }
            } 
        } 
    } 
}
