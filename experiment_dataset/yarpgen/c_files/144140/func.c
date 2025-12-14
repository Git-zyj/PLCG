/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144140
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
    var_19 = ((((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))));
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = (~(((/* implicit */int) (signed char)13)));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(3004858800U))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [1] [i_3] [9] [i_3 - 3] = ((/* implicit */signed char) arr_3 [i_0] [i_2]);
                            arr_10 [i_3] = ((/* implicit */unsigned short) (~(arr_2 [i_1 - 1] [i_1 - 1])));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(max((arr_5 [i_0] [(short)1] [i_1 - 1] [i_3 - 3]), (arr_5 [i_0] [(short)12] [i_2] [(signed char)2]))))))));
                            var_23 = (_Bool)1;
                            arr_11 [i_3] [i_3] = ((/* implicit */int) (signed char)-115);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) var_17);
            }
        } 
    } 
}
