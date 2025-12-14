/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109478
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_14 &= ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) * ((+(2642694859988159241LL)))));
    }
    var_15 -= ((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32326))) * (var_3))) >> (((((/* implicit */int) var_0)) - (201)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        arr_5 [(unsigned short)15] = ((/* implicit */short) ((var_8) >> (((/* implicit */int) (!(((/* implicit */_Bool) -2642694859988159233LL)))))));
        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_17 = ((/* implicit */short) arr_8 [i_2]);
        arr_9 [6LL] = ((/* implicit */unsigned int) 12702054480588652130ULL);
        arr_10 [i_2] [i_2] = arr_7 [(short)4];
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_11 [(short)0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_16 [0ULL] [i_5 + 2] [(_Bool)1])) * (((/* implicit */int) arr_16 [i_3] [i_5 + 2] [i_5 + 2])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_5 - 1] [i_5] [i_5 - 1] [i_5]))));
                            var_21 = ((/* implicit */unsigned short) var_2);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2589844181U)) >= (18446744073709551603ULL)));
                            var_23 = ((/* implicit */unsigned short) ((arr_20 [i_5] [6ULL] [i_5]) << ((((~(((/* implicit */int) var_0)))) + (242)))));
                            arr_26 [i_5] [i_4] [2ULL] [i_5 + 1] [(unsigned short)2] [i_7] [i_5 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) arr_12 [i_4])))))));
                        }
                        var_24 = ((/* implicit */signed char) (unsigned short)31);
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */short) 1896777519);
                        var_26 = ((/* implicit */signed char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5 + 2])))));
                    }
                    var_27 = ((/* implicit */int) ((((/* implicit */int) (short)798)) != (((/* implicit */int) (unsigned short)24575))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */int) ((unsigned short) ((123861607U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14599))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    var_28 = ((/* implicit */_Bool) arr_33 [i_10] [i_9]);
                    var_29 = ((/* implicit */signed char) arr_37 [i_9] [i_11]);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned long long int) ((unsigned short) var_5));
}
