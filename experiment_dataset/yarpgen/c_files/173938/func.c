/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173938
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)58111);
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (6346267367127373743ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_6 [(short)12] [(short)12] = ((signed char) ((signed char) min((var_15), (((/* implicit */long long int) -1737131895)))));
            var_18 &= ((max((var_4), (((/* implicit */unsigned int) ((short) var_16))))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-32744))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((unsigned long long int) arr_12 [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_0 - 1])) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                    var_20 *= ((/* implicit */signed char) var_0);
                    var_21 = (!(((/* implicit */_Bool) var_3)));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [16ULL] [7ULL]);
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_0] [(signed char)16]) << (((((/* implicit */int) (short)9964)) - (9964))))))))), (((((/* implicit */int) ((12100476706582177869ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7575)))))) | (((/* implicit */int) arr_17 [13]))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned int) max(((-(12100476706582177872ULL))), (((/* implicit */unsigned long long int) max((3886046516U), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_5 - 2] [i_5 - 2])))))));
                        var_25 = ((/* implicit */int) arr_7 [(short)3] [7ULL]);
                    }
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_26 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (-(arr_5 [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (9223372036854775807LL)))));
        arr_24 [(short)1] [6U] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)31)) == (((/* implicit */int) ((unsigned char) (-(7489266232969535583LL)))))));
    }
    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) var_15);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_27 [i_7 + 3])), (arr_29 [i_7 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (_Bool)1)))))) : (max((((/* implicit */long long int) arr_29 [i_7 + 3])), (arr_36 [i_7 + 3] [i_7 - 1] [i_7 + 3] [i_7 + 1] [i_8 - 1] [i_8 - 1])))));
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_28 [i_7 + 1] [i_9 + 1] [16]), (arr_28 [i_7 + 3] [i_9 + 2] [2LL])))) ? (((((/* implicit */_Bool) arr_31 [i_8 - 1] [(_Bool)1])) ? (((/* implicit */long long int) (-(var_12)))) : (max((((/* implicit */long long int) var_5)), (arr_36 [11ULL] [(_Bool)1] [i_8 - 1] [(_Bool)1] [i_9 + 1] [11LL]))))) : (((/* implicit */long long int) (((-(var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        var_31 ^= ((/* implicit */signed char) (~(min((arr_26 [i_7 + 2]), (arr_26 [i_7 + 2])))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)255)), (max((((/* implicit */int) var_7)), (((-1737131894) % (((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (signed char i_11 = 3; i_11 < 19; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                {
                    arr_45 [i_11] [2ULL] [i_11] = ((/* implicit */unsigned short) (short)0);
                    var_33 = 134217727ULL;
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_34 ^= ((/* implicit */int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_38 [i_13] [i_12])));
                        arr_48 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned short)58111))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)28)), ((unsigned short)0)))))) : (((/* implicit */int) max((arr_42 [i_14]), (arr_42 [i_13]))))));
                    }
                    for (long long int i_15 = 2; i_15 < 17; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_41 [i_11 + 1] [i_11])))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_40 [i_15 + 3]) | (arr_40 [i_16 - 1])))) ? (((unsigned int) arr_41 [(signed char)7] [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_40 [i_15 + 3]))))));
                            arr_54 [i_16 - 1] [(signed char)2] [i_11] [i_13] [i_11] [i_12] [14ULL] = ((/* implicit */long long int) max((((short) arr_53 [i_11 - 1] [i_11 - 1] [i_16 - 1] [i_15 - 1] [i_11 - 1])), (((/* implicit */short) ((unsigned char) (signed char)-95)))));
                            var_37 += ((/* implicit */signed char) ((((/* implicit */long long int) var_10)) + (max((arr_53 [i_11 - 3] [18] [i_13] [(unsigned char)10] [i_13]), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) (signed char)-94)))))))));
                            var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)22484)), (arr_52 [i_11 + 1] [i_11 + 1] [i_11])))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)39))))), (((unsigned long long int) 4235725496U))))));
                            var_39 = ((/* implicit */_Bool) 1300896842);
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_50 [i_11] [i_12]))))));
                        var_41 = ((/* implicit */unsigned int) max(((~(17616797769464814383ULL))), (((((/* implicit */_Bool) arr_52 [i_11 - 2] [i_11 - 2] [i_11])) ? (6453613735499276571ULL) : (((/* implicit */unsigned long long int) arr_52 [i_11 - 2] [(signed char)19] [i_11]))))));
                        var_42 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_46 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 3])), (arr_43 [i_11 + 1] [i_11 - 2] [i_12])))) ? (((((/* implicit */int) arr_46 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 3])) | (((/* implicit */int) arr_46 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 3])))) : ((-(((/* implicit */int) arr_46 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 3])))));
                    }
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        var_43 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_47 [i_11 + 1] [i_12] [i_12])))) % (((arr_47 [i_11 + 1] [(unsigned short)5] [(unsigned short)5]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_57 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_49 [i_13] [i_12] [i_13]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 0)) | (59241800U))))))) || (((11993130338210275044ULL) == (9288235760909260469ULL)))));
                        var_44 = ((/* implicit */signed char) 14114176274980578548ULL);
                    }
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_19 = 3; i_19 < 19; i_19 += 1) 
                        {
                            arr_62 [i_12] [i_13] [2ULL] [(signed char)4] [(unsigned short)16] [i_13] [i_11] = ((/* implicit */unsigned char) arr_59 [(signed char)9] [(signed char)9] [(signed char)9] [i_11] [(signed char)9]);
                            var_45 = ((/* implicit */long long int) min((((/* implicit */int) arr_56 [(signed char)14] [14ULL] [(unsigned char)18] [14ULL])), ((+(((((/* implicit */int) (short)2926)) >> (((((/* implicit */int) var_0)) - (32603)))))))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (short)16128))) + (min((arr_58 [i_11] [i_13]), (((/* implicit */unsigned long long int) (short)-16128))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 1; i_20 < 19; i_20 += 2) 
                        {
                            var_47 += ((/* implicit */unsigned short) ((signed char) ((unsigned char) arr_59 [14LL] [(_Bool)1] [8U] [i_13] [i_20 - 1])));
                            arr_65 [i_11] = ((/* implicit */unsigned char) arr_58 [i_11 + 1] [i_20 + 1]);
                            arr_66 [i_11] [0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_0))) ^ (((/* implicit */int) arr_43 [i_11] [i_11] [i_11]))));
                        }
                        var_48 ^= ((/* implicit */unsigned char) arr_40 [i_18]);
                    }
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
                    {
                        arr_70 [14ULL] [14ULL] [i_12] [i_21] &= ((((/* implicit */_Bool) arr_49 [(signed char)8] [i_12] [i_12])) ? (max((((/* implicit */unsigned long long int) (short)-2917)), (6453613735499276571ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_11] [i_13] [12ULL] [12ULL] [0] [i_21] [i_21])) ? (((/* implicit */int) arr_59 [i_11 - 2] [(unsigned short)18] [(unsigned char)0] [i_12] [i_12])) : (((/* implicit */int) var_5))))));
                        var_49 = ((/* implicit */int) ((short) ((18113078545617355759ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31744))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 2; i_22 < 18; i_22 += 2) 
                        {
                            var_50 = ((/* implicit */unsigned char) arr_44 [i_12] [i_13] [(short)0]);
                            var_51 = ((/* implicit */unsigned long long int) max(((signed char)-46), ((signed char)46)));
                            var_52 = max((((/* implicit */unsigned long long int) var_11)), (((max((3002072724554239463ULL), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)2937)), (11U)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) (+(var_10))))));
}
