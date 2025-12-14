/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15836
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                arr_6 [i_1 + 1] [10LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_7)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_13)))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_9)))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                                var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((arr_14 [i_0] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))))));
    var_21 &= ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) ^ (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_6))))))));
}
