/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180940
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) (~(arr_3 [i_1] [i_0])));
                var_17 = min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17950))))) <= (((/* implicit */int) var_6))))), (max((((var_3) - (-286859459))), (((/* implicit */int) (short)-30313)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 6; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((((/* implicit */int) (signed char)(-127 - 1))), (-1588218980)));
                            var_19 = ((/* implicit */short) ((signed char) min(((~(((/* implicit */int) (short)0)))), (((/* implicit */int) ((unsigned char) (short)0))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) max((((/* implicit */short) var_15)), (var_2)))) | (max((var_1), (((/* implicit */int) var_9))))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((short) var_4)))) ? (((/* implicit */int) ((signed char) ((var_1) + (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_9)), (min((1886752708), ((-2147483647 - 1)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))))));
}
