/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138698
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 1903821694);
            arr_7 [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127)))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7162590258746277114ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1))))))))) ? (arr_0 [i_1 + 1] [i_1 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227)))))));
        }
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((((unsigned int) 1473134362U)) - (((arr_2 [i_0]) % (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2]);
        arr_13 [(short)12] &= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_12 [i_2])) ? (2984083718U) : (arr_11 [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) 2991545330U);
                    var_17 = 1315639091039415210ULL;
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) (-(2709811664494266380ULL))));
                    var_19 = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_3]));
                    arr_25 [i_3] [i_4] [i_3] = arr_16 [i_3] [i_4];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 6; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_6 - 2] [i_6 - 1])) ? (((/* implicit */unsigned long long int) 2439292246U)) : (((unsigned long long int) arr_16 [i_3] [i_6]))));
            arr_29 [i_3] = ((/* implicit */_Bool) ((unsigned short) 10179821417975879164ULL));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), ((~(((((/* implicit */_Bool) 1310883578U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (11327226729033629313ULL)))))));
                        var_22 = ((/* implicit */unsigned int) 7807811957663844847ULL);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 7; i_9 += 3) 
                        {
                            arr_39 [0ULL] [(unsigned char)2] [0ULL] [i_8 - 1] [i_3] [(unsigned short)8] [i_8] = ((/* implicit */short) arr_31 [4U] [i_6] [7ULL]);
                            var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_30 [i_3] [0ULL] [i_3] [i_9])) ? (((/* implicit */int) arr_18 [i_9] [i_6] [i_3])) : (arr_26 [i_3] [i_6])))));
                            arr_40 [i_3] [i_6 + 3] [i_7] [i_3] [i_9 + 1] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned char)251))) << (((((arr_12 [i_7]) ^ (((/* implicit */int) arr_9 [i_3] [i_3])))) - (1429452299)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned char)251))) << (((((((arr_12 [i_7]) ^ (((/* implicit */int) arr_9 [i_3] [i_3])))) - (1429452299))) - (5893))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((signed char) (unsigned short)65528);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_6])))))));
                            arr_43 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_10])) && (((/* implicit */_Bool) arr_41 [i_10] [i_8] [i_7] [i_6] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_31 [i_3] [3LL] [i_3])) : (-441521420))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((unsigned int) (unsigned short)65519)) >= (((/* implicit */unsigned int) arr_12 [i_6 + 2])))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 3; i_11 < 6; i_11 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) ((arr_36 [(unsigned short)5] [i_11 - 2] [i_3] [i_11] [i_11 - 3]) | (arr_21 [i_11 + 4] [i_11 + 2])));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-20277)) % (((/* implicit */int) (unsigned char)15))));
            arr_47 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 157222671U)) ? (((/* implicit */unsigned long long int) -690370452)) : (1682339199765161791ULL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 3) 
            {
                var_29 = ((/* implicit */signed char) arr_31 [i_11 + 3] [i_11] [i_12]);
                var_30 ^= ((/* implicit */long long int) (+(arr_17 [8U] [8U])));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    arr_52 [i_12] [i_11 + 2] [i_3] [i_13] = ((/* implicit */short) ((arr_15 [i_11 + 4]) % (arr_15 [i_11 + 4])));
                    var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 2709811664494266376ULL))) ? (10638932116045706769ULL) : (((/* implicit */unsigned long long int) 502198021))));
                    var_32 = arr_2 [i_13];
                }
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) arr_31 [i_3] [(signed char)1] [i_12]);
                        arr_58 [i_3] [i_15] [(_Bool)1] [i_12 - 1] [i_11 - 2] [i_11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2909763481U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_3] [i_11 - 2]))));
                    }
                    var_34 = arr_9 [i_3] [i_11];
                }
                for (unsigned int i_16 = 1; i_16 < 8; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_17 = 1; i_17 < 9; i_17 += 4) 
                    {
                        arr_63 [i_17] [i_3] [i_11] [i_3] [i_3] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_34 [i_11 + 3] [i_3])))));
                        var_35 ^= ((/* implicit */unsigned long long int) (unsigned short)4080);
                    }
                    arr_64 [i_11] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */int) ((((arr_38 [i_3] [i_3] [i_11 + 4] [i_11 - 3] [i_12] [i_3] [i_16]) - (((/* implicit */unsigned long long int) arr_36 [3ULL] [i_11 + 3] [i_3] [i_11] [i_11])))) >> (((((/* implicit */int) arr_9 [i_3] [i_12 + 2])) - (56784)))))) : (((/* implicit */int) ((((arr_38 [i_3] [i_3] [i_11 + 4] [i_11 - 3] [i_12] [i_3] [i_16]) - (((/* implicit */unsigned long long int) arr_36 [3ULL] [i_11 + 3] [i_3] [i_11] [i_11])))) >> (((((((/* implicit */int) arr_9 [i_3] [i_12 + 2])) - (56784))) + (14544))))));
                }
            }
            for (signed char i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                var_36 ^= ((/* implicit */long long int) ((unsigned long long int) 13224197856119091380ULL));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    var_37 -= ((/* implicit */long long int) arr_61 [i_19]);
                    var_38 = ((signed char) (signed char)6);
                    arr_71 [i_18 + 1] [i_11] [i_3] [i_11] [i_11] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_50 [i_3] [i_19] [i_19] [i_18] [i_11] [i_3]))))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_19] [i_18 + 1] [i_11 + 4])) | (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_3]))))))));
                }
            }
        }
    }
    var_40 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_20 = 4; i_20 < 19; i_20 += 3) 
    {
        var_41 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)20272)), ((unsigned short)12361)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12360)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) arr_5 [(signed char)4] [(signed char)4]))))) : (4294967292U)))) ? (max((arr_1 [i_20]), (((/* implicit */unsigned long long int) (signed char)-7)))) : (((/* implicit */unsigned long long int) max((arr_0 [16ULL] [i_20]), (arr_4 [i_20 - 4] [i_20 - 4]))))));
        var_42 = (i_20 % 2 == zero) ? (((((unsigned int) arr_72 [i_20 - 4])) << (((((arr_3 [i_20]) ? (arr_1 [i_20 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_20]))))) - (10084954127349119172ULL))))) : (((((unsigned int) arr_72 [i_20 - 4])) << (((((((arr_3 [i_20]) ? (arr_1 [i_20 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_20]))))) - (10084954127349119172ULL))) - (8361789946360432428ULL)))));
        arr_74 [i_20] = ((/* implicit */unsigned int) arr_5 [i_20] [i_20]);
    }
    var_43 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) 
        {
            for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_76 [i_21])))))) + (((((/* implicit */_Bool) arr_85 [i_21] [i_22] [i_23])) ? (arr_77 [i_21] [i_21] [i_21]) : (arr_85 [i_21] [i_22] [i_24])))));
                        arr_86 [i_21] [20] [(unsigned char)1] [8] [i_21] [(unsigned char)1] = ((/* implicit */unsigned char) arr_82 [i_21] [i_22] [i_23] [(signed char)22]);
                        var_45 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_85 [i_22] [i_23] [i_24])) && (((/* implicit */_Bool) arr_85 [i_21] [i_22] [i_23]))))) >= (((/* implicit */int) (short)20266))));
                        arr_87 [i_21] [7LL] [i_21] [i_21] = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) arr_12 [i_23]))) && (((_Bool) arr_77 [i_21] [i_22] [i_23])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-70)) / (((/* implicit */int) (unsigned char)150))))))) : (((unsigned long long int) arr_85 [i_24] [i_23] [i_21]))));
                        var_46 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2984083713U)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_25 = 4; i_25 < 22; i_25 += 3) 
        {
            for (unsigned char i_26 = 1; i_26 < 21; i_26 += 4) 
            {
                {
                    var_47 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)65507))))));
                    /* LoopSeq 3 */
                    for (signed char i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 4294967288U)))) ? (((unsigned long long int) (short)-8494)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_25 - 2] [i_27]))))) << (((/* implicit */int) arr_88 [i_25 - 1]))));
                        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */long long int) (((((~(((/* implicit */int) arr_79 [9U])))) + (2147483647))) >> (((/* implicit */int) arr_88 [(unsigned short)10]))))) < (((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_21]))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) var_7)) ? (288230376151711744LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12346))))))))))));
                    }
                    for (unsigned char i_28 = 0; i_28 < 24; i_28 += 3) 
                    {
                        arr_99 [i_26] [i_26 + 2] [i_25 - 4] [i_26] = ((/* implicit */unsigned char) arr_98 [0U] [10U] [i_26 + 2] [i_25] [i_25 - 2] [i_25]);
                        arr_100 [i_21] [i_26] [i_26] [i_28] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-19325))) | (7U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [(signed char)23]) <= (((/* implicit */int) arr_10 [i_25 - 3] [i_26 + 2]))))))));
                        arr_101 [i_26] [i_26] = ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
                    }
                    for (unsigned int i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        var_50 ^= ((((/* implicit */unsigned long long int) arr_94 [(short)18] [i_25 - 4] [(short)18])) - (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_85 [i_29] [i_26] [i_25])) && (((/* implicit */_Bool) arr_79 [i_21])))))) : (max((arr_85 [i_21] [i_21] [i_21]), (((/* implicit */unsigned long long int) arr_76 [i_29])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_30 = 3; i_30 < 23; i_30 += 3) 
                        {
                            arr_107 [i_26] [i_26] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_79 [i_21])) != (((/* implicit */int) (signed char)125)))))) - (arr_92 [i_26] [i_21] [i_25 - 3])));
                            var_51 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_52 ^= ((/* implicit */short) ((arr_98 [i_21] [i_21] [i_25] [i_21] [i_26] [i_29]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_106 [i_25 - 2] [i_26] [22U])) ? ((-(((/* implicit */int) (short)-8499)))) : ((-2147483647 - 1))))) : (((((/* implicit */_Bool) (unsigned char)150)) ? (arr_11 [i_25 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_78 [(unsigned char)12] [(short)20] [i_29]))))))));
                    }
                }
            } 
        } 
        var_53 &= ((/* implicit */signed char) 1386512184403289479ULL);
    }
}
