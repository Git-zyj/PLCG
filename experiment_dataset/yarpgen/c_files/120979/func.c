/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120979
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) arr_10 [i_3 + 1] [i_2] [i_2] [i_1 + 3] [i_0])) % (((/* implicit */int) arr_4 [1ULL] [i_3]))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [(unsigned short)4] = ((/* implicit */short) ((int) ((((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0])) + (((/* implicit */int) (unsigned short)65535)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_8 [i_0] [i_0] [11] [i_0]))));
        arr_13 [i_0] = ((/* implicit */long long int) arr_11 [(unsigned short)16] [i_0] [i_0] [i_0] [(short)12]);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        arr_23 [i_0] [i_0] [11U] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_5] [i_6]))));
                        arr_24 [i_0] [i_4] [i_5] [i_6] = (((+(((/* implicit */int) arr_19 [i_6] [i_6] [i_5])))) + (((/* implicit */int) ((unsigned short) 4294967285U))));
                        arr_25 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */int) var_8);
                        var_15 ^= ((/* implicit */signed char) 1071644672ULL);
                        var_16 = ((/* implicit */unsigned long long int) arr_22 [(signed char)18] [i_4] [i_5] [i_4] [i_6] [i_4]);
                    }
                } 
            } 
        } 
    }
    var_17 = var_11;
    var_18 &= ((/* implicit */int) var_0);
}
