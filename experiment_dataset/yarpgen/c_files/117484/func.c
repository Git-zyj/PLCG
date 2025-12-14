/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117484
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)15)), (var_7)));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 8; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -640465279)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                arr_11 [i_2 + 2] [i_3] = ((/* implicit */signed char) ((_Bool) min((var_9), (((/* implicit */unsigned long long int) var_0)))));
                var_19 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)192))))), ((+(((unsigned long long int) (unsigned char)45)))));
            }
        } 
    } 
    var_20 &= ((/* implicit */int) var_5);
}
