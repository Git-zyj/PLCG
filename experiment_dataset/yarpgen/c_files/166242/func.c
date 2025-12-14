/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166242
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
    var_14 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [6U] [i_0] = ((/* implicit */int) (unsigned short)57801);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [10] = ((((((/* implicit */int) (unsigned short)55930)) + (((/* implicit */int) var_8)))) << (((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) + (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)16] [i_2 + 1] [(unsigned char)13] [i_4]))))))) - (2473346091U))));
                                var_15 = ((/* implicit */int) (short)32767);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned char) ((((min((var_6), (((/* implicit */int) (unsigned short)2)))) - (((/* implicit */int) max((((/* implicit */unsigned short) (short)6247)), (var_5)))))) | (((/* implicit */int) (unsigned short)9605))));
                }
            } 
        } 
    } 
}
