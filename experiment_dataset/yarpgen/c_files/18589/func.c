/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18589
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) var_2);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) 2147483647));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 4; i_2 < 8; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */short) var_1);
                    var_12 = ((/* implicit */short) ((((((((/* implicit */int) (signed char)9)) == (((/* implicit */int) (_Bool)1)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29489)) >> (((((/* implicit */int) var_4)) - (60)))))))) & ((+(arr_15 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 2])))));
                }
            } 
        } 
    } 
}
