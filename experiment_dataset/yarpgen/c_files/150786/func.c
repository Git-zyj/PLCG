/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150786
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
    var_11 = ((/* implicit */unsigned long long int) (unsigned char)239);
    var_12 = var_6;
    var_13 = var_2;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)(-32767 - 1)))))));
                                arr_15 [i_0] [i_2] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) var_2);
                                var_14 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_7 [7ULL] [7ULL] [i_0])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_0 [5U] [(short)6]))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)249))))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) (short)17891))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((unsigned int) var_4));
}
