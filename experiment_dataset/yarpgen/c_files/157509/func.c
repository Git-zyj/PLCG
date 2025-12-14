/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157509
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
    var_17 = ((/* implicit */signed char) min((max((((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_3)))), (((/* implicit */int) var_6))));
    var_18 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0] [i_2] [(signed char)18] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)30))))) ? (((/* implicit */int) arr_5 [(signed char)15] [(short)23] [i_0])) : (((((/* implicit */int) var_1)) % (((/* implicit */int) max((var_14), (var_5))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (signed char)111)) | (((/* implicit */int) (signed char)56)))) : (((/* implicit */int) ((short) max((var_0), (((/* implicit */short) arr_7 [i_1] [i_1] [i_0]))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_19 = arr_4 [i_0] [i_0];
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(signed char)17] [i_4])) || (((/* implicit */_Bool) arr_4 [i_2] [i_3])))))));
                        }
                        for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_2] [(signed char)9] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)-24))))), (arr_6 [i_0] [i_0] [i_0] [(short)18])))) >> (((min((((((/* implicit */_Bool) arr_7 [(short)20] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))), (((/* implicit */int) max((var_9), (var_15)))))) - (20761)))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) (short)-26301)) * (((/* implicit */int) (signed char)-111)))), (((/* implicit */int) (short)-15017))));
                            arr_19 [i_2] [i_2] [(short)7] [(short)4] = arr_13 [i_0] [i_1] [(short)13] [(short)13] [(short)13];
                            var_21 = ((/* implicit */signed char) max((((/* implicit */int) (short)7541)), (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_5 - 2])) % (((/* implicit */int) arr_16 [i_5 - 3] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 2]))))));
                        }
                    }
                    for (short i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        arr_22 [i_6 + 1] [i_6 + 1] [(signed char)5] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */int) arr_0 [i_6 + 1] [i_0])), (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [(short)1] [i_6])))))), (max((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_26 [i_1] [i_2] = ((/* implicit */short) var_13);
                            var_22 = ((/* implicit */signed char) max((arr_6 [i_0] [i_1] [(signed char)15] [(signed char)15]), (((/* implicit */short) ((((((/* implicit */int) arr_15 [(short)22] [(signed char)18] [i_1] [i_1] [(signed char)9])) - (((/* implicit */int) var_6)))) > (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_0] [(short)22])))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)24321)))) / (((((/* implicit */int) (signed char)-29)) * (((/* implicit */int) var_3))))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */short) var_8)), (var_0))))));
                        }
                        for (signed char i_8 = 4; i_8 < 23; i_8 += 3) 
                        {
                            arr_29 [(signed char)6] [(signed char)18] [i_2] = var_0;
                            var_24 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)-24321)))), (((((/* implicit */int) max((arr_24 [i_1] [i_1]), (arr_9 [i_6] [(signed char)17] [i_1] [i_0])))) - (((/* implicit */int) max((arr_3 [i_6]), (arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                            var_25 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [(short)16] [(short)6])) : (((/* implicit */int) var_7)))) / (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13)))))) <= (((/* implicit */int) max(((signed char)-64), ((signed char)-6))))));
                        }
                    }
                    arr_30 [i_2] [(signed char)11] = ((/* implicit */short) (signed char)55);
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                {
                    arr_35 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-15017)) + (2147483647))) >> (((((/* implicit */int) (short)-4096)) + (4104)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (signed char)88)))))));
                    arr_36 [i_0] [(short)9] [i_0] [(short)9] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_3 [i_0]))));
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_2))))) != (((/* implicit */int) var_10))));
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 23; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_1] [(short)20])) >= (min((((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_10] [i_1] [i_12])) : (((/* implicit */int) var_1)))), ((-(((/* implicit */int) (signed char)-53))))))));
                                var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_11]))))) ? (((/* implicit */int) min((var_8), ((signed char)-122)))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) (short)2298)))))) % (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [(short)15] [i_11] [i_10])), (arr_9 [i_0] [i_1] [i_10] [(signed char)3])))) || (((/* implicit */_Bool) var_5)))))));
                                arr_43 [i_0] [i_10] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_8)) > (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((var_9), (arr_16 [(signed char)15] [i_1] [(signed char)1] [i_1] [i_1] [i_1] [(signed char)15])))))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_10] [i_11] [i_11] [i_12])) : (((/* implicit */int) (short)32767)))) | ((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)-1))))) > (((/* implicit */int) ((short) arr_38 [i_11] [(short)13] [i_11]))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) arr_12 [i_0] [(short)2] [(short)2] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0])) & (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_16))))) ? (((((/* implicit */int) arr_2 [i_10])) | (((/* implicit */int) arr_25 [i_14] [(signed char)9] [i_13] [(short)23] [i_1] [i_0])))) : (((((/* implicit */int) arr_4 [i_1] [i_14])) & (((/* implicit */int) (signed char)-1))))))));
                            arr_48 [i_0] [(signed char)22] [i_0] [i_10] [i_0] = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */short) (signed char)17)), ((short)4096)))) & (((/* implicit */int) (short)32767)))) << (((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_7))))), (min(((short)5661), (var_7)))))) - (2017)))));
                        }
                        arr_49 [i_0] [(signed char)22] [i_0] [i_10] [i_10] = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_10] [i_13] [i_0])) : (((/* implicit */int) arr_13 [(short)10] [(short)10] [(short)10] [i_10] [i_13])))), (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_44 [i_0] [i_1] [i_10] [i_10])))))));
                        arr_50 [i_10] [(signed char)7] [i_1] [i_10] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                        arr_51 [i_10] [i_0] [i_1] [i_10] [i_13] = ((/* implicit */signed char) (+(((((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_7 [i_0] [i_1] [i_10])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)4096))))) : (((/* implicit */int) var_3))))));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        arr_55 [i_15] [i_10] [i_10] [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [(short)14] [i_15]))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)4096))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)-4095)) : (((/* implicit */int) (short)32764)))) >= (((/* implicit */int) min((var_11), (((/* implicit */short) var_1)))))))) : (((((/* implicit */int) var_15)) % (((/* implicit */int) ((short) var_1)))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-4088)) : (((/* implicit */int) (short)32767)))) : (((((/* implicit */int) arr_41 [i_15] [i_10] [i_10] [(short)20] [i_0])) % (((/* implicit */int) arr_41 [i_0] [(signed char)8] [i_10] [i_15] [i_15]))))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        arr_59 [(short)19] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]), (var_1)))) ? (((((/* implicit */_Bool) (short)13459)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (short)20117)))) : (((/* implicit */int) max((var_11), (var_16))))))) ? (((((/* implicit */_Bool) (short)30184)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-10455)))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (short)-32761))))));
                        arr_60 [(signed char)6] [i_16] [i_10] [i_10] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(signed char)0])) ? (((/* implicit */int) (short)5661)) : (((/* implicit */int) arr_1 [i_10]))))) ? (((/* implicit */int) min((((/* implicit */short) var_12)), (var_4)))) : (((/* implicit */int) min((arr_24 [i_1] [i_1]), (var_10)))))), (min(((-(((/* implicit */int) arr_14 [i_0] [(short)2] [(signed char)18] [i_10] [i_10])))), (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_15)))))))));
                    }
                }
                for (short i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */short) max((min((((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (354))))), (((/* implicit */int) ((((/* implicit */int) (short)-32744)) <= (((/* implicit */int) (signed char)-4))))))), (max((((((/* implicit */int) var_4)) >> (((((/* implicit */int) (short)3775)) - (3762))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_10))))))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)53)))))) ^ (((((((((/* implicit */int) arr_45 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_1] [i_0])) - (51))))) % (((/* implicit */int) arr_54 [i_0] [(short)5] [i_0] [i_0] [(short)10]))))));
                    arr_64 [i_0] = ((/* implicit */signed char) (short)5355);
                }
                var_36 = ((/* implicit */short) ((signed char) (short)22859));
                arr_65 [i_1] = (signed char)(-127 - 1);
            }
        } 
    } 
    var_37 = ((/* implicit */short) var_1);
    var_38 = min((var_3), (max((((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)-16))))), ((short)4073))));
}
