/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18523
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_6))));
    var_11 = var_9;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (short)240))))))))));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_5 [i_3]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((var_8), ((short)244)))))))));
                var_15 &= ((/* implicit */unsigned char) (short)-240);
            }
        } 
    } 
}
