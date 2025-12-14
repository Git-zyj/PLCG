/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105266
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((int) (signed char)19)) + (max((arr_2 [i_0] [i_0]), (((/* implicit */int) min((((/* implicit */short) (signed char)-16)), (var_8))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (arr_2 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)12366);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (short)30682)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1])))))));
                    arr_13 [1] [1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_0] [(short)11] [i_2] [i_1]), (arr_9 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(short)4] [i_2])) ? (((/* implicit */int) arr_0 [4ULL])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))) == (((/* implicit */int) (signed char)19))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7227046546097266705LL)) ? (((/* implicit */int) (short)-10709)) : (var_12)))))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [(short)14] [(short)14]);
                }
            } 
        } 
    }
    for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        arr_18 [i_3 - 3] = ((/* implicit */signed char) ((_Bool) ((max((arr_16 [i_3] [i_3]), (((/* implicit */int) arr_15 [i_3 - 3] [i_3])))) == (min((arr_16 [i_3] [(signed char)6]), (((/* implicit */int) (unsigned short)31744)))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_23 [(unsigned short)6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)112)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_15 [i_3 - 2] [i_3 - 3])))) : (min((((/* implicit */unsigned int) (short)0)), (4294967295U)))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) arr_21 [i_3 + 1] [i_3 - 3] [i_3 + 1]);
                arr_26 [7LL] [i_4] [i_5] = ((/* implicit */long long int) var_3);
                arr_27 [i_3] [(signed char)7] [i_5] [19] = ((/* implicit */_Bool) min((-1809528168), (max((arr_22 [i_5]), (arr_22 [i_3])))));
            }
            for (int i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                var_18 &= ((/* implicit */_Bool) var_3);
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((var_0), (((/* implicit */unsigned int) ((signed char) arr_16 [i_3 - 3] [i_3 - 3]))))))));
                var_20 = ((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [4U]);
                arr_31 [i_4] [i_3 - 2] = max((((/* implicit */long long int) max((((/* implicit */int) arr_21 [i_3 - 2] [i_3 - 3] [i_6 - 3])), ((~(((/* implicit */int) var_7))))))), ((+(((arr_17 [i_3]) / (((/* implicit */long long int) arr_29 [i_6] [i_4] [i_4] [(unsigned char)9])))))));
            }
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_34 [i_3 - 1] [i_7] = ((((/* implicit */_Bool) arr_29 [i_3 - 1] [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_16 [2U] [i_7])) == (var_6)))) : ((-(arr_22 [i_7]))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_45 [(unsigned char)16] [(_Bool)1] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3 - 3] [i_3 + 1])) >= (((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1]))));
                            var_21 = 1246578449;
                        }
                    } 
                } 
            } 
            arr_46 [10LL] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (2147483636) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) ((_Bool) arr_35 [i_3]))) : (((/* implicit */int) arr_37 [i_3 + 1] [i_3] [i_3 + 1])));
        }
        /* LoopSeq 4 */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            var_22 |= ((/* implicit */int) var_9);
            var_23 ^= ((/* implicit */short) min((((int) arr_19 [i_3 - 1] [i_3 - 3] [(signed char)0])), (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_44 [i_11] [i_11] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_53 [(unsigned char)11] = ((((((/* implicit */unsigned int) -472781457)) == (var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_3 - 1]))) : (min((((arr_29 [10U] [i_12] [i_12] [i_3]) ^ (var_0))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
            var_24 = ((/* implicit */short) arr_32 [i_3 + 1] [10]);
            var_25 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) arr_16 [i_3 - 3] [i_3])) : (3116107149U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-1), ((signed char)117))))))));
            arr_54 [10LL] [i_3] [i_12] = (+((~(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [18LL])) && (((/* implicit */_Bool) arr_15 [i_3] [(_Bool)1]))))))));
        }
        for (unsigned short i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            var_26 *= ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3] [(_Bool)1] [i_13 - 1] [(signed char)10])) ? (((/* implicit */int) arr_41 [i_3] [(_Bool)1] [(unsigned char)19])) : (((/* implicit */int) arr_21 [i_14] [i_13] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10));
                arr_61 [i_3] [(short)1] = ((/* implicit */int) arr_15 [i_3] [i_13]);
                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_13 - 1] [i_13 - 1]))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 1246578463)) : (arr_60 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3])));
            }
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (long long int i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        {
                            var_30 -= ((/* implicit */unsigned int) var_12);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */_Bool) arr_22 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 1] [i_13 + 1]))) : (arr_60 [i_3 - 3] [i_13 - 1] [i_17 - 1] [i_17 + 2])))));
                            arr_71 [(unsigned short)4] [i_15] [(unsigned char)8] [(short)13] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_69 [13ULL] [i_13]))));
                            arr_72 [(signed char)15] [i_15] = ((/* implicit */signed char) (_Bool)1);
                            arr_73 [i_3] [i_13] [(_Bool)1] [i_16] [i_13] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_55 [i_16] [11ULL]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_32 ^= arr_50 [(unsigned short)0] [i_15];
                    arr_76 [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_3 + 1] [i_13 + 1]))));
                }
                /* LoopSeq 1 */
                for (int i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    var_33 = ((/* implicit */short) (signed char)-37);
                    arr_80 [i_3] [i_13] [i_13] [(signed char)1] = 0LL;
                    var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((arr_33 [i_3] [(short)7]) ^ (((/* implicit */int) (unsigned char)249))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    for (int i_21 = 1; i_21 < 19; i_21 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_13 - 1] [i_3 + 1])) ? (arr_60 [i_13] [12ULL] [i_13] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_21 + 1] [i_13 - 1] [i_3 - 2])))));
                            arr_89 [i_3] [i_13 - 1] [i_15] [i_20] [i_21] = arr_17 [(short)9];
                        }
                    } 
                } 
                arr_90 [i_3] [i_3] [i_3] [i_3 - 2] &= ((/* implicit */signed char) arr_25 [i_15]);
            }
            var_36 = ((/* implicit */int) arr_67 [i_3] [i_3 - 1] [i_3] [14] [i_13 + 1]);
            arr_91 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [(signed char)14] [i_13 - 1] [13LL] [i_13] [i_13]))))) ? (((arr_48 [i_3] [i_13 + 1] [(unsigned char)4]) ? (((/* implicit */int) arr_48 [i_13] [i_13 - 1] [14ULL])) : (((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) min((((/* implicit */short) arr_48 [18LL] [i_13 + 1] [i_13 + 1])), ((short)-3125))))));
            arr_92 [i_13] [i_3] = (signed char)31;
        }
        /* vectorizable */
        for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            var_37 ^= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_69 [i_3 + 1] [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 20; i_23 += 2) 
            {
                for (unsigned short i_24 = 1; i_24 < 16; i_24 += 3) 
                {
                    {
                        var_38 ^= ((/* implicit */unsigned char) arr_85 [i_3 - 1] [i_3 - 2] [i_24 + 2] [i_3 - 1] [i_24]);
                        var_39 = ((/* implicit */unsigned char) (short)-24236);
                    }
                } 
            } 
            arr_100 [i_3] [i_22] = ((/* implicit */_Bool) arr_43 [i_3 - 3] [i_22] [(unsigned char)8] [i_3 - 1] [i_22]);
        }
        arr_101 [(unsigned short)15] = ((/* implicit */int) ((((((((/* implicit */_Bool) 981412013)) ? (((/* implicit */long long int) -1)) : (var_11))) >= (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) arr_81 [i_3 - 1] [i_3 - 1] [(_Bool)1] [i_3 - 3] [i_3])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_3] [i_3])) ? (((/* implicit */int) arr_52 [i_3 + 1])) : (((/* implicit */int) arr_79 [(signed char)11]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_97 [i_3]))))) : ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))));
    }
    var_40 = ((/* implicit */int) (+(((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_10))))));
    /* LoopNest 2 */
    for (signed char i_25 = 2; i_25 < 21; i_25 += 2) 
    {
        for (int i_26 = 1; i_26 < 21; i_26 += 2) 
        {
            {
                var_41 ^= ((/* implicit */int) 11104906649420262412ULL);
                var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_102 [(_Bool)1] [(_Bool)1]))));
            }
        } 
    } 
}
