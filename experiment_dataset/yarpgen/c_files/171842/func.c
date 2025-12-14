/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171842
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
    var_18 = ((/* implicit */short) var_3);
    var_19 = var_16;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_1 [i_3 - 1]) > (arr_1 [i_3 - 1]))))));
                            var_21 = ((/* implicit */int) max((((var_12) || (((/* implicit */_Bool) 7056212693981087586ULL)))), ((!(((/* implicit */_Bool) 296241474814576554ULL))))));
                            arr_14 [(unsigned char)4] [i_2] [i_0] [(unsigned char)5] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) ((arr_7 [i_0] [i_1 + 1] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0])))))))));
                            var_22 = ((/* implicit */unsigned int) arr_13 [i_0]);
                            var_23 &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (var_4)));
                arr_16 [i_0] [i_0] = arr_4 [i_1];
                arr_17 [i_0] = ((/* implicit */unsigned short) (~(max((var_11), (((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
}
