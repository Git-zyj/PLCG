/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146019
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = arr_3 [i_0] [(short)0];
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((signed char) ((long long int) arr_0 [1U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (((unsigned int) (-(((/* implicit */int) arr_6 [i_1] [i_2]))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [14] [(_Bool)1])) ? (((((/* implicit */_Bool) ((long long int) arr_3 [0U] [0U]))) ? (((unsigned long long int) arr_3 [i_1] [i_2])) : (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */long long int) arr_6 [i_0] [i_1]))))))) : (arr_1 [i_1] [i_2])));
                    var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_1 [i_2] [i_1]) : (arr_1 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_19 = arr_12 [i_3];
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-3))))));
                        var_21 = ((/* implicit */signed char) ((int) arr_19 [i_6 + 1] [i_6 + 1]));
                    }
                } 
            } 
            var_22 &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_3] [i_4] [(signed char)11] [i_4]))))) ? (arr_14 [i_3] [i_3]) : (((/* implicit */int) ((unsigned char) arr_18 [i_3] [22ULL]))));
        }
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            arr_33 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)828))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_9 - 2] [i_10] [i_10]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) arr_18 [i_3] [i_7])) : (((/* implicit */int) arr_30 [i_7] [11ULL] [i_7] [(signed char)3] [i_7]))));
        }
        for (unsigned int i_11 = 2; i_11 < 21; i_11 += 2) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned char) (~(arr_35 [i_3] [i_3] [i_11])))))));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((unsigned char) arr_19 [i_11] [i_11 + 2]));
                        var_27 = ((signed char) arr_32 [i_11] [i_11] [i_11] [i_11] [13ULL] [i_11 + 1] [i_12]);
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((signed char) arr_42 [i_3] [i_3] [i_11 + 2] [i_11 + 2]));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-829))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11 - 1] [i_11] [(unsigned char)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11 + 2] [i_14]))) : (arr_27 [i_11 - 1] [(short)21] [i_11 - 1]))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_35 [i_11 + 2] [i_11 + 1] [i_11]))));
                        }
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_11 + 1])) ? (arr_35 [i_11 - 1] [(unsigned char)21] [i_11 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [(short)18] [i_12] [i_11 - 2])))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned int) ((signed char) arr_11 [(unsigned short)13]));
        var_34 = ((/* implicit */short) arr_38 [i_3]);
        var_35 = ((/* implicit */_Bool) ((unsigned short) ((short) arr_14 [i_3] [i_3])));
        var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]))));
    }
    for (long long int i_15 = 2; i_15 < 8; i_15 += 2) 
    {
        var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [18U] [i_15]))))), (arr_0 [0U]))))));
        var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_2 [i_15] [i_15]))))))));
        var_39 = ((/* implicit */signed char) min((var_39), (max((((signed char) arr_13 [i_15 + 2] [i_15 - 1])), (arr_30 [i_15] [i_15] [i_15] [i_15] [6U])))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 2) 
    {
        var_40 ^= ((/* implicit */unsigned short) ((unsigned int) -1));
        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_16 - 1] [i_16] [i_16 - 1]))));
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 16; i_17 += 3) 
    {
        for (signed char i_18 = 1; i_18 < 15; i_18 += 3) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_20 = 4; i_20 < 15; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) arr_23 [i_18 - 1] [(_Bool)1] [i_20 + 1]);
                        var_43 = ((/* implicit */signed char) arr_1 [10] [i_18]);
                    }
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_17] [i_17] [i_17] [(_Bool)1])) ? (min((((/* implicit */unsigned int) arr_24 [(signed char)3] [i_18] [i_17])), (arr_44 [19ULL] [i_18] [(_Bool)1] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_18] [i_18 + 1] [i_18] [i_21] [(short)21])))))) ? (((/* implicit */int) ((signed char) min((arr_20 [i_17] [12U] [i_19]), (((/* implicit */unsigned int) arr_14 [i_17] [i_18])))))) : (arr_39 [i_17] [i_17] [i_17])));
                        arr_68 [i_17] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_21 [i_19] [21LL] [i_19])), (((((/* implicit */_Bool) arr_64 [(short)14] [(unsigned short)2] [(short)14] [(unsigned short)2] [(unsigned short)11])) ? (((/* implicit */int) arr_56 [i_18] [i_19])) : (((/* implicit */int) arr_28 [i_17] [i_17] [17U] [(signed char)18] [i_19] [8LL]))))))));
                        var_45 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((short) arr_26 [(unsigned char)15])))) ? (arr_22 [i_17] [i_21]) : ((+(min((arr_34 [i_17]), (((/* implicit */unsigned long long int) arr_19 [i_18] [i_18]))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_22 = 1; i_22 < 15; i_22 += 3) 
                        {
                            arr_71 [i_18] [i_18] [i_18] [i_18] [i_17] = ((/* implicit */unsigned long long int) arr_45 [(signed char)3] [i_18] [i_18 + 1] [i_18] [15ULL]);
                            var_46 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_22] [i_18 + 1]))));
                        }
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            var_47 *= ((unsigned short) min((arr_27 [i_17] [i_18] [i_18 - 1]), (arr_27 [i_17] [i_17] [i_18 + 1])));
                            var_48 *= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((_Bool) arr_18 [i_17] [i_17]))));
                            arr_74 [i_17] [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) arr_26 [i_19]);
                        }
                        for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 2) 
                        {
                            var_49 -= ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_18 - 1] [9U])), (arr_62 [i_18 + 1] [i_18 + 1] [(short)8] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_62 [i_18 - 1] [i_18 - 1] [i_18] [i_18])))) : ((~(arr_36 [i_24 + 1] [i_24 + 1] [i_18 - 1]))));
                            var_50 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_18 - 1])) ? (((/* implicit */long long int) arr_7 [i_18 - 1])) : (arr_75 [i_18 - 1] [i_24 - 1]))), (arr_64 [i_17] [i_17] [i_19] [(unsigned char)1] [i_24])));
                            var_51 = ((/* implicit */unsigned char) max((arr_32 [i_17] [i_18 - 1] [i_24] [i_24] [(signed char)0] [i_24] [i_24 + 1]), (max((arr_32 [i_18] [i_18 - 1] [i_18 - 1] [7] [i_18 - 1] [i_18 - 1] [i_24 - 1]), (arr_32 [i_18] [i_18 - 1] [i_21] [i_21] [i_24] [(unsigned short)21] [i_24 - 1])))));
                        }
                        for (int i_25 = 2; i_25 < 14; i_25 += 2) 
                        {
                            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) arr_65 [i_17] [i_18] [i_19] [i_21]))));
                            var_53 = ((/* implicit */int) ((unsigned int) (((!(((/* implicit */_Bool) arr_38 [i_18])))) ? (arr_64 [i_18] [i_18] [i_18 - 1] [i_25 + 2] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_17] [i_17] [i_18 + 1]))))));
                        }
                        var_54 = ((/* implicit */unsigned int) min((min((9111529557223765395LL), (((/* implicit */long long int) (signed char)-123)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_18 - 1] [i_18 + 1])))))));
                    }
                    var_55 = ((/* implicit */short) (+(((/* implicit */int) arr_65 [(unsigned short)13] [(signed char)15] [(unsigned short)13] [(unsigned short)13]))));
                    var_56 = ((/* implicit */int) min((((unsigned short) arr_21 [i_18 - 1] [i_18] [i_18])), (((/* implicit */unsigned short) ((short) max((arr_10 [i_17] [i_17]), (arr_61 [2ULL] [i_18] [2ULL])))))));
                    /* LoopSeq 4 */
                    for (long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        var_57 += ((/* implicit */signed char) min((898808831), (((/* implicit */int) (short)-31782))));
                        var_58 = ((/* implicit */unsigned long long int) ((long long int) (short)-832));
                    }
                    for (unsigned char i_27 = 3; i_27 < 14; i_27 += 4) /* same iter space */
                    {
                        var_59 = ((/* implicit */long long int) ((unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_18])))))));
                        var_60 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_76 [i_27 - 1] [4ULL] [i_27] [i_27] [i_27] [i_27] [(_Bool)1])))) ? (((/* implicit */int) arr_28 [i_18] [i_18] [i_18] [i_18 - 1] [i_18 - 1] [(unsigned short)22])) : (((/* implicit */int) arr_66 [0] [i_18]))));
                    }
                    for (unsigned char i_28 = 3; i_28 < 14; i_28 += 4) /* same iter space */
                    {
                        var_61 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [15LL] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_28 + 2])) ? (((unsigned long long int) arr_54 [1])) : (((/* implicit */unsigned long long int) arr_57 [i_17] [i_28 - 2] [i_18 - 1]))))) ? (((/* implicit */unsigned long long int) (~(arr_7 [(short)15])))) : (((unsigned long long int) (-(((/* implicit */int) (short)11042))))));
                        var_62 = ((int) arr_18 [i_17] [i_17]);
                        var_63 = ((/* implicit */short) ((unsigned short) min((arr_58 [i_18] [i_18 - 1] [i_17]), (arr_58 [i_18] [i_18 + 1] [i_17]))));
                    }
                    for (short i_29 = 0; i_29 < 16; i_29 += 3) 
                    {
                        var_64 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_65 [i_17] [i_18 + 1] [i_19] [i_29])) ? (((/* implicit */int) arr_58 [(short)14] [i_18 + 1] [i_17])) : (((/* implicit */int) arr_65 [i_17] [i_18 + 1] [i_19] [i_29])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [1LL] [i_18 + 1] [1LL] [1LL])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_30 = 0; i_30 < 16; i_30 += 2) 
                        {
                            var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_18 + 1])))));
                            var_66 = ((/* implicit */unsigned int) ((int) arr_42 [15] [i_17] [i_18 - 1] [i_18 - 1]));
                        }
                        for (short i_31 = 0; i_31 < 16; i_31 += 2) /* same iter space */
                        {
                            var_67 = ((unsigned long long int) min((arr_59 [i_18] [i_18 + 1] [i_18] [i_18]), (arr_59 [2] [i_18 - 1] [(short)14] [i_29])));
                            var_68 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_87 [i_18 - 1] [(signed char)5] [(_Bool)1])) ? (((/* implicit */long long int) arr_69 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_17] [(unsigned char)5])) : (arr_87 [i_18 - 1] [i_18 - 1] [i_19]))), ((~(arr_87 [i_18 + 1] [i_18] [(unsigned char)11])))));
                        }
                        for (short i_32 = 0; i_32 < 16; i_32 += 2) /* same iter space */
                        {
                            var_69 ^= ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)8)), ((short)826)));
                            var_70 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_18 + 1] [i_18 + 1] [i_18])) ? (arr_4 [i_18 - 1] [i_18 + 1] [8ULL]) : (arr_4 [i_18 + 1] [i_18 + 1] [3LL]))), (((((/* implicit */_Bool) arr_4 [i_18 + 1] [i_18 - 1] [i_19])) ? (arr_4 [i_18 - 1] [i_18 - 1] [(short)10]) : (arr_4 [i_18 - 1] [i_18 - 1] [i_29])))));
                        }
                        var_71 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_87 [i_18 - 1] [i_18] [(short)8])) ? (((/* implicit */unsigned long long int) arr_3 [i_17] [i_18 + 1])) : (arr_34 [5]))), (((/* implicit */unsigned long long int) (~(arr_90 [i_18 - 1] [i_17] [i_18 + 1] [i_18 - 1] [i_29] [i_18 + 1]))))));
                        /* LoopSeq 2 */
                        for (int i_33 = 0; i_33 < 16; i_33 += 4) /* same iter space */
                        {
                            var_72 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)826))))));
                            arr_105 [i_33] [i_17] [i_19] [1U] [i_17] [i_17] = ((/* implicit */signed char) arr_99 [i_17] [i_29] [i_18] [i_19]);
                            var_73 = ((/* implicit */int) min((var_73), (((/* implicit */int) (+(arr_63 [i_17]))))));
                        }
                        for (int i_34 = 0; i_34 < 16; i_34 += 4) /* same iter space */
                        {
                            var_74 = ((/* implicit */short) ((signed char) (+(((unsigned int) arr_77 [i_17] [i_18] [i_17])))));
                            var_75 ^= ((/* implicit */short) ((unsigned int) ((unsigned short) (short)31782)));
                            var_76 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [0ULL] [i_18 - 1] [(unsigned short)20] [i_18] [i_18 + 1]))) : (arr_12 [i_18 + 1])))) ? (((((/* implicit */_Bool) arr_69 [i_34] [i_34] [i_19] [i_34] [i_17])) ? (((/* implicit */int) (short)828)) : (((/* implicit */int) arr_24 [i_18] [i_18] [(signed char)16])))) : (((/* implicit */int) ((signed char) arr_62 [i_19] [i_18 - 1] [i_17] [i_29])))));
                        }
                    }
                    var_77 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_100 [i_18 - 1] [i_18 - 1] [i_19])), (arr_81 [i_19] [4U] [9U] [4U])))) ? (arr_32 [11LL] [5] [(short)13] [2U] [i_18] [i_18] [(signed char)3]) : (max((arr_4 [i_17] [(signed char)15] [i_18 + 1]), (arr_4 [i_17] [i_18] [i_18 + 1])))));
                }
            } 
        } 
    } 
}
