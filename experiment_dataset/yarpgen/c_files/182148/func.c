/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182148
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
    var_11 = ((/* implicit */unsigned char) 9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 4294967292U);
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)32);
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_7 [(unsigned char)10] &= ((/* implicit */unsigned int) (unsigned char)245);
        var_12 *= (short)32745;
        var_13 -= ((/* implicit */int) (unsigned char)12);
        arr_8 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_14 |= ((/* implicit */_Bool) (signed char)-1);
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (unsigned char)120))));
                    }
                } 
            } 
            arr_20 [i_3] [i_3] = ((/* implicit */short) (signed char)127);
        }
        var_16 = ((/* implicit */unsigned short) 16348164U);
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_26 [i_6] [i_7] = (unsigned short)59355;
            var_17 ^= ((/* implicit */unsigned int) (unsigned short)65505);
        }
        var_18 = ((/* implicit */_Bool) 15356184752130062550ULL);
    }
}
