/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120431
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((_Bool) -1073741824));
        arr_4 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1]))))));
        var_20 = ((((/* implicit */_Bool) ((int) ((6U) >> (((2147483622) - (2147483593))))))) ? (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))))) : (var_1));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
            var_21 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) var_8)))))))));
        }
    }
    for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 746772717)) ? (((/* implicit */int) (short)-3806)) : (((/* implicit */int) (short)3804))));
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) -746772718)), (15ULL)));
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_3]) ? (((((/* implicit */int) arr_6 [i_3] [8U] [i_3])) & (var_1))) : ((-(var_1))))))));
        arr_16 [11U] = ((/* implicit */unsigned char) (~(((unsigned long long int) (+(((/* implicit */int) arr_8 [i_3])))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_24 = ((/* implicit */short) ((unsigned long long int) arr_10 [i_3 + 2] [i_4 - 1]));
                var_25 = ((/* implicit */long long int) ((unsigned int) arr_17 [i_3 + 1] [i_3 - 1]));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_26 [i_3] = ((/* implicit */unsigned long long int) (~((~(min((883138101539988330LL), (arr_5 [(unsigned short)4])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (var_3)));
                    arr_29 [i_3] [(_Bool)1] [i_3 - 1] [i_3] [i_3] [i_3 - 2] = ((/* implicit */_Bool) (+(2147483624)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        var_27 &= ((/* implicit */signed char) ((unsigned char) arr_12 [i_4 + 1]));
                        arr_32 [i_3] [i_4] [i_6 - 1] [i_6] [i_7] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) ((arr_31 [i_3] [i_3] [7LL] [5LL] [i_4 + 1] [i_4]) && (arr_31 [i_4] [i_4 - 2] [i_4] [i_4 + 2] [i_4 + 1] [(_Bool)1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) (~(((arr_34 [i_3 + 2] [i_3] [i_3] [i_3 + 1] [i_3]) + (((/* implicit */int) arr_21 [i_6] [6U] [i_9]))))));
                        arr_36 [0LL] [i_4] [i_6 - 1] [i_7] [i_7] [i_9] = ((/* implicit */signed char) arr_27 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 2]);
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [(_Bool)1] [(signed char)2]))) % (arr_12 [i_3])))) || (arr_31 [3ULL] [i_4 - 2] [i_6] [i_7] [i_3 + 1] [i_6 - 1])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_40 [i_10] [i_10] [3U] [i_6] [i_10] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_33 [i_3] [6U] [i_3 - 1] [i_4 - 2] [i_6 - 1] [i_7])) != (((/* implicit */int) arr_33 [i_3] [i_3 + 2] [i_3 - 1] [i_4 + 2] [i_6 - 1] [i_7])))) ? (((/* implicit */int) max((arr_33 [i_3] [(unsigned short)1] [i_3 + 2] [i_4 - 1] [i_6 - 1] [i_7]), (arr_33 [i_3] [i_3] [i_3 - 1] [i_4 - 1] [i_6 - 1] [i_6 - 1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_33 [7LL] [i_3] [i_3 - 2] [i_4 - 1] [i_6 - 1] [i_3])) : (((/* implicit */int) arr_33 [i_3] [i_3] [i_3 + 2] [i_4 + 2] [i_6 - 1] [i_10]))))));
                        var_30 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_3] [i_4] [i_6 - 1] [i_7] [i_10])) && (((/* implicit */_Bool) var_6))))), ((~(22U)))))));
                    }
                }
                var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)3826)) << (((/* implicit */int) var_16))))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4 - 2])) << (((/* implicit */int) arr_28 [10U] [i_6] [i_6 - 1] [7U] [7U])))))));
                arr_41 [8U] = ((/* implicit */unsigned int) (+(((arr_34 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 + 1] [11U]) / (arr_34 [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2])))));
            }
            var_32 = ((/* implicit */int) ((_Bool) (!(arr_13 [i_3]))));
        }
    }
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        arr_44 [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) var_13)));
        arr_45 [i_11] = ((/* implicit */int) ((_Bool) ((_Bool) ((((/* implicit */int) arr_2 [i_11] [15ULL])) << (((var_9) - (5757891087268287186ULL)))))));
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_1))))) : ((~(min((-746772718), (((/* implicit */int) (signed char)-71))))))));
    /* LoopSeq 1 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        arr_49 [(signed char)10] [(_Bool)1] = ((/* implicit */unsigned char) var_13);
        /* LoopSeq 1 */
        for (unsigned short i_13 = 4; i_13 < 10; i_13 += 3) 
        {
            var_34 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((int) arr_18 [i_12] [i_12] [(_Bool)1]))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_12] [i_12] [i_12] [i_12])) || (((/* implicit */_Bool) arr_14 [i_12] [1U]))))))));
            var_35 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_13 - 1] [i_12 - 1]))))), (((unsigned int) arr_22 [i_13 - 1] [i_12 - 1]))));
        }
        arr_52 [(short)1] [i_12] = ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_28 [(_Bool)0] [i_12] [i_12] [i_12] [i_12]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_12 - 1])) != (((/* implicit */int) ((signed char) var_5)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-15788)) == (((/* implicit */int) (_Bool)1))))));
        var_36 *= ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) ((signed char) arr_17 [i_12 - 1] [i_12])))));
    }
    var_37 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26277))));
    var_38 ^= ((/* implicit */int) ((2334666813488400910LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3807))) < (var_5)))))));
}
