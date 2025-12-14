/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159321
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
    var_10 |= ((/* implicit */signed char) (~(max((((unsigned int) var_6)), (((/* implicit */unsigned int) (short)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 += ((unsigned long long int) (signed char)-34);
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (var_8)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned short) (short)21);
        var_14 = ((/* implicit */long long int) max((max(((+(((/* implicit */int) (short)-16)))), (((/* implicit */int) (short)18)))), (((/* implicit */int) max((arr_8 [i_2]), ((short)22))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [(signed char)3]))) != (arr_3 [2] [2])))), ((~(((/* implicit */int) arr_8 [i_2])))))) & (((/* implicit */int) ((signed char) (short)15))))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) ((signed char) (short)2060));
            arr_11 [i_3] = ((/* implicit */signed char) ((long long int) (short)2044));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) ((var_3) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)122))) ? (((/* implicit */int) min(((short)2065), (((/* implicit */short) arr_14 [i_4]))))) : (((/* implicit */int) arr_5 [2] [2] [i_4])))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_22 [4LL] [i_4] = ((/* implicit */_Bool) var_6);
                    var_18 = ((/* implicit */long long int) ((arr_9 [i_4] [i_2] [i_5]) & (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_4])) && (((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_5])))))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (-((-(min((var_5), (((/* implicit */long long int) arr_24 [i_2] [i_2] [i_5] [i_2] [i_8]))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) arr_6 [i_2] [(short)1])) : (((/* implicit */int) (short)-23)))))))));
                        }
                    } 
                } 
            }
            arr_27 [i_2] [i_4] [i_4] = ((/* implicit */short) ((max((((/* implicit */int) (short)1)), ((~(((/* implicit */int) (signed char)74)))))) > (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [(signed char)4]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((unsigned long long int) (signed char)-78))))) ? (((unsigned long long int) (~(arr_21 [i_2] [i_4] [i_9 + 1] [i_9])))) : (((/* implicit */unsigned long long int) (~(arr_25 [9LL] [i_4] [i_9 - 1] [i_2] [i_2] [i_2] [i_2]))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_4] [(_Bool)1]))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    arr_35 [i_2] [i_4] [i_10 + 1] [i_11] [i_11] = ((/* implicit */int) ((unsigned long long int) (short)-2072));
                    arr_36 [i_10] [i_2] [i_10] [4ULL] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) arr_17 [(short)6] [(short)6] [i_11])), ((-(((/* implicit */int) arr_2 [i_2]))))));
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((min((((((/* implicit */_Bool) arr_32 [i_2] [i_2] [3ULL])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_15 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)23134)) >> (((((/* implicit */int) (signed char)38)) - (7)))))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_29 [i_2] [i_4] [i_12] [i_12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [3ULL])))))))))));
                    var_25 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_28 [(signed char)6] [i_12])) : (((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10])) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_4]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2044)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_44 [i_2] [(signed char)1] [i_10] [i_12] [3] &= ((/* implicit */_Bool) var_6);
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (short)5591)) : (((/* implicit */int) (short)-15))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_37 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_30 [i_12] [i_4] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_10 - 1] [i_10 - 1] [(signed char)4] [(_Bool)1] [i_12]))))) : (((/* implicit */int) (_Bool)0)))))));
                        var_28 += ((/* implicit */_Bool) ((min((((((/* implicit */int) (signed char)8)) * (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (short)-27482)))) * (((/* implicit */int) min((((/* implicit */short) ((arr_9 [i_2] [i_2] [i_10 - 1]) <= (((/* implicit */int) arr_28 [i_2] [i_12]))))), (max((((/* implicit */short) (unsigned char)0)), ((short)15))))))));
                    }
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_29 = ((unsigned char) arr_17 [i_2] [i_2] [i_10 + 1]);
                    arr_48 [i_2] [i_4] [i_4] [2ULL] [i_10 - 1] [i_14] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */int) arr_30 [i_14] [i_4] [i_10]))));
                }
            }
        }
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 1; i_16 < 7; i_16 += 2) 
        {
            for (int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */unsigned long long int) arr_34 [i_15] [(short)6] [9LL] [i_17] [(_Bool)1])) & (13314325984950963752ULL))))), (((/* implicit */unsigned long long int) 1074091268U))));
                    var_31 = ((/* implicit */short) ((max((((arr_47 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) / (((/* implicit */long long int) ((/* implicit */int) (short)-15636))))), (((/* implicit */long long int) min((((/* implicit */int) (short)32751)), (var_8)))))) * (min((17592186044415LL), (((/* implicit */long long int) (unsigned char)17))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_16 [i_15] [i_15] [i_15] [i_15]))));
        var_33 = ((/* implicit */signed char) ((short) max((((/* implicit */short) arr_2 [i_15])), (arr_18 [i_15] [i_15] [i_15] [i_15]))));
        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_15])), (min((((/* implicit */int) arr_31 [i_15] [i_15] [(signed char)3])), (456512029))))))));
    }
}
