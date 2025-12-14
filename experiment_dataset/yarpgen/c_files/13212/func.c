/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13212
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
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) (~(7347753322326563450LL))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((min((arr_1 [i_0 - 2] [i_0 + 3]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_9))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((signed char) arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)123))));
}
