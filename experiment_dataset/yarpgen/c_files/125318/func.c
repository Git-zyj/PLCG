/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125318
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
    var_19 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) ((short) ((var_14) >> (((var_6) + (7854616358990693394LL)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0])))) * (((unsigned long long int) var_13))))));
        var_22 = (+(((/* implicit */int) arr_1 [13LL])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1]))) : (arr_5 [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) max((var_7), (((/* implicit */unsigned long long int) var_9))))));
        var_24 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_12)))))) < (((unsigned long long int) ((signed char) arr_1 [i_1]))));
        var_25 ^= ((/* implicit */signed char) arr_2 [i_1]);
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        arr_12 [i_2 - 1] = ((((((/* implicit */int) arr_10 [i_2] [i_2 + 1])) * (((/* implicit */int) arr_10 [i_2] [i_2])))) / ((~(((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1])))));
        var_26 = ((/* implicit */_Bool) var_0);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) arr_19 [i_3] [i_6 + 1]);
                        var_28 = ((/* implicit */short) var_14);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((long long int) arr_19 [6LL] [i_3 - 1])))));
                            arr_29 [i_3 + 1] [(unsigned char)18] [i_5] [i_6] [i_7] &= ((/* implicit */unsigned short) ((long long int) var_8));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_3 + 1] [i_6 + 1] [i_5])) % (((/* implicit */int) arr_21 [i_3] [13] [i_3 - 1] [13]))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            var_32 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3 + 1])) - (((/* implicit */int) arr_28 [i_3] [i_3] [i_4] [i_3 + 1] [i_4] [i_3 + 1]))));
            var_33 = ((/* implicit */unsigned short) var_13);
            var_34 = ((/* implicit */long long int) ((((int) arr_21 [i_3] [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_13 [i_3 - 1] [(unsigned short)18]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */short) arr_14 [i_3] [i_3]);
            var_36 = ((/* implicit */_Bool) arr_26 [(_Bool)0] [i_3] [15ULL] [(_Bool)1] [i_8] [i_8] [i_8]);
            arr_33 [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1]))) / (arr_23 [i_3 - 1] [i_3 - 1] [i_3] [i_3])));
            arr_34 [i_8] [4ULL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [0] [i_3]))));
        }
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_3] [i_3]))));
    }
}
