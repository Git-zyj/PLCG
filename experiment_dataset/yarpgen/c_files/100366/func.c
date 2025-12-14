/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100366
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)63), (((/* implicit */unsigned char) (_Bool)1))))) ^ (min((((/* implicit */int) var_10)), (var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) var_4);
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)1984)) : (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) (signed char)-1);
                    arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 35465847065542656LL)) ? (0) : (((/* implicit */int) (short)-27310))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_16 *= ((/* implicit */signed char) ((((/* implicit */long long int) var_3)) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (var_12)))));
                    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [(short)8] [i_3] [i_4])));
                    arr_15 [i_0] [i_0] [(unsigned char)4] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_6))) != (((/* implicit */int) var_10))));
                    var_18 = var_1;
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))));
    }
    var_19 *= ((/* implicit */short) var_6);
}
