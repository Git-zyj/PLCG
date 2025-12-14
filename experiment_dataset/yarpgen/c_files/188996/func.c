/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188996
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) arr_4 [i_0] [13U] [(unsigned char)4])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))));
                    arr_7 [11] [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_1);
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_12), (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)4095)))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_9 [i_4 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [(signed char)1]))))))) : (((((/* implicit */_Bool) ((arr_0 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))) ? (((((/* implicit */_Bool) (short)-4101)) ? (((/* implicit */int) arr_3 [i_3 - 1] [16] [i_5])) : (((/* implicit */int) arr_15 [(signed char)11] [i_5] [i_4] [3U])))) : (min((var_19), (((/* implicit */int) var_14))))))));
                            var_24 &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)10] [i_5] [i_5])) ? (((/* implicit */int) (short)-4101)) : (((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
                arr_20 [i_3] [i_4] [9] = ((/* implicit */long long int) arr_17 [i_4] [i_3 - 1]);
            }
        } 
    } 
}
