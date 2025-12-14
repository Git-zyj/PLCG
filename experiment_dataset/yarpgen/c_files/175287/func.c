/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175287
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_13);
                    arr_10 [i_1] = ((/* implicit */unsigned char) var_8);
                    var_19 = ((/* implicit */int) var_13);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-(var_1)));
    var_21 = min((2577613752711995132LL), (((/* implicit */long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)(-127 - 1))))) ^ (((((((/* implicit */int) (short)-21198)) + (2147483647))) >> (((((/* implicit */int) (short)21201)) - (21181)))))))));
}
