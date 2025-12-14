/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115677
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
    var_15 = ((/* implicit */signed char) ((unsigned char) (unsigned char)31));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 -= ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0]));
    }
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_2 [i_1 - 1] [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))));
        var_20 = ((/* implicit */int) arr_4 [i_1 - 1]);
        var_21 = ((/* implicit */long long int) var_7);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */_Bool) 1405846594U)) ? (arr_1 [i_2]) : (((/* implicit */long long int) -1165725822)))) == (((/* implicit */long long int) 1131504869))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2] [i_2 + 1]))) >= (arr_8 [i_2 - 1]))))));
        var_24 |= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 2])) | (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))));
        arr_9 [i_2] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2 + 1]))));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) ((unsigned short) arr_2 [i_3] [(_Bool)1]))) - (((((/* implicit */_Bool) 268435448LL)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_11 [i_3] [i_3])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) arr_14 [i_3] [i_4] [i_4]));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */int) arr_0 [3U] [i_3])) : (((/* implicit */int) (unsigned char)228)))))));
            var_26 = (unsigned char)245;
        }
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (-1165725822)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_28 |= ((/* implicit */unsigned int) max((((int) 893345979)), (((/* implicit */int) ((short) arr_18 [i_5])))));
        arr_20 [i_5] = ((unsigned char) max((arr_8 [11U]), (((/* implicit */long long int) var_5))));
        arr_21 [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 9145081387513780558LL)) ? (1131504869) : (((/* implicit */int) (unsigned char)22)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == ((~(arr_1 [i_5]))))))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_25 [i_5] [i_6 - 1] [i_6] = ((/* implicit */_Bool) var_12);
            var_29 = ((/* implicit */_Bool) arr_19 [i_5]);
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_33 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8] = arr_19 [i_6 - 1];
                    arr_34 [i_5] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_6 - 1] [i_8]))) : (arr_24 [(unsigned char)6] [(unsigned char)6] [i_5])))))));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((unsigned int) arr_1 [(unsigned char)3])) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_7] [i_8]))))))));
                }
                var_31 = ((((/* implicit */_Bool) arr_8 [i_6 - 1])) ? (((/* implicit */int) ((_Bool) arr_8 [i_6 - 1]))) : (((/* implicit */int) ((unsigned char) arr_17 [i_5]))));
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (unsigned short)29095)))))));
                    var_33 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_9])) - (((/* implicit */int) arr_32 [i_5] [i_6] [i_7] [i_6] [i_9])))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 4; i_10 < 21; i_10 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) max((1465943674379591870LL), (((/* implicit */long long int) arr_32 [i_7] [i_9] [i_7] [i_6] [i_5]))));
                        arr_39 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) arr_24 [(signed char)1] [i_6] [(signed char)1]);
                    }
                    for (int i_11 = 2; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_23 [i_11 - 2] [i_6 - 1] [i_7]))) ? (((((/* implicit */int) arr_23 [i_11 - 1] [i_6 - 1] [i_7])) | (((/* implicit */int) arr_23 [i_11 + 1] [i_6 - 1] [i_11 + 1])))) : (((/* implicit */int) max((arr_23 [i_11 - 2] [i_6 - 1] [(signed char)15]), (arr_23 [i_11 + 1] [i_6 - 1] [i_7]))))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_37 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_7] [i_11 + 1]), (arr_37 [i_5] [i_5] [i_5] [i_5] [i_6 - 1] [i_7] [i_11 + 2])))) ? (((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_11 + 1])) ? (((/* implicit */int) arr_37 [i_5] [i_5] [i_6] [i_6] [i_6 - 1] [i_7] [i_11 - 2])) : (((/* implicit */int) arr_37 [i_6] [i_6] [16] [i_6] [i_6 - 1] [i_7] [i_11 - 2])))) : (((/* implicit */int) ((unsigned short) arr_37 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_7] [i_11 - 2])))));
                    }
                    for (int i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) arr_35 [i_5] [i_7] [i_7] [i_9] [i_5]);
                        arr_46 [i_7] = ((/* implicit */int) max((max((arr_17 [i_6 - 1]), (arr_17 [i_6 - 1]))), (((((/* implicit */_Bool) -1025664570)) ? (9145081387513780553LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17781)))))));
                        arr_47 [i_5] [i_5] [i_5] [(short)6] [i_12] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) max((var_0), (arr_0 [i_12] [i_6])))), (arr_18 [i_6 - 1])))), (max((((/* implicit */int) arr_35 [i_6 - 1] [i_7] [i_6 - 1] [22] [i_12 + 2])), (((int) arr_26 [i_5] [i_6] [(unsigned char)15] [i_7]))))));
                    }
                    var_38 += ((/* implicit */long long int) arr_44 [i_5] [i_5] [i_9] [i_5] [i_9]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */int) ((unsigned char) arr_28 [i_6 - 1] [i_9] [i_9] [i_7]));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 1025664581))) && (((/* implicit */_Bool) ((arr_42 [i_13] [i_9] [i_5] [i_5] [i_5] [i_5]) << (((((/* implicit */int) arr_32 [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1] [(_Bool)1])) - (15328)))))))))));
                    }
                }
                for (long long int i_14 = 2; i_14 < 22; i_14 += 3) 
                {
                    arr_54 [i_5] [i_7] [i_6] [i_5] [i_7] [i_14] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned short)15059)) * (((/* implicit */int) (_Bool)1)))));
                    arr_55 [(unsigned short)14] [i_7] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29094)) ? (((/* implicit */int) (unsigned short)30773)) : (arr_36 [i_5] [i_5] [i_5] [i_6] [i_7] [i_5])))) ? (((/* implicit */int) ((short) arr_24 [i_6 - 1] [i_6 - 1] [i_14 + 1]))) : (((/* implicit */int) ((unsigned char) arr_31 [i_7] [i_6 - 1] [i_7])))));
                    var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((unsigned char) max(((+(((/* implicit */int) arr_32 [i_5] [i_5] [i_7] [i_5] [i_6])))), (arr_52 [i_5] [i_6] [i_6] [i_14 - 1] [i_7])))))));
                }
            }
            arr_56 [i_6 - 1] = ((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6]);
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_23 [i_5] [i_15] [i_15])) - ((+(((/* implicit */int) var_0)))))) + (((/* implicit */int) max((arr_18 [i_15 - 1]), (arr_18 [i_15 - 1]))))));
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                var_43 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((int) arr_6 [i_5]))) <= (((((var_10) + (9223372036854775807LL))) << (((var_7) - (1995513019)))))))), ((-(((/* implicit */int) ((-1579306030) <= (((/* implicit */int) (_Bool)1)))))))));
                var_44 += max((((((/* implicit */int) arr_32 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_5])) + (((/* implicit */int) arr_32 [i_15 - 1] [i_15 - 1] [i_16] [i_5] [i_5])))), (((/* implicit */int) ((_Bool) arr_32 [i_15 - 1] [i_15] [(unsigned char)18] [i_16] [i_15 - 1]))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_17 = 4; i_17 < 22; i_17 += 2) 
            {
                arr_64 [i_15] [i_17 - 2] = ((/* implicit */unsigned short) ((int) max(((unsigned short)5804), (((/* implicit */unsigned short) arr_29 [i_17 + 2] [i_15] [i_15])))));
                arr_65 [i_5] [i_5] |= ((/* implicit */long long int) arr_0 [i_15 - 1] [i_15 - 1]);
                arr_66 [(unsigned char)13] [i_15] [i_15] = ((/* implicit */long long int) (~(max((-2119232250), (((/* implicit */int) (unsigned char)232))))));
            }
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
        {
            arr_69 [i_5] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(305361392656993325LL)))) ? (((/* implicit */int) arr_23 [i_5] [(unsigned char)21] [i_18 - 1])) : (((/* implicit */int) ((unsigned char) ((int) (_Bool)1))))));
            arr_70 [i_5] [(unsigned char)1] [i_18] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_30 [i_5] [i_18 - 1] [i_18 - 1] [i_18])) >= (max((arr_36 [i_5] [i_18] [i_18 - 1] [i_5] [i_18 - 1] [(unsigned char)0]), (-103409534))))))));
            var_45 &= ((/* implicit */int) arr_8 [i_5]);
        }
    }
}
