/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162584
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)12319))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) var_7);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4462233644374861838LL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) / (4462233644374861838LL))) : (-8810397760750067146LL))) / (((/* implicit */long long int) var_10))));
            arr_8 [i_0] [i_1] [(short)13] = ((/* implicit */long long int) ((((_Bool) -4462233644374861827LL)) ? (((/* implicit */unsigned long long int) ((((long long int) (unsigned char)5)) * (((/* implicit */long long int) arr_5 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (-(4462233644374861827LL)))) ? (((/* implicit */unsigned long long int) -4462233644374861838LL)) : (((unsigned long long int) var_11))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) (~(max((((/* implicit */long long int) arr_5 [i_1] [i_3 + 1])), (arr_14 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4 + 2] [i_4 - 2])))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (signed char)-49))));
                            var_18 += ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((int) 4462233644374861827LL))) / (max((((/* implicit */long long int) var_3)), (4462233644374861833LL)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] = ((/* implicit */signed char) ((max((-4462233644374861840LL), (4462233644374861844LL))) & (((arr_13 [i_0] [i_5] [i_5]) / (var_9)))));
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_5]))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -79798897)) ? (4462233644374861838LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25947)))));
            arr_24 [i_0] [i_0] = ((/* implicit */short) max((-79798897), (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))))));
            var_21 += ((/* implicit */short) 79798896);
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                {
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((var_9), (((/* implicit */long long int) arr_4 [i_7 + 1])))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0] [3] [i_0] [i_0] [(_Bool)1])))))));
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -4462233644374861844LL)))))));
                    arr_33 [i_8] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) & (((/* implicit */int) arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((unsigned int) arr_14 [i_8] [i_8] [i_7] [i_7] [i_7] [i_0]))))));
                }
            } 
        } 
    }
}
