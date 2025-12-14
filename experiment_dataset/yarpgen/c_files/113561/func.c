/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113561
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
    var_18 = ((/* implicit */signed char) ((unsigned long long int) var_0));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1942271845866344847LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)65520))));
        var_20 -= ((/* implicit */int) (-(arr_1 [i_0])));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26600)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned short)65520))));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                {
                    var_22 |= ((/* implicit */unsigned long long int) (unsigned short)56912);
                    arr_12 [i_3] [i_3] [i_3] [i_3 + 1] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [2U]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)5745)) ? (((/* implicit */int) var_14)) : (var_17))), (var_8))))));
                    var_23 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [(_Bool)0] [i_2] [(_Bool)0])), (((((/* implicit */_Bool) 4840581417967807092ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) : (arr_4 [i_3 - 3] [i_1 + 3])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] [i_1] &= ((/* implicit */long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)0))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_24 [i_1] [(unsigned short)6] [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1214970364)) ? (((/* implicit */int) arr_21 [i_4])) : (var_1)))))), ((+(7649957449025301530ULL)))));
                            arr_25 [i_7] [i_6] [i_7] [i_4] [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_14 [i_4 - 1] [i_5] [i_6])))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)110))))) ? (((((/* implicit */_Bool) 1489886495)) ? ((+(var_7))) : (arr_5 [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                            var_24 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-26600), (((/* implicit */short) min(((signed char)9), (((/* implicit */signed char) (_Bool)1))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_25 += ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_8 + 3] [i_8 - 1] [i_1 + 3])) | (((/* implicit */int) arr_19 [i_8 + 3] [i_8 - 2] [i_1 - 2])))) == (((/* implicit */int) (unsigned short)65515))));
            arr_28 [i_1] [i_1] = ((/* implicit */int) var_10);
            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((arr_22 [i_1] [i_1 - 1] [(short)14] [i_1] [i_8] [i_1 - 1] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_8]))))))) ? (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [(signed char)15] [i_1]))) : (arr_16 [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_1]))))))) : (((/* implicit */long long int) min(((+(((/* implicit */int) (short)-9008)))), (((int) (unsigned short)45517)))))));
        }
        for (short i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            var_27 *= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 578190693U)) ? (arr_14 [i_1] [i_9 + 1] [i_1]) : (((/* implicit */unsigned long long int) 578190709U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_9] [i_9 - 2])), (var_4)))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (10796786624684250085ULL))))) : (min((min((30786325577728ULL), (((/* implicit */unsigned long long int) (short)31162)))), (((1091245638345703984ULL) >> (((/* implicit */int) arr_8 [i_1] [(unsigned char)12] [i_9])))))));
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (min((0ULL), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1])))))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3716776607U))))));
                            var_29 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)42))));
                            var_30 += (-(((/* implicit */int) var_16)));
                            var_31 ^= ((/* implicit */short) arr_27 [(short)1] [i_9 - 1] [i_10]);
                        }
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_32 += ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_5 [i_1 - 2])) % (min((arr_14 [i_9 - 2] [i_9 - 2] [i_13]), (((/* implicit */unsigned long long int) (signed char)121))))))));
                            var_33 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_10 - 1] [i_10 - 1] [i_13])) <= (((/* implicit */int) arr_18 [i_1] [i_9] [i_10 + 1] [i_11] [i_11] [i_13])))))));
                            arr_40 [8U] [15U] [i_13] |= ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_21 [8]))))), (((((/* implicit */_Bool) 10796786624684250085ULL)) ? (4123168604160LL) : (-1LL)))));
                        }
                        var_34 = ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 + 1]))) : (2212872919008608816LL))) % (min((((/* implicit */long long int) (_Bool)1)), (-2131181708947366071LL))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((/* implicit */_Bool) 4611684918915760128LL)) ? (min((((/* implicit */unsigned long long int) 288089638663356416LL)), (14056071405100574527ULL))) : (((/* implicit */unsigned long long int) 1LL))))));
        }
    }
    for (unsigned long long int i_14 = 4; i_14 < 13; i_14 += 1) 
    {
        var_36 = ((/* implicit */int) var_16);
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_14 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_14 - 2]))) : (2212872919008608816LL)))) : (min(((-(arr_36 [(signed char)12] [(signed char)12] [i_14] [(signed char)12] [(signed char)12] [(unsigned char)16]))), (((/* implicit */unsigned long long int) ((var_6) << (((((/* implicit */int) var_0)) - (6587))))))))));
        arr_43 [i_14] [i_14] = ((/* implicit */signed char) 2194426067U);
        var_38 += ((/* implicit */signed char) (-(min((9223372036854775800LL), (min((0LL), (((/* implicit */long long int) arr_26 [i_14] [i_14] [(_Bool)1]))))))));
        arr_44 [i_14] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(3716776587U)))) || (((/* implicit */_Bool) arr_16 [i_14]))))), (((((((/* implicit */long long int) var_10)) / (var_7))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14336U))))))))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        var_39 = ((/* implicit */long long int) (+(var_6)));
        arr_47 [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)91)) ? (var_12) : (5409666680922919268LL))) % (((long long int) var_8))));
    }
    var_40 -= ((/* implicit */unsigned char) -2131181708947366086LL);
}
