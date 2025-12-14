/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120622
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_9), (var_6))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) / (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_10)) : ((-((~(((/* implicit */int) var_4))))))));
                    arr_8 [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) || (((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3])))) && (((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3])) && (((/* implicit */_Bool) var_1))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_22 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) ((unsigned int) arr_17 [i_3 + 2] [3U] [i_3 + 1] [i_3])));
                        arr_23 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_6] [i_5] [i_4] [i_3]))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_17 [i_3] [15U] [i_3 - 2] [15U])))), ((+(((/* implicit */int) var_2))))));
                        arr_24 [i_6] [i_3] [11ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                arr_27 [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned int) arr_15 [i_3] [i_4] [i_3] [i_3]));
                var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) var_12)) / (arr_25 [i_3 + 1] [i_3 - 2] [i_4 + 1])))));
                arr_28 [i_3] [i_4] [i_3] [i_4] = (+(((((/* implicit */_Bool) (+(arr_11 [i_3])))) ? (arr_14 [i_3 - 1] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 - 1] [i_3 - 1] [i_3 + 1] [i_3] [(signed char)11]))))));
                arr_29 [i_3] = ((/* implicit */int) var_4);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(arr_25 [i_3 - 2] [i_4 + 1] [i_4])))), (((unsigned long long int) arr_25 [i_3 + 1] [i_4 + 1] [i_3 + 1]))));
                var_20 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4 - 1] [2U])) ? (arr_15 [i_3] [i_3] [i_4 + 2] [6]) : (arr_15 [i_4] [i_4] [i_4 - 1] [6ULL]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) > (var_0))))));
                var_21 = ((/* implicit */unsigned short) var_7);
            }
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            arr_35 [i_3] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_19 [12ULL] [i_3] [i_3] [12ULL] [i_3] [i_9])) ? (((/* implicit */int) var_3)) : (arr_25 [i_3] [(signed char)8] [4ULL]))));
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_45 [i_3] [i_9] [i_3] [i_11] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12))));
                            arr_46 [i_3] [4] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((18446744073709551615ULL) > (18446744073709551609ULL)))) + ((~(((/* implicit */int) var_2))))));
                            arr_47 [i_3] [i_9] [i_3] [i_3] [i_10] [(signed char)8] [i_12] = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_13 = 4; i_13 < 15; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                arr_52 [i_3] [i_13] [i_14] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_13 - 3] [i_3] [i_13 - 3]), (((/* implicit */short) arr_50 [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 3]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_13 + 1] [i_3] [i_13 - 4])) / (((/* implicit */int) arr_16 [i_13 + 1] [i_3] [i_13 + 2])))))));
                arr_53 [i_3] [i_3] = ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_14])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_2)));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        {
                            arr_60 [i_3] [i_13] [i_14] [i_3] = ((/* implicit */unsigned long long int) ((max((arr_11 [i_13 - 3]), (arr_11 [i_13 - 2]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((((/* implicit */_Bool) arr_56 [8U] [i_15] [8U])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_34 [i_13] [i_16])))) : (arr_57 [i_13 - 4] [i_13] [i_3] [i_3] [i_3 - 1]))))));
                            arr_61 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) var_14);
                            var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) var_12)), ((-((+(1790994905U)))))));
                            var_23 -= ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)15233))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50302)) ? (2503972402U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26006)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                arr_64 [i_3] [i_3] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2503972402U))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    arr_68 [i_3] [i_3] [i_17] [(signed char)13] = ((/* implicit */long long int) var_10);
                    arr_69 [i_3] [i_3] [i_3] [i_17] [i_3] [i_18] = ((/* implicit */signed char) ((_Bool) arr_14 [i_13 + 2] [i_3] [i_13]));
                }
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    arr_73 [i_3] [i_3] [(signed char)10] [(_Bool)1] = ((((/* implicit */_Bool) 13491648755276025082ULL)) ? (1784796125) : (((/* implicit */int) (signed char)127)));
                    arr_74 [i_3] [i_3] [i_17] [i_19] = ((/* implicit */unsigned int) (~((~(arr_70 [i_3] [i_3] [i_13 - 3] [i_3] [i_3])))));
                    arr_75 [i_3] [(signed char)9] [i_3] [i_3] [10U] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) arr_10 [i_13] [i_3]))))))), ((~(max((var_13), (((/* implicit */unsigned int) var_12))))))));
                    var_26 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_16 [i_3 + 2] [i_3] [i_13 - 2])))) ^ (((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_13 + 2])) ? (((/* implicit */int) arr_16 [i_3 - 1] [i_3] [i_13 - 2])) : (((/* implicit */int) arr_16 [i_3 - 2] [i_3] [i_13 - 2]))))));
                }
                var_27 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((short) arr_14 [6U] [i_3] [i_17]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_17] [i_3] [i_3]))) : (((arr_44 [(unsigned short)16] [i_13] [i_13] [i_13] [i_13] [i_13]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_3 + 1] [5] [17ULL] [i_3]))))))));
            }
            for (short i_20 = 3; i_20 < 17; i_20 += 1) 
            {
                arr_79 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_17 [i_20] [i_20] [i_13 - 4] [i_3 - 2]);
                arr_80 [i_3] [i_13] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1784796138)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_3] [i_3] [i_20] [i_20] [i_20] [i_3])))))) ? (arr_48 [i_3 + 2] [i_20 - 3]) : (var_14)))) ? (min((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), ((-2147483647 - 1))))), (max((var_13), (((/* implicit */unsigned int) arr_71 [i_3] [i_13 - 4] [i_13 - 4])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_9)))))))));
            }
            arr_81 [6U] [i_3] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_50 [i_3] [i_3 - 2] [i_13 + 2] [i_13])))));
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-32)) && (((/* implicit */_Bool) arr_16 [i_3] [i_13] [10]))))))) : (((/* implicit */int) var_2))));
        }
        for (unsigned long long int i_21 = 4; i_21 < 15; i_21 += 2) /* same iter space */
        {
            var_29 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_76 [i_3 - 2]))))), (((unsigned long long int) arr_76 [i_3 + 2])));
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(var_0))) * (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (arr_70 [i_3] [i_3 + 2] [i_3] [i_21] [i_3])))))))));
        }
    }
}
