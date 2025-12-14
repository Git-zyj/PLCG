/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185624
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(arr_0 [i_0])));
        var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_20 = (+(arr_0 [i_0]));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_21 |= ((/* implicit */unsigned long long int) 733927470191802961LL);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1])))) : (((/* implicit */unsigned long long int) (+(7171818256582982709LL))))));
            var_23 = ((((/* implicit */_Bool) min(((unsigned short)65213), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))))) ? ((-(min((arr_7 [i_1 - 1] [(unsigned char)0]), (arr_7 [0ULL] [(unsigned short)1]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7056))) : (arr_8 [i_1] [i_1 + 1]))))));
            var_24 = min((((/* implicit */unsigned long long int) -1176579131)), (12059107291895697748ULL));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_11 [i_1] [i_1] [1LL] = ((((((/* implicit */_Bool) min((0ULL), (var_5)))) ? (6387636781813853868ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58480))) - (arr_3 [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) -9223372036854775803LL)) ? (16383ULL) : (9223372036854775808ULL))) - (16354ULL))));
                var_25 = 5548353144566739966ULL;
                var_26 = arr_8 [i_1] [i_3];
                arr_12 [20ULL] [20ULL] [i_2] [(unsigned short)18] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (18446744073709535232ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)7056)))) : (min((arr_7 [i_1 - 2] [i_3]), (arr_7 [i_1 - 2] [i_1 - 3])))));
                /* LoopSeq 4 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned char) (-(0)));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_10 [i_2] [i_1] [(_Bool)1]), (arr_10 [i_2] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (arr_13 [17LL] [i_2 + 2]))))) : (max((max((arr_4 [i_2]), (13913323833728957839ULL))), ((~(arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((arr_8 [i_1] [i_2]) ^ (arr_4 [i_2]))) : (min((arr_8 [i_1] [i_1]), (16383ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(1394744412)))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_1] [i_2 + 1] [i_5 + 2])), (((arr_7 [i_1 + 1] [i_3]) + (arr_14 [i_4] [i_1] [i_1] [i_1])))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)58480))))))), (((/* implicit */int) (unsigned short)7056)))))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        arr_24 [18ULL] [(_Bool)1] [i_3] [i_1] [12ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_1])))) || (((/* implicit */_Bool) (unsigned char)104))));
                        var_30 += ((/* implicit */unsigned short) (+(((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) * ((-(arr_10 [4LL] [2LL] [2LL])))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), ((+(((/* implicit */int) (unsigned short)7056))))));
                        var_32 = ((/* implicit */unsigned char) arr_19 [i_2]);
                    }
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_33 ^= (~(min((((/* implicit */unsigned long long int) var_4)), (12059107291895697748ULL))));
                        var_34 = ((/* implicit */long long int) arr_23 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18] [i_6] [i_6] [i_6]);
                        var_35 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_19 [i_1 - 2])) ? (((/* implicit */int) arr_30 [i_1] [i_2] [20] [i_1])) : (((((/* implicit */_Bool) 16383ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
                    }
                    var_36 ^= ((/* implicit */_Bool) min((arr_7 [i_2] [i_2 - 2]), (arr_8 [4] [4])));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_10 [i_2] [i_1] [i_1])))) % (((((/* implicit */unsigned long long int) ((long long int) (unsigned char)255))) * (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_38 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 - 1] [i_1 - 1]))) == (arr_6 [i_1] [i_1 + 1]))))));
                    var_39 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 349553837)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_10] [i_1 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1 - 2] [i_2 - 2] [i_3] [i_3] [i_2 - 2] [i_10]))) & (max((arr_20 [i_10] [i_10] [i_3] [i_10]), (((/* implicit */long long int) arr_15 [i_2 + 1]))))))));
                    var_40 = ((/* implicit */unsigned char) (-(max(((-(arr_28 [i_1] [i_1 - 1] [i_2 + 2] [i_3] [9ULL] [i_1]))), (((/* implicit */unsigned long long int) max((-4515113735283922648LL), (arr_20 [i_1] [i_1] [i_3] [10ULL]))))))));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    var_41 = ((((/* implicit */_Bool) arr_32 [i_1 - 3] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58480))) : ((~(arr_3 [i_1] [i_1]))));
                    var_42 = ((/* implicit */unsigned int) (~(arr_34 [i_1 + 1] [i_2 - 1] [i_3] [i_11])));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_25 [i_1 - 3] [i_2 + 3]), (arr_25 [i_1 - 1] [i_2 - 2]))))));
                var_44 += ((/* implicit */unsigned long long int) arr_33 [i_2] [i_2] [i_2] [i_2]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_1] [i_2] [i_2] [i_12] [i_13]))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (arr_13 [i_1 - 3] [i_2 + 1])));
                    var_46 = ((/* implicit */_Bool) (~(arr_9 [3ULL] [i_1] [i_2 - 1] [i_2])));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    arr_43 [i_12] [i_1] [i_14] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_14]);
                    var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (((+(arr_10 [2LL] [i_14] [i_12]))) <= ((-(arr_6 [i_14] [i_14]))))))));
                }
                /* vectorizable */
                for (unsigned short i_15 = 3; i_15 < 20; i_15 += 4) 
                {
                    var_48 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_45 [i_15] [i_2 + 2] [i_2 + 2] [i_1]))) << ((((+(arr_26 [i_1] [(unsigned short)14] [i_2] [i_1] [i_15]))) - (1038930459U)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_45 [i_15] [i_2 + 2] [i_2 + 2] [i_1]))) << ((((((+(arr_26 [i_1] [(unsigned short)14] [i_2] [i_1] [i_15]))) - (1038930459U))) - (3012245481U))))));
                    var_49 = ((/* implicit */long long int) var_17);
                    var_50 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_15 - 1] [i_15 - 1] [i_15 - 3] [i_1 - 1] [i_2 + 3] [i_1 - 1])) * (((/* implicit */int) arr_23 [i_15 - 2] [i_15] [i_15 - 3] [i_1 - 1] [i_2 + 2] [i_1 - 1]))));
                    arr_46 [i_1] [i_2] [i_1] [i_15] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_44 [13ULL] [13ULL]));
                    var_51 = ((/* implicit */unsigned int) (~(arr_21 [i_15 - 3] [i_15 - 3] [(_Bool)1] [i_1] [i_15] [i_15] [i_15 - 3])));
                }
                arr_47 [i_1] [i_1 - 2] [i_1 - 2] [16LL] = ((unsigned int) arr_30 [i_2 - 1] [i_2 - 2] [i_2] [(unsigned short)19]);
                var_52 ^= ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1 - 3] [i_1]))) + (1203171201507392177LL))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7055)) ? (((/* implicit */int) arr_45 [i_2] [i_1 - 1] [1] [i_2 + 2])) : (((/* implicit */int) arr_37 [i_2 - 2] [i_1 + 1] [i_1])))))));
            }
            var_53 = ((/* implicit */long long int) max((-2113236427), ((+(((((/* implicit */int) arr_37 [i_2 - 1] [i_1] [i_1])) ^ ((-2147483647 - 1))))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                arr_53 [i_1] = ((/* implicit */unsigned char) ((long long int) (~(arr_13 [i_1 - 2] [i_1 - 1]))));
                var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_17] [i_1]) + (arr_5 [i_1] [i_1])))) ? (max((6701172897699325777LL), (((/* implicit */long long int) 3933567767U)))) : (((arr_5 [i_17] [i_1]) / (arr_5 [12LL] [i_1])))));
            }
            var_55 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46043))))) ? (((/* implicit */int) (unsigned short)9046)) : (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 1]))))))), (arr_9 [i_1] [i_1] [i_16] [i_1])));
            arr_54 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_1] [i_16])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((arr_16 [i_1]) % (((/* implicit */unsigned long long int) -349553837))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            var_56 = ((/* implicit */long long int) ((_Bool) ((min((4499662228721639660LL), (((/* implicit */long long int) var_0)))) % (((/* implicit */long long int) (~(var_4)))))));
            var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [(_Bool)1] [i_18]) ^ (arr_7 [i_1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58480)) | (((/* implicit */int) (unsigned short)58479))))) : ((((~(arr_34 [i_18] [i_1] [13LL] [13LL]))) | (((/* implicit */unsigned long long int) arr_41 [i_18] [i_18] [(_Bool)1] [0LL] [i_1 - 1] [i_1 - 2]))))));
        }
        var_58 = ((/* implicit */unsigned short) (((~(arr_35 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned long long int) -1394744413))));
    }
    /* vectorizable */
    for (unsigned char i_19 = 1; i_19 < 15; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
            {
                {
                    var_59 ^= ((/* implicit */_Bool) arr_48 [i_21]);
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_60 = ((arr_10 [i_19] [i_21] [(_Bool)0]) & (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_19] [i_20] [i_21] [(unsigned char)8]))));
                        var_61 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 814221396773411336LL)) ? (((/* implicit */int) (unsigned char)255)) : (349553837)));
                        var_62 = ((/* implicit */unsigned long long int) min((var_62), (arr_7 [i_21] [i_21])));
                    }
                    for (unsigned char i_23 = 2; i_23 < 14; i_23 += 2) 
                    {
                        var_63 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_64 = ((/* implicit */_Bool) (unsigned short)58480);
                    }
                    arr_73 [i_19] [i_19] [i_21] [i_19] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)44022)))) >= ((-(arr_50 [i_19 - 1])))));
                    var_65 &= ((/* implicit */unsigned int) ((arr_6 [i_21] [i_19 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_19] [i_19 + 1])))));
                }
            } 
        } 
        arr_74 [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_60 [i_19])))) ? (((((/* implicit */_Bool) (unsigned short)58480)) ? (((/* implicit */unsigned long long int) 349553837)) : (arr_16 [18ULL]))) : (arr_44 [i_19] [i_19])));
        /* LoopNest 3 */
        for (long long int i_24 = 0; i_24 < 17; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 15; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 4; i_26 < 15; i_26 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 3) 
                        {
                            var_66 = ((/* implicit */unsigned long long int) 8700329008864328624LL);
                            var_67 = ((/* implicit */unsigned short) (+(4294967295U)));
                            arr_86 [i_25] [i_26 - 4] [i_19 + 2] [i_25] [i_24] [i_19 + 2] = 12269038913833641726ULL;
                            var_68 &= ((/* implicit */int) ((((/* implicit */_Bool) 1000007222)) ? (18350977756554710835ULL) : (((/* implicit */unsigned long long int) arr_52 [i_19 + 2] [i_19 - 1] [i_19 + 2] [i_19 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_69 &= ((/* implicit */long long int) (_Bool)1);
                            var_70 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((-7525662520979155081LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_24] [i_24])))))) * (((/* implicit */int) (_Bool)0))));
                            var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_39 [i_24] [i_24] [i_28] [i_24])) == (0ULL)));
                            arr_90 [i_25 + 1] [i_28] [11ULL] [(unsigned char)13] [i_25 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 12269038913833641729ULL)) ? (8700329008864328624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57223))))) & (arr_6 [i_28] [i_28])));
                        }
                    }
                } 
            } 
        } 
        var_72 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned char) arr_50 [17U])))));
    }
    var_73 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_17)))) ? (max((var_5), (((/* implicit */unsigned long long int) var_13)))) : (((((/* implicit */_Bool) var_17)) ? (9082049982659623844ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) var_3))));
}
