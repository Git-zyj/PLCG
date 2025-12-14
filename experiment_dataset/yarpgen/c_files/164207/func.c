/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164207
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
    var_14 = ((/* implicit */long long int) ((short) var_7));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(1506044278U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] = ((/* implicit */int) arr_7 [i_1]);
                        var_16 += ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                        var_17 = var_8;
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) == (((/* implicit */int) (signed char)-21))));
        arr_14 [i_0] = ((/* implicit */signed char) 1506044293U);
        var_18 = arr_10 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((arr_3 [(_Bool)1] [i_4]) + (9223372036854775807LL))) >> (((arr_3 [(signed char)8] [(signed char)8]) - (2121765878411590047LL)))));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 8; i_5 += 3) 
        {
            arr_22 [i_4] [i_5] = ((/* implicit */unsigned short) arr_1 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (long long int i_6 = 4; i_6 < 9; i_6 += 4) 
            {
                arr_25 [i_5] [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned int) var_13);
                arr_26 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) arr_0 [i_4] [i_5 + 3]);
            }
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_20 *= ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) arr_9 [i_7] [i_7]);
                            arr_33 [i_9] [i_5] [i_7] [i_5] [i_4] = ((/* implicit */long long int) ((arr_8 [i_4] [i_5] [i_7]) % (arr_8 [i_4] [i_5] [i_7])));
                        }
                    } 
                } 
            }
            arr_34 [10LL] [i_5] [i_5 + 3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1506044278U)))) || (((/* implicit */_Bool) var_3))));
        }
        arr_35 [i_4] = ((/* implicit */signed char) var_8);
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        arr_44 [i_4] [i_4] [i_4] [10ULL] [i_4] [i_4] &= ((/* implicit */unsigned short) var_3);
                        arr_45 [i_4] [i_4] [i_10] [i_4] [i_4] = ((/* implicit */short) 1771590580);
                        arr_46 [i_4] [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) var_0);
                    }
                    for (long long int i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        arr_49 [i_4] [i_10] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                        var_22 = ((/* implicit */long long int) var_11);
                        var_23 = ((/* implicit */short) 7740833069372069466LL);
                        arr_50 [i_10] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                    }
                    var_24 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_31 [i_10])))));
                }
            } 
        } 
    }
}
