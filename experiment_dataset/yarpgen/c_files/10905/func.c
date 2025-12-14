/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10905
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)26)))))))));
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) % (var_5)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    var_13 &= ((/* implicit */_Bool) var_1);
}
