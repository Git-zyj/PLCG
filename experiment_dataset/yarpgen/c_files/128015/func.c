/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128015
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)));
                var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (signed char)105))))))) ? (max((((/* implicit */long long int) var_9)), (((var_3) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)0] [i_0 + 3] [i_1]))))))) : (((/* implicit */long long int) ((((1976593704U) - (((/* implicit */unsigned int) 502167288)))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */unsigned int) arr_8 [i_2 - 1]);
                            var_12 -= ((/* implicit */unsigned long long int) (-(min((min((var_3), (((/* implicit */long long int) arr_6 [(unsigned char)12] [0U])))), (((/* implicit */long long int) var_9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_5);
}
