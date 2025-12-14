/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115814
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
    var_17 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((((var_7) || (((/* implicit */_Bool) arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) 1105011763)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : ((((_Bool)1) ? (1349529678U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18827))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10))))) < (((/* implicit */int) arr_3 [(signed char)9] [i_1]))))))));
                var_18 = ((/* implicit */unsigned long long int) (+(max((var_15), (((/* implicit */int) (signed char)3))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    var_19 ^= ((/* implicit */unsigned long long int) (~(1895130291)));
                    arr_8 [i_1] = ((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1105011763)))))))) ? (var_6) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)25965))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_0] = ((/* implicit */unsigned short) min((arr_6 [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0 - 1])))))));
                        arr_15 [i_0] [i_0] [i_0] [17] [(_Bool)1] = ((/* implicit */signed char) max((max((arr_13 [i_0 + 1]), (arr_13 [i_0 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)51)))))));
                        arr_16 [i_0] [i_0] [5ULL] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) var_12);
                        arr_20 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_2 [i_3])))))));
                        var_21 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)48)))) | (((/* implicit */int) var_11))));
                        var_22 = ((/* implicit */_Bool) min(((+(arr_12 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)-49)))), (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            arr_26 [i_3] [i_6 + 1] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0 - 1]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1))));
                            var_24 += ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        }
                        for (signed char i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                        {
                            arr_30 [i_8] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_4)), (var_5)));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25967)) - (268369920)));
                        }
                        arr_31 [i_0 - 1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (~(arr_29 [(signed char)11] [i_0 - 1] [i_0 - 1] [i_6] [i_6])));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11032)))))));
                        var_27 = (-(((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_6 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_24 [i_0 - 1] [i_6 - 1] [i_6] [i_6] [i_6 + 1])))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) arr_4 [i_3] [i_9]);
                        var_29 = ((/* implicit */signed char) arr_12 [i_3] [i_0]);
                        var_30 = ((/* implicit */long long int) arr_7 [i_3] [i_3] [i_9 + 1] [i_9]);
                    }
                    var_31 = ((/* implicit */unsigned char) ((arr_13 [i_0 + 2]) - (((/* implicit */unsigned long long int) 1895130291))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54503)) || (((/* implicit */_Bool) -1914894620215861453LL)))))));
                                var_33 &= arr_3 [i_0 - 1] [i_1];
                                var_34 -= ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) max((var_0), (var_12)))), (min((((/* implicit */long long int) var_14)), (arr_29 [9ULL] [i_0] [15ULL] [(unsigned char)0] [i_10])))))));
                    arr_43 [i_10] [i_10] [i_10] &= ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */short) (signed char)-40)), ((short)-22714)))), (((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 - 1] [i_0 + 2]))) & (var_6)))));
                    arr_44 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [2ULL] [i_10] [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_28 [i_0 + 1] [i_1] [16LL]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) | (4294967295U)))))) ? (((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (unsigned char)56)) : (-1250831345))) : (((/* implicit */int) (signed char)3))));
                }
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_51 [i_0] [i_1] [i_13] [(signed char)15] [i_15] [i_14] [9] = ((/* implicit */_Bool) ((unsigned long long int) var_1));
                                arr_52 [i_15] [i_0] [i_1] [i_0] = ((/* implicit */int) (~((~(var_6)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
