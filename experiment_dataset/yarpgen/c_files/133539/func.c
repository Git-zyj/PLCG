/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133539
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
    var_17 += ((/* implicit */short) var_3);
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) var_15)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 3382793195U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * ((+(912174101U))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)55);
        arr_5 [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1]))) > (var_6))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) + (2892080626U))) : (((((/* implicit */_Bool) 3382793195U)) ? (var_4) : (var_4))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */short) 912174129U);
                arr_12 [i_1] [i_1] [i_3 + 1] [i_1 + 1] = ((/* implicit */int) var_4);
                arr_13 [i_1] = ((/* implicit */unsigned char) ((_Bool) ((int) var_14)));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)16380)) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_10))))));
                            arr_20 [i_1] [i_2] [i_3 + 2] [i_3] [i_2] [i_3 + 2] [i_5] |= arr_6 [8U];
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_3 [i_6] [i_1])));
                arr_23 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-5)) + (((/* implicit */int) arr_0 [i_1] [i_2]))))));
            }
            arr_24 [i_1] [(signed char)9] [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [1LL] [i_1] [i_1])) > ((~(((/* implicit */int) arr_7 [i_1]))))));
            arr_25 [i_1] [i_1] = ((signed char) (-(((/* implicit */int) var_12))));
        }
        for (unsigned short i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            arr_28 [(unsigned char)11] [i_1] = ((/* implicit */short) var_12);
            arr_29 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        }
        for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) % (var_10))))));
            arr_33 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((long long int) ((var_7) % (((/* implicit */unsigned long long int) var_5)))));
            arr_34 [i_1] [i_8 - 3] [i_8] = ((/* implicit */unsigned long long int) var_14);
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_6))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_26 = ((/* implicit */short) arr_31 [i_1] [i_1] [i_9]);
            arr_38 [i_1] [8ULL] [i_9] = var_7;
        }
    }
    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
    {
        var_27 |= ((/* implicit */unsigned long long int) (_Bool)1);
        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_13))) - (((/* implicit */int) var_2))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_6))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_8)))))))));
        arr_42 [i_10] = ((/* implicit */long long int) (unsigned char)0);
    }
}
