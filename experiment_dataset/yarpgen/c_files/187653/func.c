/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187653
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [(unsigned short)7] [(unsigned short)10] [i_3] = ((/* implicit */unsigned char) (+(((long long int) (_Bool)1))));
                        var_17 ^= ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [2ULL] [(unsigned char)12]);
                        arr_13 [i_3] [i_1] [i_2] [(short)21] = ((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned short)13]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4 - 3])) ? (((/* implicit */int) arr_8 [(unsigned char)5] [i_4 - 2] [(unsigned char)9])) : (((/* implicit */int) ((((/* implicit */int) var_15)) == (arr_6 [i_4 - 1] [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (short)28907))));
                        arr_28 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_2 [i_4] [i_4] [20])))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 1])) * (((/* implicit */int) (short)-17597))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_4 - 3] [i_4 + 2] [10])) ? (((/* implicit */int) (unsigned char)126)) : (arr_7 [i_4 + 2] [i_4] [i_4] [16])));
    }
    var_21 = ((/* implicit */short) (-((~(((/* implicit */int) var_6))))));
    var_22 = ((/* implicit */short) ((int) var_8));
}
