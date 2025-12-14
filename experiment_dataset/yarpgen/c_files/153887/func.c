/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153887
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
    var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))));
    var_21 = ((/* implicit */short) min((var_21), ((short)23138)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -5960034244374490696LL)) ? (5960034244374490696LL) : (5960034244374490678LL)));
        var_22 &= (~(((/* implicit */int) (!(((/* implicit */_Bool) 5960034244374490678LL))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */_Bool) (~((+(5960034244374490696LL)))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (-5960034244374490694LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_2])))))));
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1]))));
            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -5960034244374490662LL)) ? (((/* implicit */int) (short)16376)) : (((/* implicit */int) (signed char)-11)))) != (((/* implicit */int) (short)-16375))));
        }
        for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16366))) : (9223372036854775801LL)))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_27 = ((signed char) -5960034244374490697LL);
                    var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (signed char)79)))))));
                    var_29 = ((/* implicit */_Bool) arr_3 [i_4]);
                    var_30 &= ((/* implicit */signed char) ((5960034244374490724LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))));
                    var_31 = ((/* implicit */short) (signed char)-24);
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */signed char) (~(-9223372036854775802LL)));
                    var_32 = ((unsigned short) (signed char)-26);
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_23 [i_1] [i_3] [i_3] [i_4] [i_7] = ((_Bool) var_16);
                    arr_24 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (-(((var_14) - (-5960034244374490667LL)))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5960034244374490696LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (8319180410286281909LL)));
                    var_34 += ((/* implicit */signed char) arr_4 [i_1] [i_1 - 1]);
                }
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_35 = var_17;
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5960034244374490655LL) / (-5960034244374490697LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5960034244374490697LL))))));
                }
                arr_28 [i_1] [i_1] [i_3] = arr_17 [i_3] [i_3 - 2] [i_3] [i_4];
                var_37 = ((((/* implicit */_Bool) -5960034244374490696LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (-7182128567383738572LL));
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (signed char)89)))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        arr_34 [i_10] [i_3] [i_9 - 1] [i_4] [i_1 - 1] [i_3] [i_1 - 1] = ((/* implicit */short) (-(5960034244374490716LL)));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_9 - 1] [i_3 + 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    }
                    var_40 *= ((/* implicit */signed char) arr_8 [i_1 + 1] [i_9 - 1]);
                }
                for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    var_41 = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_1 + 1] [i_3] [i_3] [i_1 + 1]))));
                    arr_38 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) -1890122759)) : (-5960034244374490724LL)))));
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_1 + 1] [i_1 - 1] [i_1] [4])) ? (((/* implicit */int) arr_30 [i_1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_30 [i_1] [i_11 + 2] [i_4])))))));
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) ((_Bool) arr_29 [i_1] [i_3 + 1] [i_4] [i_12] [i_13]));
                            var_44 = (~(((/* implicit */int) arr_11 [i_3] [i_3 - 2])));
                            var_45 = ((/* implicit */unsigned short) arr_15 [i_3 + 1] [i_3] [i_3] [i_1]);
                            var_46 = ((((/* implicit */int) (signed char)-112)) != (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_47 = ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [i_3] [i_3 - 2] [i_14] [i_1 - 1])));
                arr_46 [i_3] [i_3] = ((/* implicit */long long int) (signed char)-62);
            }
            for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                arr_49 [i_15] [i_3] [i_1] = ((/* implicit */long long int) arr_8 [i_1 + 1] [i_3 - 1]);
                var_48 = ((/* implicit */long long int) (signed char)-91);
            }
        }
        for (int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            var_49 = ((/* implicit */signed char) var_12);
            var_50 = ((/* implicit */long long int) arr_42 [i_1] [i_16] [i_16] [i_16] [i_1 + 1]);
        }
        var_51 = ((/* implicit */_Bool) (+((((_Bool)1) ? (var_8) : (((/* implicit */int) arr_50 [(unsigned short)2] [i_1 - 1]))))));
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
        {
            var_52 = ((/* implicit */int) (signed char)53);
            /* LoopSeq 4 */
            for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
            {
                var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7606708784271437503LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_18] [(signed char)0] [i_18] [i_17])))))));
                var_54 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -7606708784271437503LL)) ? (1417933146) : (((/* implicit */int) (short)-21458))));
                var_55 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (unsigned short i_19 = 2; i_19 < 9; i_19 += 2) 
                {
                    var_56 &= ((/* implicit */int) arr_16 [i_1]);
                    var_57 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        arr_66 [i_1 - 1] [i_18] [i_18] [i_19] [i_1 - 1] = (!(((/* implicit */_Bool) arr_31 [i_1] [i_17] [i_1 - 1] [i_19] [i_19 - 1])));
                        var_58 ^= ((signed char) var_16);
                        var_59 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) (unsigned short)40679)))));
                        var_60 = ((/* implicit */short) (+(-673464320)));
                    }
                }
            }
            for (long long int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
            {
                var_61 ^= ((/* implicit */signed char) var_4);
                var_62 *= ((/* implicit */short) (~(arr_8 [i_1 - 1] [i_17])));
            }
            for (long long int i_22 = 0; i_22 < 11; i_22 += 3) /* same iter space */
            {
                var_63 = ((/* implicit */short) arr_68 [i_1] [i_1] [i_1] [i_22]);
                var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2134219851)) ? (((/* implicit */int) arr_55 [i_1] [i_17] [i_17] [i_22])) : (((/* implicit */int) arr_55 [i_22] [i_22] [i_17] [i_1]))));
            }
            for (signed char i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                var_65 = ((/* implicit */_Bool) 9223372036854775807LL);
                var_66 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_17] [i_17] [i_17] [i_1])) | (((/* implicit */int) var_15))));
                var_67 = ((/* implicit */long long int) max((var_67), ((~(((((/* implicit */_Bool) (signed char)-91)) ? (var_1) : (((/* implicit */long long int) arr_47 [i_1] [i_1 - 1] [i_17] [i_23]))))))));
                var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19179)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-2405525125595400180LL)));
            }
            var_69 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) var_0)) < (arr_51 [i_1] [i_17] [i_17]))))));
            var_70 = ((/* implicit */short) ((var_19) ? (((/* implicit */int) arr_42 [i_1] [i_17] [i_1 - 1] [i_17] [i_1])) : (((/* implicit */int) var_17))));
        }
        for (signed char i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
        {
            var_71 += ((/* implicit */short) (~(((/* implicit */int) ((short) arr_44 [i_24])))));
            arr_77 [i_1] [10] [10] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_14)))));
        }
    }
    /* vectorizable */
    for (signed char i_25 = 1; i_25 < 10; i_25 += 3) /* same iter space */
    {
        var_72 = ((/* implicit */long long int) (_Bool)1);
        arr_82 [i_25] [i_25] = ((/* implicit */_Bool) (~(var_1)));
        var_73 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2405525125595400198LL)) ? (5445173331679218862LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (2405525125595400207LL) : (((/* implicit */long long int) var_3)));
    }
}
