/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157799
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
    var_14 -= ((/* implicit */short) var_1);
    var_15 += ((/* implicit */_Bool) var_2);
    var_16 &= ((/* implicit */_Bool) (unsigned char)63);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (unsigned char)255))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) (-((-(-9223372036854775790LL)))));
                arr_5 [i_0] = ((short) arr_3 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) min((((/* implicit */unsigned char) var_1)), ((unsigned char)150)))), ((short)22806))))));
                            var_19 = ((/* implicit */unsigned long long int) var_11);
                            var_20 |= ((/* implicit */long long int) arr_2 [i_2 - 3] [i_1] [(unsigned char)22]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((var_12) + (2147483647))) << (((((var_12) + (1956875806))) - (30)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-1560)) | (arr_1 [i_0] [i_0])))))))) ^ ((~(var_13)))));
            }
        } 
    } 
}
