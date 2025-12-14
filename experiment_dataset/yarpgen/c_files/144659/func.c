/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144659
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61617))) - (arr_0 [i_0]));
                var_13 += ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(unsigned char)7]))))), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1728575660U)) & (((long long int) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_20 [i_3] = arr_10 [i_2];
                                var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_15 [i_3]) : (arr_15 [i_3])))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */unsigned int) arr_12 [i_4 + 3] [i_4] [i_4]);
                }
            } 
        } 
    } 
}
