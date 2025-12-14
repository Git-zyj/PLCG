/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179136
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (6ULL) : (arr_2 [i_0]))))));
        var_17 = ((/* implicit */int) var_4);
        var_18 = ((/* implicit */unsigned char) var_14);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) ((-1254580779) == (1250917627)));
                arr_11 [i_0] [5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)))) ? (((arr_4 [21] [i_1] [i_1]) << (((arr_4 [i_0] [i_1] [i_2]) - (12090848124759081501ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) | (arr_2 [2ULL]))));
            }
            for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_18 [i_0] [i_0] [i_0] [20] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1))));
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_15 [2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))));
                }
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    var_21 = ((/* implicit */signed char) var_5);
                    var_22 = ((/* implicit */signed char) ((((7ULL) == (arr_4 [i_0] [i_0] [i_3 - 1]))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5] [i_3 - 1] [i_1] [i_0])) == (((/* implicit */int) (short)9078)))))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) (signed char)39)))));
                        var_24 = ((/* implicit */int) ((unsigned int) arr_8 [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 3]));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_25 = ((/* implicit */_Bool) var_3);
                arr_28 [i_0] [5ULL] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_0))));
                var_26 -= ((/* implicit */unsigned int) arr_13 [4] [i_8]);
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 21; i_12 += 1) 
                {
                    for (long long int i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_37 [i_10] [i_11] [i_10]);
                            arr_43 [(signed char)16] [i_10] [i_10] [i_13 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)214)) ? (arr_37 [i_10] [i_10 + 3] [(unsigned char)21]) : (arr_4 [i_11] [i_10 + 3] [i_11]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) != (-6631032430594887822LL)))))));
                        }
                    } 
                } 
            } 
            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 6631032430594887834LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65219))) : (arr_38 [21LL] [(_Bool)1] [i_9 - 1] [0ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9 + 1] [i_9 + 1])))));
        }
        /* LoopSeq 3 */
        for (long long int i_14 = 1; i_14 < 19; i_14 += 2) /* same iter space */
        {
            arr_46 [i_9 - 2] [i_14 + 3] [i_14 - 1] = ((var_13) != (((/* implicit */unsigned long long int) var_7)));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9120702606948207986LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_7 [i_9] [i_14 + 2]) : (((/* implicit */long long int) 1160783784U))))) : (arr_37 [(short)18] [(short)18] [(short)18])));
            var_30 = ((((/* implicit */long long int) 2145089161U)) - (9223372036854775807LL));
        }
        for (long long int i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
        {
            arr_49 [14] [i_15 + 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_15] [11LL])) ? (arr_6 [i_9 + 1] [i_9 - 2] [i_9 - 2]) : (((/* implicit */unsigned long long int) arr_39 [i_9] [i_15 + 2] [i_15]))))) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (17465024498445049147ULL))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            /* LoopNest 3 */
            for (signed char i_16 = 3; i_16 < 21; i_16 += 1) 
            {
                for (signed char i_17 = 1; i_17 < 20; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) == (((/* implicit */int) ((((/* implicit */int) arr_15 [i_9 - 1] [i_16 - 1] [i_17 + 1] [i_9 - 1])) == (((/* implicit */int) (unsigned short)10141)))))));
                            arr_57 [i_9 + 1] [i_15] [i_15] [i_17 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_41 [i_9 - 1] [i_9 + 1]));
                            arr_58 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9223372036854775804LL)));
                            var_32 = ((/* implicit */long long int) ((unsigned long long int) arr_51 [i_15] [i_17 + 1] [i_15]));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((5033032569881159606ULL) != (((/* implicit */unsigned long long int) arr_40 [i_9] [i_9 + 1] [8] [i_15 + 3] [8] [i_9])))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            arr_61 [i_9 - 2] [(signed char)21] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_19])) ? (((/* implicit */unsigned long long int) -457519962)) : (arr_37 [i_19] [i_9 - 1] [i_19])));
            var_34 -= ((/* implicit */unsigned char) var_3);
        }
    }
    var_35 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))) + (var_2))), (((/* implicit */unsigned long long int) min((((long long int) var_7)), (((/* implicit */long long int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
    var_36 = ((/* implicit */signed char) var_7);
}
