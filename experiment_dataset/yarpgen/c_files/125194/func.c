/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125194
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 &= arr_0 [(short)10];
        arr_2 [i_0] = var_7;
        var_18 += ((/* implicit */unsigned short) arr_1 [12]);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_5 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_20 = var_7;
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_22 |= ((/* implicit */unsigned int) var_14);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_22 [i_3] [8U] [i_4] [i_3] [i_5] [12U] = ((/* implicit */short) var_8);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (1150703774314017972ULL)));
                        var_24 = ((/* implicit */unsigned int) 1150703774314017972ULL);
                        arr_23 [i_3] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 4; i_7 < 12; i_7 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) arr_1 [12ULL]);
        arr_26 [i_7] = ((/* implicit */unsigned int) var_3);
        arr_27 [i_7] = arr_4 [i_7] [i_7 - 2];
    }
    var_26 &= (unsigned char)0;
}
