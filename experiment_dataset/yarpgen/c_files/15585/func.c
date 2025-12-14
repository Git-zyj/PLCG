/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15585
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
    var_16 = ((/* implicit */unsigned char) (+((+(-4311040811284038718LL)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) arr_0 [12ULL])), (arr_1 [i_0] [i_0]))))) ? (-9177047155065846740LL) : (((3590323691457326494LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)60430))))), (max(((unsigned char)62), (((/* implicit */unsigned char) arr_0 [i_1])))))))) : (((((/* implicit */_Bool) (unsigned short)9484)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) : (936069334U))))))));
        var_20 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60431))) ^ (16748804522291094205ULL)))) ? (((arr_4 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) max((arr_2 [i_1] [3]), (arr_2 [i_1] [16])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9177047155065846740LL)))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [5LL] [5LL])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((unsigned char) -1222480099753155411LL))))), (max((((/* implicit */int) arr_8 [i_2])), (arr_2 [i_2] [i_2])))));
        var_23 = ((/* implicit */unsigned int) ((((arr_7 [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))) == (((/* implicit */int) arr_7 [i_2]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((((/* implicit */_Bool) arr_17 [i_4] [i_5 - 1] [i_5] [i_5])) ? ((~(-1222480099753155411LL))) : (((/* implicit */long long int) arr_10 [4U] [i_4] [i_5])));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) arr_19 [i_2] [i_3] [i_4] [i_3] [i_2]);
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [(unsigned char)7] [i_3] [(_Bool)1])) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))) * (((/* implicit */unsigned long long int) (-(-1222480099753155411LL))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_6] [i_3] [i_2]))))) ? (arr_5 [i_4]) : (((/* implicit */unsigned int) -197768735))));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((arr_20 [i_5 - 1] [i_5 - 1] [i_4 + 1] [i_2] [i_7] [i_2]) != (arr_20 [i_5 - 1] [i_3] [i_4 + 1] [i_7] [i_3] [i_4]))))));
                            var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1222480099753155434LL)) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((unsigned int) 12104851553261377293ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)88))))));
                        }
                    }
                } 
            } 
            arr_22 [i_2] &= arr_13 [i_2];
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_10] [i_9 + 1] [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1222480099753155390LL)))) : (((/* implicit */int) ((signed char) arr_26 [i_2] [i_3] [i_3] [i_9 + 1] [i_10])))));
                            var_32 = (-(((((/* implicit */_Bool) arr_30 [i_2] [i_3] [i_8] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_3] [i_8] [i_9] [i_10] [i_10]))) : (arr_18 [i_10] [i_9] [i_8] [i_8] [i_8] [i_3] [i_2]))));
                        }
                    } 
                } 
            } 
            arr_31 [i_2] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)1023))))) < ((((_Bool)1) ? (((/* implicit */unsigned long long int) -197768731)) : (5699367188281448235ULL))));
        }
        for (long long int i_11 = 4; i_11 < 13; i_11 += 3) 
        {
            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (short)0)), (8117257591087322534LL)))))) ? ((-((+(753765875U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((9177047155065846743LL) > (arr_15 [i_11] [i_11 - 2] [i_11 + 1] [i_11])))))))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)64517)))))));
            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)60419)))))))));
            var_36 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_2] [(unsigned char)15] [i_11 + 3])), (arr_32 [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_11] [i_11] [i_2] [i_11])) - (((/* implicit */int) (unsigned short)62209))))) : (arr_18 [1LL] [i_11 - 3] [i_2] [i_2] [i_11 - 3] [i_2] [i_2])))));
        }
        var_37 = ((/* implicit */short) arr_15 [i_2] [1LL] [i_2] [i_2]);
    }
    for (int i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        var_38 = ((/* implicit */unsigned char) ((((unsigned int) 1395787054U)) / (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_14 [i_12] [i_12] [i_12])) ^ (((/* implicit */int) (unsigned short)4623)))))))));
        /* LoopSeq 1 */
        for (long long int i_13 = 3; i_13 < 8; i_13 += 3) 
        {
            var_39 = ((/* implicit */unsigned short) 1395787037U);
            var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_19 [i_13] [i_13] [i_13 - 2] [i_13 + 3] [i_13 - 2]), (((/* implicit */unsigned short) arr_11 [i_13 - 1] [i_13 + 1] [i_13 + 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_13 - 2] [i_13 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_12] [(unsigned char)12])) || (((/* implicit */_Bool) arr_4 [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(_Bool)1] [(_Bool)1] [i_13] [i_13]))))))) : (((/* implicit */int) ((_Bool) (((_Bool)1) || ((_Bool)1)))))));
        }
        var_41 = arr_24 [i_12] [i_12] [i_12] [i_12];
    }
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            {
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_14])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(unsigned char)17])) ? (arr_40 [i_14] [i_15]) : (arr_40 [i_14] [i_15])))) ? ((~(arr_40 [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14])))));
                var_43 = ((/* implicit */int) (_Bool)1);
                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) min((arr_44 [i_14]), (arr_44 [i_15]))))));
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            {
                                var_45 = ((((/* implicit */int) ((((/* implicit */_Bool) -7086809609225351894LL)) || (((/* implicit */_Bool) (unsigned short)9650))))) >> (((((((/* implicit */_Bool) 3663632684U)) ? (max((((/* implicit */unsigned int) 1820550041)), (1395787037U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))))) - (1820550021U))));
                                var_46 = ((/* implicit */unsigned char) arr_48 [(short)13] [(short)13] [i_16]);
                                var_47 &= ((/* implicit */long long int) (_Bool)1);
                                var_48 = ((/* implicit */unsigned short) (+(arr_51 [i_17] [i_15])));
                                var_49 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)124)))) || (((/* implicit */_Bool) (~(arr_48 [i_14] [i_15] [i_16])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (((unsigned long long int) ((arr_50 [i_14] [i_14] [i_14] [i_14]) == (((/* implicit */unsigned long long int) arr_48 [i_15] [i_15] [i_16])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_46 [i_14] [i_19] [(unsigned char)15])), (arr_50 [i_20] [(short)7] [i_16] [i_14]))))))));
                                var_51 ^= ((/* implicit */unsigned short) min((arr_47 [i_20]), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)60912)) > (((/* implicit */int) (_Bool)1))))))))));
                                var_52 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 0LL)) ? ((+(((/* implicit */int) (unsigned short)55570)))) : (((/* implicit */int) (unsigned char)52))))));
                }
                for (int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max((8437957282258987389ULL), (((/* implicit */unsigned long long int) arr_58 [i_14] [i_15] [i_15] [i_21]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_14] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) arr_53 [i_14] [i_15] [i_21]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_63 [i_22] [(short)18] [(short)18] [i_14] = ((/* implicit */unsigned int) arr_62 [i_14] [(unsigned char)7] [i_22]);
                        var_55 = ((/* implicit */unsigned long long int) -1);
                        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_15] [(short)14])) ? ((((_Bool)1) ? (arr_47 [9LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7648))))) : (((/* implicit */long long int) ((int) arr_42 [i_14]))))))));
                        var_57 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_14] [(unsigned short)3] [i_14] [i_14])) == (((/* implicit */int) arr_49 [i_14] [i_15] [i_21] [i_22]))));
                    }
                    arr_64 [(unsigned short)2] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_55 [i_14] [i_14] [i_14] [i_15] [i_21])))) ? (((1745907824664621817LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60902))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_57 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned char) arr_43 [i_14]))))))))));
                    var_58 = ((/* implicit */long long int) ((unsigned int) arr_46 [i_21] [i_15] [i_14]));
                    var_59 = ((/* implicit */unsigned short) 4294967272U);
                }
                for (int i_23 = 0; i_23 < 19; i_23 += 2) /* same iter space */
                {
                    var_60 ^= (-(((/* implicit */int) arr_62 [i_14] [i_15] [i_23])));
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 19; i_25 += 1) 
                        {
                            {
                                var_61 = ((/* implicit */unsigned int) ((unsigned long long int) max((1940586421U), (((/* implicit */unsigned int) (signed char)-15)))));
                                var_62 = arr_61 [i_25] [i_14];
                            }
                        } 
                    } 
                    var_63 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_55 [i_23] [i_23] [i_23] [i_23] [i_23])), (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) arr_59 [i_15] [i_15] [i_15] [i_14])) : (((/* implicit */int) (short)24250))))))));
                    arr_74 [i_23] [i_15] [i_14] &= ((/* implicit */long long int) (+(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_58 [(_Bool)1] [i_15] [i_15] [i_15])))) * (min((arr_51 [i_14] [i_23]), (((/* implicit */int) (short)-21920))))))));
                }
                var_64 = ((/* implicit */unsigned short) arr_65 [i_14] [(_Bool)1]);
            }
        } 
    } 
}
