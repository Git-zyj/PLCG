/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116994
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned int) var_6);
                            var_17 ^= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_2]);
                            var_18 = ((/* implicit */int) ((short) arr_7 [i_3]));
                        }
                    } 
                } 
                arr_10 [i_0] [(unsigned char)18] [i_1] = var_7;
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 - 1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((_Bool) var_3));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (((+(((/* implicit */int) var_0)))) == (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) var_10)))))))) : (((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) (short)10410)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9164)))))))));
}
