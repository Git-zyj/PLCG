/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158265
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
    var_14 ^= var_10;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_15 -= ((/* implicit */int) (~(((((long long int) (unsigned char)170)) - (((((-5333404982255124283LL) + (9223372036854775807LL))) >> (((var_6) - (4278973262233248179LL)))))))));
            var_16 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((17911730269673610732ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), ((-(-6730925823021420589LL)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1]))) : (arr_2 [i_1 + 2] [2ULL] [i_1])))));
            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 856259149500702193LL)) ? (((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_1 + 2])))) : ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            var_18 *= ((/* implicit */short) (~(var_13)));
            var_19 -= -2235193070891232766LL;
        }
        for (int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_20 *= 9223372036854775807LL;
            var_21 *= (~(((var_4) / (856259149500702193LL))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)841)))) ? (arr_6 [i_3 - 1] [i_3 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_3 + 1] [i_3]))))))));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)-75))))))))));
        var_24 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((535013804035940886ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_0 - 1]))))))))) * (max(((+(var_2))), (((/* implicit */unsigned long long int) 1099377410048LL)))));
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            var_25 -= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) max((var_10), (var_8)))), (arr_2 [i_4 + 1] [16LL] [i_0])))));
            /* LoopSeq 4 */
            for (short i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) -11)))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -1LL)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [(unsigned short)14] [12LL])), (17911730269673610730ULL)))) ? (10054831247064867647ULL) : (((/* implicit */unsigned long long int) -774751584701167114LL)))))))));
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 22; i_6 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(774751584701167113LL)))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (-(var_12))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (-774751584701167113LL)))));
                            arr_20 [i_7] [i_4] [i_0] [6LL] [6LL] &= ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
            for (int i_9 = 3; i_9 < 22; i_9 += 1) /* same iter space */
            {
                var_31 += ((/* implicit */short) arr_19 [i_0] [i_0 - 1] [17LL] [i_0] [i_0 - 1]);
                /* LoopSeq 2 */
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(-774751584701167113LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))))));
                    var_33 &= ((/* implicit */unsigned short) var_1);
                }
                for (int i_11 = 2; i_11 < 20; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), ((+(-273005922322751502LL)))));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (+(12713126170463357261ULL))))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (+(((/* implicit */int) (short)30331)))))));
                        var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_32 [i_4 - 1] [i_9 - 1] [i_11 + 2] [i_13 + 2] [i_13 + 2]) : (arr_32 [i_4 - 2] [i_9 + 1] [i_11 - 1] [i_13 - 1] [i_13 - 1])));
                        var_38 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                        var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [10LL] [10LL] [i_9] [i_11 + 1] [i_13])) ? ((~(((/* implicit */int) (short)-842)))) : (((((/* implicit */int) (short)842)) * (((/* implicit */int) (_Bool)1))))));
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_32 [(short)10] [i_4] [i_9] [i_11 + 1] [i_13])) == (var_3))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_9] [i_11] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)113))) : (6477459932225176174LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)30313))))))));
                    }
                    var_41 *= ((/* implicit */_Bool) (-((+(max((8391912826644683989ULL), (((/* implicit */unsigned long long int) var_7))))))));
                    var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10054831247064867623ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 22; i_14 += 1) /* same iter space */
            {
                var_43 ^= ((/* implicit */short) -1523515639476974328LL);
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) 6669564925737421396LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) arr_19 [i_0 - 1] [3LL] [i_4 + 1] [(short)3] [i_14])))))));
                var_45 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_14])) : (((/* implicit */int) (unsigned char)3)))) | ((+(((/* implicit */int) var_10))))));
            }
        }
        for (long long int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_16 = 1; i_16 < 21; i_16 += 2) 
            {
                for (unsigned short i_17 = 2; i_17 < 22; i_17 += 2) 
                {
                    for (long long int i_18 = 4; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_46 ^= ((/* implicit */signed char) var_2);
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17911730269673610731ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (arr_17 [i_18] [i_18] [0ULL] [i_16 + 1] [i_0 - 1] [i_0 - 1]) : (179449427506948198LL)))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [3LL] [i_16] [i_18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [14] [i_0 - 1] [i_0 - 1] [i_0]))) : ((~(var_9)))))))));
                        }
                    } 
                } 
            } 
            var_48 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9020747073403131894LL)) ? (var_3) : (arr_18 [i_0] [i_0 - 1] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_0)))) || (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_0] [i_0] [i_0 - 1] [i_0] [i_15]) : (856259149500702188LL))));
            /* LoopNest 2 */
            for (long long int i_19 = 1; i_19 < 21; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    {
                        var_49 += 2879764286381506131LL;
                        var_50 += (((~((~(4557641209553153510LL))))) >> (((-1666785246004897134LL) + (1666785246004897162LL))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_21 = 2; i_21 < 22; i_21 += 4) 
            {
                for (long long int i_22 = 1; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_51 &= ((/* implicit */signed char) (short)16527);
                        var_52 += ((/* implicit */signed char) (+(((max((13086255152827000665ULL), (((/* implicit */unsigned long long int) (short)-20145)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)9)))))))));
                        var_53 -= (!(((((/* implicit */long long int) (~(((/* implicit */int) arr_47 [i_21]))))) > (((((/* implicit */_Bool) -8486333035999386661LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) 5360488920882550934ULL)) ? ((-(((((/* implicit */_Bool) 17911730269673610741ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) arr_23 [i_0] [i_0] [i_21 + 1] [i_22 - 1] [i_0] [19ULL])) / (var_1)))))))))));
                        var_55 += ((/* implicit */unsigned long long int) ((var_1) + ((+(((((/* implicit */_Bool) var_1)) ? (arr_32 [i_0] [i_15] [i_21] [i_22 + 1] [(_Bool)1]) : (-2999574927879270881LL)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_23 = 2; i_23 < 22; i_23 += 3) 
            {
                for (int i_24 = 1; i_24 < 21; i_24 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_25 = 3; i_25 < 22; i_25 += 3) 
                        {
                            var_56 ^= ((/* implicit */long long int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_15] [i_25]))) | (var_13))), ((~(var_13))))), (((/* implicit */unsigned long long int) (+((+(var_1))))))));
                            var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)11)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_16 [i_0] [i_0])))))))));
                            var_59 += ((((/* implicit */_Bool) arr_47 [i_15 + 2])) ? (-5461334763750591449LL) : (-3339148172009712532LL));
                        }
                        var_60 ^= var_12;
                        var_61 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((1666785246004897141LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))))))));
                        var_62 ^= -3339148172009712532LL;
                    }
                } 
            } 
        }
    }
    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
    {
        var_63 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3339148172009712532LL) < (var_1))))) & ((((((_Bool)1) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) -1980172139273374366LL)) ? (((/* implicit */unsigned long long int) arr_28 [i_27] [i_27] [(_Bool)1] [i_27] [i_27 - 1] [i_27 - 1])) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1013295803))))))))));
        var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7))))))), (((((/* implicit */_Bool) 1980172139273374342LL)) ? (3339148172009712548LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5091528382785669203LL)))))))))))));
        /* LoopNest 2 */
        for (short i_28 = 1; i_28 < 11; i_28 += 1) 
        {
            for (signed char i_29 = 1; i_29 < 12; i_29 += 3) 
            {
                {
                    var_65 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48273)) ? (-1666785246004897155LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))) ? (max((arr_55 [i_29] [i_28 - 1] [i_27 - 1]), (((/* implicit */long long int) 59655646)))) : (var_4));
                    var_66 -= ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) : (18446744073709551615ULL));
                    var_67 = ((/* implicit */long long int) max((var_67), (((/* implicit */long long int) (unsigned short)23794))));
                }
            } 
        } 
    }
    var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) (((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((541165879296LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (min((min((((/* implicit */unsigned long long int) var_6)), (var_3))), ((+(var_11))))))))));
}
