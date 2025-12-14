/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155108
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                var_14 = ((/* implicit */int) (unsigned short)65530);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((unsigned long long int) (unsigned short)6)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)205)), ((~(max((((/* implicit */unsigned long long int) (unsigned short)1543)), (var_5)))))));
                var_15 *= ((/* implicit */_Bool) min(((unsigned short)2110), ((unsigned short)65535)));
                arr_14 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned char) var_6));
            }
        } 
    } 
    var_16 = -93826044;
}
