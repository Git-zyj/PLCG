/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128926
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) (-(-5453410860512352412LL)));
                var_11 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (var_9)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            var_13 = ((/* implicit */long long int) (~((~(((var_0) | (var_1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned short) var_6);
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) * ((-(var_1)))));
}
