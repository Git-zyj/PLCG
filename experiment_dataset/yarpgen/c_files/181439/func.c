/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181439
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
    var_12 = ((/* implicit */short) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) / (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -9223372036854775807LL))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */short) (+((((-(arr_10 [i_0] [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_14 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)20182)) : (((/* implicit */int) (signed char)88))))))), (((((/* implicit */_Bool) (-(var_9)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((2534363897985148164LL) * (0LL)))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned long long int) (signed char)83);
                var_16 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)81))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-26274)) : (var_1)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28714))) * (10954960035228819673ULL)))))));
            }
        } 
    } 
}
