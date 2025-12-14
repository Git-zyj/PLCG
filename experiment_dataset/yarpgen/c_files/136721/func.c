/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136721
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
    var_17 ^= ((/* implicit */unsigned short) (unsigned char)252);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) -985591659))));
    var_19 = ((/* implicit */unsigned short) 889315594);
    var_20 = ((/* implicit */unsigned long long int) 889315590);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (short)32105);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) (_Bool)1);
            arr_8 [i_0] = ((/* implicit */_Bool) -889315610);
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (signed char)-64))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 2047U))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) 11553955167209052511ULL);
    }
    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */int) 4294965249U);
        arr_16 [i_3] = ((/* implicit */long long int) 889315594);
        /* LoopSeq 3 */
        for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */signed char) (unsigned char)51);
                            arr_27 [i_3 - 3] [i_3] [i_5] [i_6] [(unsigned short)3] [i_3 - 3] = (_Bool)1;
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */signed char) (unsigned char)241);
            var_26 = ((/* implicit */long long int) (_Bool)1);
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (0LL)));
            var_28 -= ((/* implicit */_Bool) 0U);
        }
        for (short i_9 = 2; i_9 < 19; i_9 += 1) 
        {
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned long long int) -889315591);
            arr_35 [i_3] [(unsigned short)12] &= ((/* implicit */short) (signed char)-64);
            arr_36 [i_9] [i_3] [i_9] = ((/* implicit */unsigned int) 2113046735);
            /* LoopNest 3 */
            for (unsigned char i_10 = 3; i_10 < 19; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 4) 
                    {
                        {
                            arr_46 [i_12] [i_12] [i_3] [i_3] [i_3] [i_3] [i_3] = (signed char)105;
                            var_29 -= ((/* implicit */unsigned int) (short)32767);
                            arr_47 [i_3] [i_11] [i_10] [i_9] [i_3 - 3] [i_3] [i_3] = ((/* implicit */unsigned long long int) -468468429);
                            var_30 ^= ((/* implicit */int) (unsigned char)248);
                        }
                    } 
                } 
            } 
        }
    }
}
