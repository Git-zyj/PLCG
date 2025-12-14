/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185438
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
    var_19 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-28257)) != (((/* implicit */int) (unsigned char)31))))), (var_5))));
    var_20 &= ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */unsigned char) ((_Bool) var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)6)), (538656923U)))) ? (((/* implicit */long long int) min((arr_2 [i_1] [i_0]), (arr_2 [i_0] [i_1])))) : (((arr_5 [i_0] [i_1]) / (((/* implicit */long long int) var_5)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)29)))))));
                            var_24 += ((/* implicit */signed char) arr_5 [i_3] [i_2]);
                            arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_0 [i_0] [1U]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_11 [(signed char)10] [i_1] [i_2] [i_3])))) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_0])))) : ((+(((/* implicit */int) max((arr_7 [i_3]), (var_2))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) -877464128)))));
            }
        } 
    } 
}
