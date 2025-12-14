/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16097
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [15LL] [i_2] [i_2] = ((/* implicit */_Bool) (-(var_9)));
                    var_14 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_3] [15U])), (min((min((((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])), (15426757569127091089ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_14 [2ULL])), (arr_4 [(short)7] [i_6] [i_5] [i_4])))))))))));
                                arr_23 [i_5] [(_Bool)1] [i_5] [i_5] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3852124240406821414LL)) ? (var_1) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-3852124240406821432LL))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [3U] [(short)12] [3U] [16LL])) ? (3852124240406821414LL) : (3852124240406821414LL))) / ((-(3852124240406821414LL)))))) : (((1403207530297561078ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13459))))));
                                var_16 = ((/* implicit */long long int) arr_20 [(unsigned char)5] [i_3] [i_6] [i_5] [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                    arr_24 [i_5] = min((((/* implicit */int) (((+(var_7))) > (min((((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_4] [18U] [i_5])), (var_7)))))), (min((arr_19 [i_3] [i_4] [i_5 + 1] [i_5] [(short)16] [9ULL] [(short)16]), (arr_19 [i_3] [i_4] [i_5 + 1] [i_3] [5U] [1] [i_4]))));
                    arr_25 [i_5] = ((/* implicit */int) min((((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_5]))))) ^ (min((var_13), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_22 [i_3] [16] [13U] [(unsigned short)2] [(unsigned char)13] [i_5] [i_5])) : (arr_4 [13ULL] [i_4] [i_5] [i_5])))))))));
                }
            } 
        } 
    } 
}
