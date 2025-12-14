/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113404
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((((((/* implicit */_Bool) (unsigned short)10961)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_16) : (var_4))) : ((~(arr_0 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)32759)), (6417646795616143863LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)23086)))) : (max((((/* implicit */int) arr_1 [i_0])), ((~(-1)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_1 [i_1]))))) ? (((((((/* implicit */_Bool) (unsigned short)42449)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_2]))))) : (((/* implicit */int) arr_5 [i_2]))));
                    arr_9 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_2 - 1] [i_1 - 2] [i_1 - 2])), (((((/* implicit */int) arr_6 [i_2 - 2] [i_1 + 2] [i_1 + 2])) - (((/* implicit */int) arr_6 [i_2 + 2] [i_1 - 1] [i_1 - 1]))))));
                    arr_10 [i_0] [i_1] [6U] = ((((/* implicit */_Bool) 4294967295U)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((arr_7 [i_3] [i_4] [i_5] [i_6 - 1]) != (arr_7 [i_3] [i_3] [i_5] [i_6 + 1])))));
                        var_22 = ((/* implicit */unsigned short) ((arr_3 [i_4 - 1] [i_4] [i_3]) - (arr_3 [i_4 - 1] [i_4] [i_4 + 1])));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_16 [i_3] [3LL] [i_3] [i_3]))));
                        var_24 &= 67108863LL;
                        var_25 = ((/* implicit */unsigned int) (+(((int) var_18))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3]);
        var_26 = ((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_3] [i_3] [i_3]));
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_27 [i_3] = ((/* implicit */_Bool) 3005726589U);
            arr_28 [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1])))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned short) arr_15 [i_9] [(unsigned short)6] [(unsigned short)6]);
                        var_28 = ((/* implicit */unsigned char) arr_19 [i_9] [i_9 + 2] [i_9 + 2] [i_8 + 1]);
                        arr_34 [i_8] = (!(((/* implicit */_Bool) var_13)));
                    }
                } 
            } 
            arr_35 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] = ((((/* implicit */_Bool) arr_12 [i_7])) || (((/* implicit */_Bool) arr_30 [i_3] [7] [i_7])));
            arr_36 [i_3] = ((/* implicit */signed char) arr_29 [i_3] [i_7]);
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) var_17);
            /* LoopSeq 3 */
            for (unsigned short i_11 = 4; i_11 < 18; i_11 += 4) 
            {
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11 - 4] [i_10] [i_11]))) * (10381815911416817569ULL))))));
                /* LoopSeq 2 */
                for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    var_31 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_11] [i_10])) * (((/* implicit */int) var_12))))) ? ((+(arr_0 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_7 [i_12 + 2] [i_11] [i_11] [i_11 - 3])));
                        arr_49 [i_12 - 1] [i_10] [i_10] [i_12] [i_10] = ((/* implicit */long long int) var_6);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_53 [i_12] [i_12] [(unsigned char)16] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_3] [i_3] [i_3] [i_11] [i_12] [i_12] [i_14])) ? (((/* implicit */long long int) arr_20 [i_3] [i_12 + 2] [i_3] [i_12] [i_12 - 1])) : (arr_17 [i_3] [i_10] [i_11])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned short)19684)) >> (((((/* implicit */int) (unsigned char)88)) - (83)))))));
                        var_32 = ((/* implicit */long long int) arr_16 [i_3] [i_10] [i_12] [i_14]);
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 3796787858U)) - (8064928162292734041ULL))) - (((/* implicit */unsigned long long int) ((arr_37 [i_3] [i_3]) ? (((/* implicit */int) (unsigned short)23086)) : (arr_16 [i_10] [i_10] [i_10] [i_10]))))));
                    }
                }
                for (long long int i_15 = 2; i_15 < 16; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_34 = (-((~(arr_16 [i_3] [i_3] [i_3] [i_3]))));
                        arr_58 [i_3] [i_10] [i_3] [i_15] [i_16] = ((/* implicit */int) ((var_10) >> (((((((/* implicit */_Bool) arr_29 [i_10] [i_16])) ? (((/* implicit */int) (unsigned char)128)) : (6))) - (102)))));
                        var_35 = ((/* implicit */_Bool) (unsigned char)48);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_11 + 2] [i_11 + 1] [i_15] [i_15 + 1] [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (4923714503969159022ULL))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_3] [i_10] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (8064928162292734047ULL))))));
                        arr_61 [i_3] [i_3] [i_11] [i_3] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_10] [i_10])) % (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
                    }
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_11 - 2] [i_15 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_30 [i_11 + 1] [i_15 + 1] [i_15])) : (((/* implicit */int) (unsigned short)65520))));
                    arr_62 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_11 - 3] [i_15 + 2])) + (((/* implicit */int) arr_14 [i_11 - 1] [i_15 - 1]))));
                    var_39 = ((/* implicit */unsigned short) ((arr_47 [i_3]) >= (((/* implicit */int) (!(((/* implicit */_Bool) -9)))))));
                }
            }
            for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    for (long long int i_20 = 1; i_20 < 18; i_20 += 2) 
                    {
                        {
                            var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_3] [i_10] [i_18] [i_19] [i_20])) ? (((/* implicit */int) arr_59 [i_3] [i_3] [i_10] [18] [i_19 + 2] [i_3] [i_20 + 1])) : (((/* implicit */int) arr_40 [i_3] [i_20] [i_3] [i_19]))))) ? (((arr_6 [i_10] [i_18] [i_20]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_17 [i_3] [i_10] [i_18]))) : (((/* implicit */long long int) ((arr_39 [i_18]) / (((/* implicit */unsigned int) arr_32 [i_3] [i_10] [i_18] [i_18] [i_20]))))));
                            arr_72 [i_3] [i_10] [i_10] [i_10] [i_20 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_20 + 1] [i_10] [i_19 + 1] [i_19] [i_19 + 1] [i_20 + 1] [i_19]))));
                        }
                    } 
                } 
                arr_73 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_3] [i_3] [i_18] [i_18] [i_18] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_10] [i_18])))) : (var_0)));
                var_41 = ((/* implicit */short) ((long long int) arr_66 [i_3] [i_3] [i_10] [i_3]));
                arr_74 [i_3] [i_10] [i_10] = ((/* implicit */unsigned short) ((8064928162292734063ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_10])))));
                var_42 = ((/* implicit */unsigned char) (+(13550179833040276256ULL)));
            }
            for (unsigned char i_21 = 2; i_21 < 19; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned char i_23 = 2; i_23 < 18; i_23 += 2) 
                    {
                        {
                            arr_84 [i_10] [i_10] [i_22] [i_22] [i_22] [i_10] = ((/* implicit */unsigned int) -6);
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_10))));
                        }
                    } 
                } 
                arr_85 [i_3] [i_10] [i_21 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_21 - 2] [i_21 - 2] [i_21 - 1])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_12))));
            }
        }
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
        {
            arr_88 [i_3] [i_3] [i_3] = (-(((/* implicit */int) arr_26 [i_3])));
            var_44 = ((/* implicit */int) ((unsigned short) var_17));
        }
    }
    for (short i_25 = 0; i_25 < 19; i_25 += 2) 
    {
        arr_91 [i_25] [i_25] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_32 [i_25] [i_25] [i_25] [i_25] [i_25]), (arr_47 [i_25])))) || (((((/* implicit */int) arr_76 [i_25] [i_25] [i_25] [i_25])) <= (var_13))))))));
        arr_92 [i_25] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_25])) ? (((arr_80 [i_25] [12] [i_25] [i_25]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)6108))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(arr_55 [i_25] [i_25] [14] [i_25])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_18)))))));
    }
    var_45 = ((/* implicit */short) -5LL);
    var_46 = min((((/* implicit */int) (unsigned short)9119)), (var_11));
}
