/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167592
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
    var_16 ^= ((/* implicit */unsigned short) var_10);
    var_17 ^= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-31457)) > (((/* implicit */int) var_9)))))) > ((+(arr_11 [(unsigned short)6] [i_2 + 1] [i_1] [(short)13])))))));
                            var_19 ^= ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_1]));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)0] [i_1] [i_1]))))) == (((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15271)))))))));
                var_21 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_10 [i_1] [i_1] [i_0] [3LL] [i_0])))));
            }
        } 
    } 
    var_22 = (~(((/* implicit */int) (unsigned short)15271)));
}
