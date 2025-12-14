/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165986
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 &= arr_3 [(_Bool)1] [(_Bool)1];
                var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_0 [i_3]);
                            var_17 = ((/* implicit */unsigned char) min((min((1643277466U), (arr_8 [i_0] [i_0 + 2]))), (((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_2 [i_0])), ((unsigned char)0)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) arr_16 [i_4]);
        var_19 = ((/* implicit */long long int) min(((unsigned char)234), ((unsigned char)1)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_21 [17ULL] &= ((/* implicit */unsigned long long int) arr_14 [i_4]);
            /* LoopNest 2 */
            for (long long int i_6 = 3; i_6 < 24; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) arr_20 [i_6 - 3]);
                        arr_28 [i_4] = ((/* implicit */_Bool) 17702828878942559838ULL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        arr_34 [i_4] = ((/* implicit */unsigned short) arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        var_21 += ((/* implicit */unsigned short) arr_26 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]);
                        var_22 = ((/* implicit */_Bool) arr_15 [i_5 - 1]);
                        /* LoopSeq 1 */
                        for (short i_10 = 3; i_10 < 21; i_10 += 3) 
                        {
                            arr_37 [i_4] [6LL] [i_9] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) arr_27 [i_10] [i_10 + 3] [i_10 + 3] [i_10] [i_10 + 2] [i_10]);
                            var_23 &= ((/* implicit */long long int) (unsigned char)255);
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [18U] &= ((/* implicit */unsigned char) arr_19 [i_4] [i_4] [i_4]);
                            arr_39 [i_10] = ((/* implicit */signed char) arr_24 [i_4] [i_4] [i_4] [i_4]);
                        }
                        var_24 += ((/* implicit */short) arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            arr_43 [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)0)), ((short)32758)))), (arr_22 [(signed char)6] [i_11])));
            var_25 = (_Bool)1;
        }
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                {
                    var_26 = ((/* implicit */long long int) (unsigned char)255);
                    var_27 -= ((/* implicit */unsigned long long int) (unsigned char)1);
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 24; i_14 += 4) 
                    {
                        for (int i_15 = 2; i_15 < 22; i_15 += 3) 
                        {
                            {
                                arr_55 [(signed char)11] = ((/* implicit */unsigned long long int) max((1044480U), (((/* implicit */unsigned int) (unsigned char)255))));
                                var_28 = ((/* implicit */unsigned int) arr_23 [21LL] [i_12]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
