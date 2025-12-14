/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102287
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) var_16))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_4))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-((~(((((/* implicit */int) (short)-855)) + (arr_0 [i_3] [i_1]))))))))));
                                arr_12 [i_4] [(short)12] [i_3] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) (unsigned short)16383);
                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_0] [i_1])))) ? ((-((~(((/* implicit */int) var_16)))))) : (var_5)));
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)49155))))) + (2627855973U)))));
}
