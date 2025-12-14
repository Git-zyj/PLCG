/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150412
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)-122)) != (((/* implicit */int) arr_1 [i_1 - 4] [i_1 - 4])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] = ((/* implicit */int) (((-(arr_8 [i_0] [i_0 - 2] [i_0 + 2] [i_1 + 1] [i_1 - 4] [i_1]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10439)) ? (((/* implicit */int) (short)-19878)) : (((/* implicit */int) (short)-19878)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */int) 2248390311U);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((var_3), (((/* implicit */unsigned short) var_6)))))) ? (((var_2) / (((/* implicit */int) var_16)))) : ((-(((/* implicit */int) min(((unsigned short)50206), ((unsigned short)11244))))))));
    var_22 ^= ((/* implicit */unsigned short) var_5);
    var_23 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((int) var_16)) : (((/* implicit */int) max((var_18), (var_16)))))));
}
