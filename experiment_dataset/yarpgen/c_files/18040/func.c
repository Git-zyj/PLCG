/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18040
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = (+(((/* implicit */int) arr_1 [i_0])));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_7))));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_8)))))))), ((-((-(var_5)))))));
                            arr_16 [(unsigned short)3] [i_4] [i_6] = ((/* implicit */unsigned char) (+(var_9)));
                            arr_17 [i_6] [i_6] [i_6] [i_3 + 2] = (+((-(((/* implicit */int) max((arr_10 [i_6] [i_3]), (var_6)))))));
                            arr_18 [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
                var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) (~((-(var_9))))))));
            }
        } 
    } 
}
