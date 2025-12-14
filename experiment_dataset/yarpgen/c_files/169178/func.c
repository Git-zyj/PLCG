/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169178
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((var_2) % (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-10435)) + (2147483647))) << (((((((/* implicit */int) (signed char)-19)) + (48))) - (29)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (short)3432)))))))));
    var_21 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_15))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) 16776192U))) : (((/* implicit */int) (unsigned short)1061)))) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_7 [i_0])) : (var_10)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_14)))));
                                var_23 = ((/* implicit */signed char) (((((+(var_14))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))))) >> (((((/* implicit */int) max(((short)-3432), (arr_6 [i_0] [i_2] [i_4])))) & (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)19856)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
