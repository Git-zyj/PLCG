/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135116
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
    var_12 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((var_4) >= (var_9))))))));
    var_13 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) * (min((((/* implicit */unsigned long long int) var_1)), (10352452623103943653ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((int) (~(((/* implicit */int) arr_2 [(unsigned short)5] [i_0]))))), ((+(((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 3]))))));
                arr_5 [(unsigned short)8] &= ((/* implicit */unsigned long long int) (unsigned char)1);
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1] [i_0]), ((_Bool)1))))) ^ (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) max((arr_2 [4ULL] [(_Bool)1]), (((/* implicit */unsigned char) (signed char)103)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_0] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (~((((+(var_8))) + ((+(((/* implicit */int) var_1))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) arr_9 [15LL] [i_0] [i_1 + 2] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_1))));
}
