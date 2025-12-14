/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180766
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
    var_16 = ((/* implicit */unsigned int) (unsigned short)8480);
    var_17 = ((/* implicit */unsigned short) (signed char)-1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned short) ((int) var_11));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)51813)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_1] [i_1] [i_2 - 4] [i_2 + 4]), ((_Bool)1)))) + (((/* implicit */int) (unsigned short)13730))));
                            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 + 4] [i_2 - 1] [i_2 - 3] [i_2 - 2] [i_2 - 4])))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 - 4]))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1] |= var_8;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((0U) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
}
