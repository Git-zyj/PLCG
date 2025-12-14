/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126772
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (unsigned char)123))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) (+(((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_14 = ((((/* implicit */_Bool) (short)14885)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))));
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14883)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned int) var_9))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) + (13LL))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] |= ((/* implicit */short) (+(((((/* implicit */unsigned int) (-2147483647 - 1))) * (0U)))));
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_6 [i_0] [i_0] [(unsigned char)2])) ^ (var_9))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_13 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                            arr_14 [i_0] [i_0] [i_3 - 2] = ((/* implicit */_Bool) (+((((_Bool)1) ? (2137465373) : (((/* implicit */int) (signed char)-60))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_10 [17ULL] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (var_7)))));
}
