/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138287
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1552573351)) ? (4235333547482090799LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))));
        arr_2 [i_0 + 1] [6] = ((/* implicit */unsigned int) ((long long int) (signed char)31));
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_5 [(unsigned char)2] = ((((/* implicit */int) min((((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned char) (signed char)-32))))), (max((var_4), (((/* implicit */unsigned short) var_9))))))) >> (((((/* implicit */int) ((signed char) var_6))) - (98))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */_Bool) ((unsigned char) min((((var_3) ^ (var_3))), (((/* implicit */int) ((unsigned short) var_1))))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((((arr_4 [i_2]) / (arr_4 [i_1 - 2]))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (arr_3 [14U])))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_14)))))));
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2 - 2] [i_1]), (arr_7 [18U] [i_2] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_1])) > (var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [(short)10] [i_1])) < (((/* implicit */int) (signed char)126)))))));
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5819048505129985682ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_2 + 1] [12ULL] [i_2])))) : (((unsigned int) (signed char)-32)))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_13)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))) * (arr_13 [i_1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1] [i_1 - 1]))) ? (((long long int) 5819048505129985691ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-32))))))))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (unsigned short)11025))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((arr_11 [i_1] [i_3]) - (18234360563609003267ULL))))))))) ? (((/* implicit */int) min((arr_16 [i_1 + 1] [i_3] [i_4] [i_3]), (arr_16 [i_1 - 1] [i_1 - 1] [i_4 - 1] [i_4])))) : (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_8)))))));
                arr_18 [6ULL] [6ULL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))), (((unsigned long long int) ((((/* implicit */_Bool) 12627695568579565933ULL)) ? (16885281374147574999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))))));
            }
            /* vectorizable */
            for (long long int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (signed char)-23))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            arr_30 [i_7] [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((unsigned char) (unsigned short)36825));
                            arr_31 [i_5] [3ULL] [i_3] [i_6] [(short)19] [i_5] = ((/* implicit */unsigned long long int) ((short) arr_21 [i_1] [i_1 - 1] [11ULL] [i_5 + 2]));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)28)))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((long long int) 17206382182537541220ULL));
                    arr_38 [i_1] [i_3] [i_8 - 3] [i_8] [i_9] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_12)) << (((13772849888873478727ULL) - (13772849888873478727ULL))))));
                    arr_39 [i_9] [i_8] [i_3] [i_3] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (2557009970750559195LL)));
                }
                for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    var_23 -= ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    arr_42 [i_10] [i_10] [i_8] = ((((/* implicit */int) var_15)) - (((/* implicit */int) var_8)));
                    var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_8 + 3] [i_3] [i_1 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                }
            }
            /* vectorizable */
            for (unsigned short i_11 = 3; i_11 < 17; i_11 += 3) /* same iter space */
            {
                arr_45 [i_3] [i_11] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (-8228318719370985250LL)));
                arr_46 [i_11] [i_3] [i_1] &= ((/* implicit */long long int) ((17206382182537541220ULL) - (((/* implicit */unsigned long long int) 1188601151U))));
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((long long int) arr_7 [i_3] [i_11] [i_1])) < (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))))))));
                            arr_53 [i_1] [i_11] [i_11] [i_12] [i_3] = ((-5492063329423114747LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_13)) ? (arr_50 [i_12] [i_11 - 2] [i_3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            }
        }
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_11 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]))))) : (((/* implicit */unsigned long long int) ((long long int) var_4)))))) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1]))) + (arr_48 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_9))))))))));
        arr_54 [i_1] = ((/* implicit */long long int) ((unsigned int) ((signed char) var_12)));
    }
    var_28 = ((/* implicit */long long int) ((unsigned short) (signed char)-12));
}
