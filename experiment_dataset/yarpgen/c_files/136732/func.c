/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136732
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
    var_12 += ((/* implicit */short) var_4);
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)61921)) : (((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) (signed char)-61))))))))));
    var_14 = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)61)), ((unsigned char)128)))), (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (unsigned char)127))))));
                    arr_8 [i_0] = ((/* implicit */long long int) min((((unsigned long long int) ((signed char) (unsigned short)61915))), ((~(9680471093378449330ULL)))));
                    arr_9 [(signed char)18] [i_2 - 1] [18ULL] [i_2] |= ((/* implicit */unsigned long long int) (unsigned short)26546);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1] [(_Bool)1]));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)-60)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_1] [i_0] [i_0])), (1882963665U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_3)) < (4294967295U)))) : (min((-1194397469), (-552495695)))))));
                            arr_16 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((-2147483638), (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)20533)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_0 [i_0] [12])))))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [(_Bool)1] [i_4])) / (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [3]))))))));
                            var_17 += ((/* implicit */signed char) (_Bool)1);
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            arr_20 [6ULL] [i_1] [18LL] [i_3 - 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (min(((+(9680471093378449344ULL))), (((/* implicit */unsigned long long int) max((-1608802916), (((/* implicit */int) (_Bool)1)))))))));
                            var_18 = ((/* implicit */int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) 5322256271759107376ULL)) ? (((/* implicit */int) (short)-28210)) : (((/* implicit */int) (signed char)-53))))));
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)11] [i_1] [(signed char)5] [i_5])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0])) : ((-(((/* implicit */int) arr_6 [i_1]))))))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_3 + 1] [i_0] [i_3 - 2] [0] [i_3])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (3090891399798453906ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_2 + 1] [i_0] [(short)18] = ((/* implicit */_Bool) ((unsigned char) 3916836109896654148LL));
                            var_19 = ((/* implicit */signed char) ((int) 3916836109896654148LL));
                        }
                        var_20 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_5 [(unsigned short)7] [i_1] [i_1])))) ? ((+(((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned char)10] [(unsigned char)10])))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [12U] [i_1] [i_1] [(short)11])) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_1] [i_0]))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)1)) - (((/* implicit */int) ((unsigned short) 3916836109896654148LL)))));
                        arr_26 [8] [i_1] [2] [i_1] [(short)16] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2189115583761123702ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_3] [(signed char)9] [i_2] [(_Bool)1] [i_0])))))) : (((((/* implicit */_Bool) arr_18 [20] [i_2 + 3] [i_2] [i_2] [i_1] [i_0] [(signed char)6])) ? (arr_19 [i_3]) : (((/* implicit */long long int) arr_23 [6LL] [(unsigned short)4] [i_1] [i_1] [15] [6U] [(signed char)12]))))))) ? (((/* implicit */int) (short)28224)) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_3] [i_2] [16ULL] [16ULL] [i_1] [4U])))))))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        var_22 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_7]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 18; i_9 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (short)0);
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0] [i_0]));
                                var_25 = ((/* implicit */unsigned char) ((unsigned long long int) arr_39 [i_9] [i_0] [i_11 - 2]));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_0] = ((/* implicit */unsigned char) ((int) 8191U));
        arr_41 [(unsigned char)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [8LL] [8LL] [i_0] [0LL] [i_0])) && (((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [10LL] [i_0])))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) >= (((/* implicit */int) (short)-2102)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_19 [i_0])))) >= ((~(16972057147547068537ULL))))))) : (((long long int) arr_5 [i_0] [i_0 - 1] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_12 = 4; i_12 < 19; i_12 += 4) /* same iter space */
        {
            var_26 ^= ((/* implicit */unsigned short) ((unsigned char) (signed char)40));
            arr_45 [i_0] = ((int) arr_36 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]);
            arr_46 [i_0] [i_12 - 4] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)4092)))) << (((((int) var_2)) + (428449962)))));
        }
        /* vectorizable */
        for (int i_13 = 4; i_13 < 19; i_13 += 4) /* same iter space */
        {
            var_27 |= ((/* implicit */signed char) (short)17);
            /* LoopNest 2 */
            for (unsigned short i_14 = 1; i_14 < 18; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 2) 
                {
                    {
                        arr_54 [i_0] [i_14] [i_13] [i_0] = ((/* implicit */unsigned short) ((long long int) -1030832489));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_14 + 1] [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17458))) : (13142224193249495565ULL))) : (arr_35 [i_14 + 3] [i_0] [i_14 + 1] [i_14 + 3])));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_13 + 2] [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_13] [i_14] [i_15 - 1])) & (((/* implicit */int) (unsigned short)2))))) : (var_9))))));
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */short) var_1);
}
