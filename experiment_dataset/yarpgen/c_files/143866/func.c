/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143866
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) var_3);
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)2047)) + (((/* implicit */int) (short)-28988))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (((((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)24546))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (short)-1);
                    var_15 -= ((/* implicit */_Bool) (short)3);
                    arr_16 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                }
            } 
        } 
    } 
}
