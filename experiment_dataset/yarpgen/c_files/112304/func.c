/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112304
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
    var_18 = ((/* implicit */int) var_6);
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 = ((((/* implicit */_Bool) (unsigned short)52326)) ? (2147483647) : (-985033488));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((614451914U) | (((/* implicit */unsigned int) max((min((arr_5 [(signed char)1]), (arr_9 [(unsigned short)4] [i_2] [i_2] [i_2] [(unsigned short)4]))), (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_0)))))))));
                            var_21 = (-(arr_5 [i_0]));
                            var_22 = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_0] [i_2]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1] [i_0]))));
            }
        } 
    } 
}
