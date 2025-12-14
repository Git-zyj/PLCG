/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133506
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
    var_15 = ((/* implicit */unsigned short) (~((-(min((var_2), (((/* implicit */long long int) 1879048192U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_0 - 1] [i_2 - 3])) ? (((/* implicit */int) arr_8 [i_0 - 4] [i_0 - 1] [i_2 - 3])) : (((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 1])))) * (((/* implicit */int) ((_Bool) arr_0 [i_2 - 2])))));
                            var_17 *= ((long long int) ((arr_9 [i_0] [i_0 - 1] [i_0] [i_3 - 1]) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / (-140027624711779183LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            arr_12 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((var_12) < (((/* implicit */long long int) 2782703773U))))))));
                            arr_13 [i_0] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2 - 2])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2 - 1]))))) ? ((+(((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (140027624711779182LL) : (arr_5 [i_0] [i_0] [i_2]))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((1879048183U) >= (2415919112U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_7))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_1 [i_4]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) 2782703773U))))))), (((arr_5 [i_0] [i_0 - 4] [i_0 - 4]) / (var_12)))));
            }
        } 
    } 
}
