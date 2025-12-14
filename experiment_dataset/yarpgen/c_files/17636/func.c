/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17636
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
    var_20 |= ((/* implicit */unsigned short) (~(min((min((var_11), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (short)-32633)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) (short)-32633)))))))) + (((((/* implicit */int) (unsigned char)78)) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22815)))))))));
                            var_23 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)178))));
                            arr_10 [i_0] [(short)12] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_2 - 1] [i_1 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
