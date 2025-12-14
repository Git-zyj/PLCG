/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140858
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
    var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((unsigned char) var_0))), (var_8))), (((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (1905442676) : (((/* implicit */int) var_5)))))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 1905442685))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((unsigned short) -1995074159))) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    var_18 = ((/* implicit */_Bool) (unsigned short)22544);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((int) (short)10))) : (((unsigned long long int) arr_0 [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned short) max((arr_7 [i_3 + 1] [i_1] [i_2] [i_3]), (((/* implicit */unsigned short) arr_11 [i_2])))));
                                var_21 += ((/* implicit */unsigned int) arr_10 [i_3] [i_3 - 2] [i_3] [i_3]);
                                var_22 ^= ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
