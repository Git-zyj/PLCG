/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154309
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
    var_15 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (unsigned short)52900);
                var_16 = ((/* implicit */short) ((int) min((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_3 [(unsigned short)7])))), (((int) var_10)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (-(max((min((((/* implicit */unsigned long long int) (unsigned char)145)), (arr_8 [i_2]))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                arr_13 [i_3] = arr_8 [i_2];
            }
        } 
    } 
}
