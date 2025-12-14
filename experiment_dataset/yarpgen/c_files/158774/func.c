/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158774
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
    var_10 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
    var_11 = ((unsigned short) ((short) var_2));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)6))))));
                                var_14 = ((unsigned short) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1]))) : (arr_7 [i_1 + 1] [i_0 - 1] [i_0])));
                                var_15 = ((/* implicit */signed char) var_4);
                                arr_12 [i_0] [i_1] [i_2] [(unsigned short)6] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_17 = ((/* implicit */unsigned char) var_8);
}
