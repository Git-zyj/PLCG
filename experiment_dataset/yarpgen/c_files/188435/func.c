/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188435
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -524258470))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1 + 4] = ((/* implicit */short) arr_1 [i_0] [i_1 - 1]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((-1656505577) & (arr_2 [i_0])))));
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        }
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_12 [i_0] [i_3] = (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)4080))) * (289159370U))));
            var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_2 [(short)18]))));
                            var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -524258470)) ? (arr_13 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_6])))))));
                            var_19 = arr_20 [i_3] [i_6];
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)15]));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_20 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7]))) > (arr_14 [i_7] [i_7] [i_7] [i_7])))), (max((((/* implicit */unsigned long long int) 524258469)), (arr_14 [i_7] [i_7] [i_7] [i_7])))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) -524258495);
                        var_22 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10 + 1]))) * (arr_30 [i_7] [i_8] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_9] [(signed char)14])) ? (((/* implicit */int) arr_4 [(signed char)2] [(signed char)2] [6ULL])) : (((/* implicit */int) (short)11336))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */unsigned long long int) arr_27 [i_7] [i_9])) : (arr_28 [i_7] [10U] [i_10 - 1])))) ? (((/* implicit */int) arr_21 [16LL] [i_8 - 2] [i_9 - 2] [i_8 - 2] [i_9 - 2] [i_10 + 1] [i_10])) : ((~(((/* implicit */int) arr_31 [i_8])))))))));
                        arr_36 [i_7] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_9 + 1])) ? (arr_14 [i_8 + 1] [i_8] [i_9 + 1] [i_10 - 2]) : (((/* implicit */unsigned long long int) arr_20 [i_8 + 1] [i_9 - 2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_8 - 3] [i_9 + 1] [i_10 - 2] [i_10 + 1])), (arr_20 [i_8 - 3] [i_9 - 1]))))));
                        var_23 ^= ((unsigned int) max((arr_1 [i_8 + 1] [i_9 + 2]), (((/* implicit */long long int) (~(((/* implicit */int) (short)4080)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [i_11])) / (arr_18 [i_11 + 3] [i_11 - 1] [i_11 - 1])));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */int) arr_21 [4LL] [i_11] [(_Bool)1] [i_11] [(_Bool)1] [i_11 + 2] [i_11])) > (((/* implicit */int) ((15711337593417567471ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_11] [i_11 - 1] [i_12] [i_13])))))))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11]))) <= (3651943787U)));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 2; i_14 < 22; i_14 += 4) 
                {
                    var_27 += ((/* implicit */unsigned long long int) arr_44 [i_14]);
                    arr_47 [i_11 + 1] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_22 [i_11] [i_11] [i_12] [i_13] [i_13]))))));
                    var_28 = ((/* implicit */signed char) ((short) arr_2 [i_11]));
                }
                for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_4 [i_11 + 1] [i_15 - 2] [i_15 - 2]))));
                    arr_51 [i_11] [i_12] [i_11] [i_15 - 2] = ((/* implicit */long long int) ((unsigned int) arr_50 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_15 - 2]));
                    var_30 = ((/* implicit */unsigned int) arr_3 [i_11]);
                }
                for (unsigned long long int i_16 = 2; i_16 < 23; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_31 = (!(((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11 + 4] [i_11 + 3])));
                        var_32 = ((_Bool) arr_13 [i_12]);
                        var_33 = ((/* implicit */signed char) (short)-15015);
                    }
                    arr_57 [i_11] [(_Bool)1] [i_11] [i_16 - 2] = ((/* implicit */unsigned long long int) (~(((arr_37 [i_11]) ? (arr_48 [i_11 + 2] [i_12] [(_Bool)1] [i_12] [12LL] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))))));
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (+(arr_53 [i_11 + 3] [(_Bool)1] [i_16 - 2] [i_16] [i_16] [i_16 + 1]))))));
                    arr_58 [i_12] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_12] [i_13]))) & ((~(4284287979U)))));
                }
                arr_59 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((arr_9 [i_11 + 2] [i_12] [0ULL]) & (arr_9 [i_11 + 1] [i_12] [i_12])));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4080)) ? (((((/* implicit */int) (short)-7989)) - (((/* implicit */int) arr_40 [i_11])))) : (arr_49 [i_11 + 2] [i_11] [i_12] [(unsigned char)1] [i_13] [i_11])));
            }
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11 + 3])) ? (8129879692683250828ULL) : (((/* implicit */unsigned long long int) arr_0 [i_11 + 3]))));
            arr_60 [14LL] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_11 + 3]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((long long int) 1656505561)) & (((/* implicit */long long int) ((/* implicit */int) arr_37 [4LL]))))))));
            var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)19941)) || (((/* implicit */_Bool) arr_56 [i_11 + 3] [i_11] [i_11] [i_11] [i_11 + 3] [i_11])))) ? (((/* implicit */int) arr_54 [i_11 + 1] [i_11] [12ULL] [i_18] [i_18])) : (((((/* implicit */int) arr_4 [i_11] [i_18] [i_11])) << (((((((/* implicit */int) (short)-11336)) + (11353))) - (3)))))));
        }
    }
}
