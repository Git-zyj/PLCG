/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108689
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
    var_16 = ((/* implicit */short) (~(var_13)));
    var_17 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (2801518647U)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((min((((/* implicit */unsigned int) arr_0 [i_2 - 1] [i_2 - 1])), (4255501667U))), (arr_6 [i_0] [i_0] [i_0]))))));
                            var_20 *= ((/* implicit */short) min((((/* implicit */unsigned int) (!(arr_0 [i_2 + 1] [i_2 + 1])))), (((var_9) ^ (arr_6 [i_2 + 1] [(unsigned char)2] [i_2 - 1])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_9 [i_1] [i_1] [(_Bool)1] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_4);
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~((-(((/* implicit */int) ((var_3) < (((/* implicit */int) var_12))))))))))));
}
