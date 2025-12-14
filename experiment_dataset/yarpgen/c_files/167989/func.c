/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167989
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (15638076196523979810ULL))))))) != ((-(-1925128476)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [21U]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) var_3);
            arr_7 [i_0] [i_1] |= ((/* implicit */long long int) arr_1 [i_0]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32472))));
            var_13 |= ((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1]);
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)192)), (5246568594807491639ULL))))));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-21)) | (((/* implicit */int) arr_3 [i_3]))))) && (((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_3]))));
            var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) ((unsigned char) -1925128478))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_3)))))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 4; i_5 < 20; i_5 += 4) 
            {
                var_16 *= ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned short)60968)) : (-10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
                arr_19 [i_5] [i_0] [i_5] = ((/* implicit */unsigned long long int) 516096LL);
                /* LoopSeq 4 */
                for (unsigned char i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_1 [i_0]))));
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_5] [i_4])), (4294967275U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (8290840755769941243ULL)))));
                    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15830135945566919391ULL)) ? (1525329639) : (((/* implicit */int) (signed char)54))))))))));
                    arr_22 [i_0] [i_0] [16U] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_0] [i_6 - 2])))))))) : ((-(4123168604160LL)))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) var_5);
                    arr_25 [i_0] [i_4] [i_4] [i_0] = var_9;
                    var_21 &= ((/* implicit */short) var_9);
                }
                for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_4] [i_0] [i_8] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5 - 4] [i_0] [i_0] [i_8 + 2])) << (((((/* implicit */int) var_10)) - (58587)))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (var_10)));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((unsigned int) (!((_Bool)1)))), (((/* implicit */unsigned int) var_0)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 20; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (unsigned char)141))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_10] [i_8] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                    }
                    var_26 ^= var_7;
                    arr_34 [i_0] [i_0] [i_5 - 2] [i_8 - 1] = ((/* implicit */short) arr_16 [(unsigned char)16]);
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2451599541U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17492))) : (0ULL)));
                    arr_37 [i_0] [i_11] [i_5 + 3] [i_0] = ((((/* implicit */_Bool) -516096LL)) ? (0U) : (0U));
                    var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1]))));
                    var_29 ^= ((/* implicit */long long int) 4294967285U);
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11357))))) ? (((((/* implicit */int) (unsigned char)206)) ^ (((/* implicit */int) (short)18917)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))))));
                }
            }
            var_31 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)11992)))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (signed char)-64))));
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned long long int) -564179882)) : (9895837815167906893ULL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 4) 
    {
        arr_40 [i_12 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_12 + 1] [8U] [i_12 + 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_12 - 1] [3ULL] [i_12 - 2] [i_12 - 1]))) : (var_3)));
        arr_41 [i_12] [i_12] = ((/* implicit */unsigned int) var_8);
        arr_42 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (arr_32 [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_12] [i_12 + 2] [i_12])));
    }
    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 2) 
        {
            var_34 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-25886)) ? (arr_29 [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))))), (((/* implicit */unsigned long long int) ((short) ((int) (unsigned char)111))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2177670679U)))) ? (((((/* implicit */_Bool) arr_30 [i_14 - 1] [i_14 - 1] [i_13] [(unsigned char)9] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_14 - 1] [i_14]))) : (arr_30 [i_14 + 1] [i_14] [i_14] [i_13] [i_13] [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)56631)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_13] [i_14 + 1] [(unsigned short)18]))))) : (max((((/* implicit */unsigned long long int) var_0)), (9001868220396244890ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_37 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3251537166U)))))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            arr_52 [i_15] [i_15] = ((/* implicit */unsigned short) (!(arr_27 [i_13] [i_13] [i_15] [i_13] [i_15] [i_15])));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 4; i_16 < 22; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 2) 
                {
                    {
                        arr_57 [i_13] [i_15] [18U] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)221))));
                        arr_58 [i_13] [i_15] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1566891696)) ? (4194303) : (((/* implicit */int) (unsigned char)129))));
                    }
                } 
            } 
            var_38 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) != ((-(10228518838926712707ULL))));
            arr_59 [i_15] [i_15] = ((/* implicit */unsigned char) (signed char)-75);
        }
        var_39 = ((/* implicit */short) var_7);
        var_40 = (unsigned short)43710;
    }
    for (signed char i_18 = 1; i_18 < 14; i_18 += 4) 
    {
        var_41 = ((/* implicit */_Bool) min((var_41), (min(((!(((/* implicit */_Bool) ((arr_43 [i_18]) ? (arr_53 [i_18 + 1] [i_18] [6ULL] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)0))))))));
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) var_4))));
        arr_62 [i_18] [i_18] = ((/* implicit */_Bool) (+((((_Bool)0) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
    }
    var_43 = ((/* implicit */int) var_7);
    var_44 = min((((((/* implicit */_Bool) var_8)) ? (((9693270799395102681ULL) << (((((/* implicit */int) var_7)) + (75))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)25886))))))), (((/* implicit */unsigned long long int) var_9)));
}
