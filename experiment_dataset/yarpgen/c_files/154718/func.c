/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154718
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (var_5)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) 4275398198U)), (4976643565710029854ULL)))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_5)) ^ (4976643565710029854ULL))) > (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_4)))))))), (((((/* implicit */_Bool) (short)19464)) ? (var_7) : (var_1)))));
                }
            } 
        } 
    } 
    var_14 = var_5;
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_14 [i_3] = ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_3]))) ? (((unsigned int) 4039060113U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))));
        var_15 = ((/* implicit */_Bool) 3157285767U);
        var_16 |= ((/* implicit */unsigned char) min((((long long int) arr_11 [i_3])), (((/* implicit */long long int) ((((/* implicit */_Bool) 13470100507999521761ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        arr_22 [i_4] [i_4] = ((/* implicit */long long int) var_9);
                        var_17 = ((/* implicit */long long int) 3157285767U);
                        arr_23 [i_4] [21U] [i_5] [i_4] [i_4] = var_6;
                    }
                } 
            } 
        } 
    }
    var_18 ^= ((/* implicit */_Bool) var_5);
}
