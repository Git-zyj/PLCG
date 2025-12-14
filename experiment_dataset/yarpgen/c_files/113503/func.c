/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113503
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
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_3 [(short)3] = var_1;
        var_14 = ((/* implicit */long long int) min((var_7), (((/* implicit */short) min((((/* implicit */signed char) (!(var_3)))), (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_4 [i_1]))));
        var_16 = ((/* implicit */unsigned short) var_1);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 7; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_8);
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_13 [3ULL] [i_3] [(unsigned short)4] [i_4 + 2])));
                }
            } 
        } 
        arr_14 [i_2] = var_12;
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (short i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) arr_20 [i_5] [i_6]);
                            var_20 = var_7;
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(arr_16 [i_5 - 1]))))));
        }
        var_22 = ((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_5 - 1] [(short)0] [i_5])) ? (arr_25 [i_5] [i_5] [10U] [i_5]) : (arr_25 [i_5 - 1] [i_5] [10LL] [i_5]));
    }
    for (short i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_36 [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
            var_23 = ((/* implicit */unsigned short) arr_31 [i_10]);
        }
        /* LoopNest 3 */
        for (unsigned short i_12 = 4; i_12 < 20; i_12 += 2) 
        {
            for (int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (signed char i_14 = 4; i_14 < 19; i_14 += 4) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_12 - 4])))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40350))))), (((((/* implicit */_Bool) (unsigned short)25171)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25171)))))))));
                        arr_44 [i_14] [i_12] = ((/* implicit */_Bool) arr_0 [i_12]);
                        arr_45 [i_10] [i_12] [i_12 - 1] [(unsigned short)1] [i_13] [(unsigned char)6] = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            arr_48 [i_10] [i_12] [i_15] [i_14] [i_15] = ((/* implicit */unsigned long long int) arr_35 [i_10] [i_10]);
                            var_25 = ((/* implicit */unsigned char) var_12);
                            arr_49 [i_10] [i_12] [i_15] [i_14] [i_15] = ((/* implicit */unsigned long long int) arr_29 [i_14 - 1]);
                            var_26 = ((/* implicit */unsigned char) arr_46 [i_14 - 4] [i_15] [i_14 - 4] [i_14] [i_15] [i_12 - 1]);
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_12 + 1])) ? (((/* implicit */unsigned long long int) arr_30 [i_12 - 3])) : (arr_40 [i_12 + 2])));
                        }
                    }
                } 
            } 
        } 
    }
    var_28 |= ((/* implicit */int) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        for (unsigned char i_17 = 2; i_17 < 12; i_17 += 1) 
        {
            {
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_17 + 3] [(_Bool)0]))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+((~(((/* implicit */int) var_11)))))))));
                arr_54 [i_17] = ((/* implicit */unsigned int) min((max((var_9), (((/* implicit */int) arr_52 [i_17 - 1] [i_17])))), ((-(((/* implicit */int) arr_52 [i_17 - 1] [(_Bool)1]))))));
            }
        } 
    } 
}
