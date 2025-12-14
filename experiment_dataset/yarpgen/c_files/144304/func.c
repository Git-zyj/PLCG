/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144304
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
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */long long int) ((signed char) var_1));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_1] [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1124775047)) ? (((/* implicit */int) (unsigned short)62046)) : (((/* implicit */int) (short)22274))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (max((((((/* implicit */_Bool) -1124775047)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_2))))));
}
