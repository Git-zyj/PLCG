/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112793
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
        var_12 = ((_Bool) ((_Bool) ((_Bool) -9136259985945540186LL)));
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((short) var_5))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            var_14 ^= ((/* implicit */unsigned char) (-(((unsigned int) arr_1 [i_1]))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_15 ^= ((int) ((signed char) var_4));
                            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_5 [10])))));
                            var_17 = ((/* implicit */short) (-((-(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_18 -= ((/* implicit */unsigned long long int) (+((+(((long long int) 3655973253U))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                var_19 = ((signed char) ((short) var_11));
                var_20 = ((/* implicit */short) (~(((unsigned int) arr_6 [i_1] [i_1] [i_1 + 1]))));
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((signed char) ((unsigned long long int) (signed char)64)));
                            arr_28 [i_8] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_8])))));
                            var_22 &= ((/* implicit */unsigned char) ((long long int) (+(arr_21 [(unsigned char)0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (short)7596)))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5447020265118719694LL)))))));
            var_25 = (+(((/* implicit */int) ((short) 8245139726081948047LL))));
            var_26 = ((/* implicit */unsigned short) ((short) ((_Bool) 4236538656U)));
            arr_31 [i_1] [i_1] = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_4 [i_1 + 3])))));
            var_27 = ((/* implicit */unsigned long long int) ((int) ((short) 58428650U)));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 1) 
        {
            arr_36 [i_1] = ((unsigned short) (~(7673982759295830192LL)));
            var_28 = ((/* implicit */int) (+(((unsigned int) var_0))));
        }
        var_29 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((int) arr_18 [i_1] [i_1]))))));
    }
    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) ((short) arr_38 [i_12]))))));
        var_31 = ((/* implicit */signed char) (+(((unsigned long long int) (~(((/* implicit */int) arr_0 [i_12] [i_12])))))));
    }
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            {
                arr_48 [(signed char)9] [(signed char)9] [i_14] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)196));
                var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((short) var_2))))));
            }
        } 
    } 
}
