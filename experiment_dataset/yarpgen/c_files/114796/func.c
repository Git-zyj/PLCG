/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114796
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((int) ((_Bool) arr_1 [i_0 + 1])));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((((((/* implicit */int) (signed char)-47)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 1])) + (49))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_2))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) ((signed char) 79931255U));
        arr_6 [i_1] = ((signed char) arr_5 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_19 [1U] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                            var_18 *= ((/* implicit */short) ((unsigned int) ((unsigned short) arr_7 [i_3] [i_3])));
                            arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) min((arr_7 [i_2] [i_2]), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)21192))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (((+(((/* implicit */int) var_2)))) + (((/* implicit */int) max((((/* implicit */short) arr_22 [i_2] [i_2] [i_7])), ((short)-25159))))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)59595))) ? (1846057583U) : (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_23 [i_2] [i_3] [i_7] [i_8])) - (((/* implicit */int) arr_23 [i_2] [i_3] [i_7] [2U])))));
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) arr_17 [i_2]);
    }
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */short) max((((unsigned char) 633658900U)), (var_2)))), (((short) min((-378279069), (((/* implicit */int) var_1)))))));
}
