/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138901
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
    var_16 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) (-(((arr_2 [i_0]) / (arr_5 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_0] = (+(((long long int) (~(((/* implicit */int) arr_6 [i_2] [i_1]))))));
                            arr_13 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) var_9))))))));
                            arr_14 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_3 + 1]);
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                arr_16 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [4ULL] [i_1 - 1] [i_1 - 1] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_0])))))));
            }
        } 
    } 
}
