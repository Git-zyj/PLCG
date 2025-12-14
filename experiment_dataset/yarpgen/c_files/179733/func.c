/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179733
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13750))) > (16072664408695340786ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)13753))))));
        var_20 = ((/* implicit */unsigned char) max(((+(arr_1 [i_0 + 1]))), (min((((long long int) 2445839062U)), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_3 [(unsigned char)18])) ? (var_4) : (((/* implicit */int) (unsigned char)45)))))) - (((int) (short)-24934))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) arr_6 [i_1 - 1]);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [6ULL])))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (var_0)));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 4; i_5 < 19; i_5 += 2) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_18 [i_1] [i_1 + 1] [i_3] [i_5 - 4] [i_5] [i_1]);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)13753))) < (1154794844)));
                            var_25 ^= ((/* implicit */signed char) arr_13 [i_6] [(unsigned char)5] [(unsigned char)5]);
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) arr_14 [(unsigned char)16] [i_1] [i_1] [i_1]);
            arr_22 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) 4U);
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (_Bool)0))));
                            arr_32 [i_1] [i_1] = ((/* implicit */signed char) (-(arr_13 [i_1] [i_8] [6])));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(arr_29 [i_1 + 1] [i_7]))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) (unsigned char)45);
            var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) (_Bool)0))))));
        }
    }
    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */int) ((short) arr_7 [i_11] [4]));
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 10754556396047250759ULL))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [2LL]))))) ? (((/* implicit */int) arr_31 [i_12] [(_Bool)1] [i_12] [i_12 + 3] [i_12 + 1])) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_12 + 1])))))));
            /* LoopNest 2 */
            for (short i_13 = 3; i_13 < 19; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        arr_48 [i_11] [i_11] [i_13] [(unsigned char)8] = arr_1 [i_11 - 1];
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) arr_24 [(_Bool)1] [i_12 + 3] [i_13] [i_14]))), (max((((/* implicit */unsigned int) 1154794852)), (4294967292U))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((/* implicit */signed char) var_3);
                arr_53 [i_11 + 1] [i_12] [i_15] [i_15] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_13))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (short)17))));
                    /* LoopSeq 4 */
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        var_36 *= arr_47 [i_11 + 1] [i_11];
                        arr_59 [i_11] [i_11] [i_17] [i_11] [i_11 - 1] = ((/* implicit */unsigned short) arr_5 [i_11] [i_17]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_37 -= ((/* implicit */long long int) 2445839062U);
                        var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_11 + 3] [i_12 - 1] [i_12])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_35 [i_11] [18ULL] [i_11]))));
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_16 + 1]))));
                        var_40 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_49 [i_11] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_11] [i_15] [i_16 + 1] [i_18]))))));
                        var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_16 + 1]))) == (arr_54 [5LL] [i_15] [i_16] [i_18]));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 1) 
                    {
                        arr_65 [i_11] [i_12 + 1] [i_15] [(unsigned short)13] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_58 [i_19] [i_19] [i_19 + 2] [i_19 + 2] [(unsigned char)10])) * (((/* implicit */int) arr_30 [i_19 + 2] [i_19 + 2] [i_19 + 2] [(short)12] [i_19 - 1]))));
                        arr_66 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_55 [i_11] [i_11] [i_12 - 1]))));
                        arr_67 [i_11] [i_11] [(_Bool)1] [(short)5] [(unsigned short)18] [i_11] &= ((/* implicit */unsigned int) (unsigned char)198);
                    }
                    for (unsigned char i_20 = 3; i_20 < 19; i_20 += 4) 
                    {
                        arr_70 [i_11] [i_11] [i_12] [(unsigned char)12] [2] [(unsigned char)7] [(unsigned short)13] = (-(((/* implicit */int) ((2655709274040078749LL) <= (-3297540741328734920LL)))));
                        arr_71 [i_20 - 1] [i_16] [i_15] [i_12] [i_11] |= ((/* implicit */int) 1849128234U);
                        var_42 += ((/* implicit */short) arr_52 [i_20] [15] [i_11]);
                    }
                }
            }
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                var_43 = ((long long int) min((arr_3 [i_12 + 3]), (((/* implicit */unsigned short) (_Bool)1))));
                var_44 += ((/* implicit */unsigned long long int) arr_43 [i_12]);
                var_45 = ((/* implicit */short) (unsigned char)117);
                arr_74 [14] |= ((/* implicit */long long int) (short)(-32767 - 1));
                arr_75 [i_21] [i_21] [i_21] [i_11] = ((((/* implicit */int) min(((signed char)-115), ((signed char)84)))) > (((/* implicit */int) arr_25 [i_21] [i_21])));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                var_46 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_68 [3ULL] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])), (var_9))))));
                var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) min((((/* implicit */short) ((((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)13750)))) == (((int) (short)14121))))), (((short) arr_25 [2LL] [2LL])))))));
                /* LoopSeq 1 */
                for (signed char i_23 = 0; i_23 < 20; i_23 += 4) 
                {
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((unsigned short) ((3108642642058568417ULL) << (((((/* implicit */int) (short)-13750)) + (13802)))))))));
                    arr_80 [i_22] = ((/* implicit */signed char) ((int) arr_76 [i_11]));
                }
                arr_81 [i_11] [i_11] [i_22] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)-68)))));
            }
        }
    }
}
