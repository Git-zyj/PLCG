/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181878
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)11592), ((short)29280))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (58))));
                            arr_12 [i_3] [13U] [13U] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3]))))))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */_Bool) ((var_8) & (arr_2 [i_0 - 3])));
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_3 [i_5]))));
                            var_18 = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((int) (~(3583107836U)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_13);
}
