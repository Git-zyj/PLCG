/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11547
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_4))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) 4294967286U))) / (var_3)));
                            var_15 = ((/* implicit */unsigned short) (short)32747);
                            arr_12 [i_3] [i_0] [i_2] [i_0] [i_0 - 2] = arr_2 [i_2 - 1] [i_0 - 3] [i_2];
                            var_16 = ((/* implicit */signed char) ((unsigned char) (-2147483647 - 1)));
                            arr_13 [i_0] [22] [i_2] [i_1] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) / (max((4294967295U), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2 + 3] [i_0])))))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)32))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))))))), ((unsigned short)0))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_2)) : (var_4)))) + (var_0)))) ? (((unsigned int) ((var_3) ^ (var_4)))) : (((4U) / (536870908U))))))));
    var_20 = ((/* implicit */int) (unsigned char)15);
}
