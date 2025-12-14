/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109621
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) max(((unsigned short)48476), ((unsigned short)17059)))) - (48464))))) >> (((max((((((/* implicit */int) (unsigned short)48480)) << (((((/* implicit */int) var_0)) - (97))))), (max((var_6), (((/* implicit */int) var_0)))))) - (1830232099)))));
    var_12 &= ((/* implicit */int) (signed char)56);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_0 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))));
        var_13 = ((/* implicit */signed char) ((arr_0 [i_0 - 3]) > (arr_0 [i_0 - 4])));
        var_14 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [(unsigned short)11]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((unsigned short) arr_5 [i_1]));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (-(((long long int) (signed char)76))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_2]);
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_9))));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)103))));
            arr_12 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49734)) || (((/* implicit */_Bool) (unsigned short)21908))))) + (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_10 [i_3] [i_3]))))));
            arr_13 [i_1] [i_1] = ((/* implicit */int) var_0);
            var_18 = var_6;
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_1] = ((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            arr_18 [i_1] [i_1] = var_10;
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4])))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_1))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] = var_4;
                            var_20 = ((/* implicit */signed char) -1142748967235995579LL);
                        }
                    } 
                } 
            }
            for (long long int i_8 = 3; i_8 < 16; i_8 += 1) 
            {
                var_21 = ((/* implicit */long long int) arr_10 [i_1] [i_8 - 3]);
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (-(-1611631245)));
                    var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_8 - 3] [i_1] [i_4])) ? (((var_10) + (var_5))) : (((/* implicit */int) ((short) var_8)))));
                    arr_31 [i_1] [i_1] [i_8] [i_1] = ((signed char) 1716945726);
                }
                for (signed char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    arr_34 [i_1] [i_1] = 2147483647;
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [(signed char)9]))) < (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8 + 2] [i_8 + 2])))))));
                        arr_38 [i_10] [i_10] [i_8] [i_4] [i_10] |= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1] [i_1])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1])))))));
                        var_25 = ((unsigned char) ((((/* implicit */long long int) var_10)) > (var_1)));
                    }
                }
                for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    arr_41 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8 - 2])) || ((!(((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_8] [i_8] [i_12]))))));
                    var_26 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_1 [i_1] [i_8 + 1])))));
                }
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_7)))) >> (((((arr_42 [i_13]) << (((/* implicit */int) arr_9 [(_Bool)1])))) - (2106913592)))));
            arr_46 [i_1] = ((/* implicit */int) var_7);
        }
        var_27 = ((int) arr_4 [i_1]);
        var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) 226469978963225801LL)))));
    }
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_43 [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_43 [i_14] [i_14] [i_14])))), (min((((/* implicit */int) arr_43 [i_14] [(signed char)17] [i_14])), (arr_44 [i_14]))))))));
        arr_49 [i_14] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_47 [i_14])), ((~(((((/* implicit */_Bool) arr_35 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (var_10) : (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_22 [i_14] [i_14])))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_1 [i_14] [i_14])) : (max((-622722863), (((/* implicit */int) (_Bool)1)))))))));
        var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)1)) ? (-1142748967235995595LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_14] [i_14] [i_14])) + (((/* implicit */int) arr_7 [i_14] [i_14] [i_14])))))));
    }
}
