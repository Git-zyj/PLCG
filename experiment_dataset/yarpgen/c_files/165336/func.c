/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165336
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
    var_16 ^= ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = min((((short) min((((/* implicit */int) var_10)), (372170024)))), (var_12));
                                var_19 = ((/* implicit */short) min((((/* implicit */int) (short)-24594)), (arr_4 [i_1] [i_2] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_20 ^= ((/* implicit */short) var_2);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                arr_24 [i_6] = ((/* implicit */int) ((signed char) arr_6 [i_5] [11]));
                arr_25 [(unsigned short)9] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_15))), (((unsigned short) ((signed char) (_Bool)1)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_17 [i_7] [i_5]))));
                arr_26 [i_6] [(signed char)10] [i_6] [(unsigned short)10] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) ((unsigned int) var_12))), (4611686018427387904ULL))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 4; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) (_Bool)1);
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_32 [i_8]))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 4; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_36 [i_5] [i_6] [i_5] [5] = ((/* implicit */short) 264241152);
                    var_24 &= ((/* implicit */signed char) var_1);
                }
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_6))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((long long int) arr_38 [i_5] [i_6] [10LL])))));
                    arr_40 [i_6] [(unsigned char)2] [i_8] [i_6 - 1] [(unsigned char)2] [i_6] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 4 */
                    for (long long int i_12 = 4; i_12 < 8; i_12 += 1) 
                    {
                        arr_44 [6] [i_6 + 4] [i_6 + 4] [i_12] &= (short)32767;
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_1))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */int) var_11);
                        arr_49 [i_6] [i_6] [i_8] [i_11] [i_11] [i_6] = ((/* implicit */unsigned long long int) var_13);
                        arr_50 [i_13 - 1] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_29 = ((/* implicit */short) ((unsigned int) ((unsigned int) arr_17 [i_14] [i_5])));
                        var_30 = ((/* implicit */signed char) ((_Bool) (short)-32767));
                        var_31 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_15)));
                        var_32 ^= ((/* implicit */_Bool) ((unsigned int) (short)23507));
                    }
                    for (unsigned int i_15 = 1; i_15 < 7; i_15 += 2) 
                    {
                        arr_56 [i_15] [i_11 - 1] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */long long int) (signed char)20);
                        arr_57 [i_6] [i_6] = ((/* implicit */_Bool) var_14);
                        arr_58 [i_15] [i_11] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (short)12867);
                    }
                    arr_59 [2U] &= ((/* implicit */unsigned int) var_2);
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_8))));
                    arr_63 [i_5] [7U] [i_6] [i_16] [i_6] = arr_17 [i_5] [i_6 + 2];
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) 4398029733888ULL))));
                }
                arr_64 [i_5] [i_6] [i_8] = ((/* implicit */unsigned long long int) 4217563077U);
            }
            arr_65 [i_6] [i_6] [i_6 - 1] = ((/* implicit */short) var_4);
        }
        arr_66 [(unsigned short)9] [i_5] = min((((/* implicit */unsigned int) -372170025)), (arr_1 [i_5] [(short)0]));
    }
}
