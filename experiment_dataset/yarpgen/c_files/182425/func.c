/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182425
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((var_12), (min((min((var_12), (arr_1 [i_0]))), (((/* implicit */long long int) min((var_15), (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_10)))));
        arr_4 [i_0 - 1] = ((((/* implicit */_Bool) max((arr_1 [i_0 - 2]), (6533908905716002330LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)24576))) / (var_2)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))))) : (var_9));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) min((min((((/* implicit */long long int) max((arr_6 [i_1]), ((short)17760)))), (((((/* implicit */_Bool) var_0)) ? (-1876698563760066859LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((short) (short)-30076)))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26983)) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-7206)))) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_14)) ? (var_8) : (max((((/* implicit */long long int) var_6)), (var_13))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)7205))))))))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-7206)))))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-5871951522070849765LL), (((/* implicit */long long int) arr_5 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))))))));
    }
    for (short i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */short) max((min((((/* implicit */long long int) var_7)), (arr_8 [i_2 - 1] [i_2 + 2]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))) < (-144115188075855872LL))))));
            var_20 ^= ((/* implicit */short) arr_1 [i_3]);
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
            var_22 = ((/* implicit */short) var_0);
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_23 ^= ((((((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_4])) ? (arr_8 [i_2 - 1] [i_4]) : (var_12))) + (9223372036854775807LL))) << ((((((+((+(((/* implicit */int) var_11)))))) + (19642))) - (43))));
            var_24 ^= max((min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27004))) : (-1LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-11322))))))), (((((/* implicit */_Bool) (short)19002)) ? (min((arr_1 [i_4]), (((/* implicit */long long int) arr_6 [i_2])))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)30))))))));
            arr_15 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) (short)19729)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4096)) ? (var_13) : (var_13)))))))));
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */short) min((var_25), (var_4)));
            arr_18 [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)11312), ((short)31599)))))));
            var_26 = ((((/* implicit */_Bool) (-(-8798640273672286033LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19002))) : (arr_14 [i_2] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_17)) & (((/* implicit */int) arr_11 [i_2] [i_2]))))) : (var_12))) : ((~(min((((/* implicit */long long int) var_15)), (1349346612623042295LL))))));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (long long int i_8 = 4; i_8 < 14; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_27 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_6] [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)9046)))))) ? (max((((/* implicit */long long int) var_16)), (arr_16 [i_6] [i_7] [i_6]))) : ((-(1069547520LL))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) -3220807450803199292LL)) ? (6440010032596793928LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4227)))));
                        }
                        arr_29 [i_2] = ((/* implicit */short) min((var_0), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_23 [i_2] [i_2 - 1] [11LL]))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_8])))))))));
                        arr_30 [i_2] [i_6] [i_2] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)13045))))) : (arr_24 [i_8 - 4] [i_2 + 1])))) ? (((((((/* implicit */_Bool) (short)11314)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(short)2] [i_7] [i_2]))))) & ((+(-8065773746154447141LL))))) : (((((/* implicit */_Bool) 1125899906842623LL)) ? (arr_25 [i_2 + 2] [i_2 + 2] [0LL] [i_8] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) var_17)) % (((/* implicit */int) arr_20 [i_8]))))))));
                        var_29 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1))) : ((+(-6440010032596793929LL))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_30 &= ((/* implicit */long long int) (short)1536);
                var_31 = var_17;
                var_32 = arr_20 [i_6];
                arr_33 [i_2] [i_2] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((7958941034542198257LL) >> (((-7958941034542198257LL) + (7958941034542198300LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_8)))))) ? (max((var_1), (arr_19 [i_2 + 2] [i_6]))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)31599))))));
            }
            /* vectorizable */
            for (long long int i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                var_33 ^= ((/* implicit */long long int) ((7958941034542198257LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-21110)))));
                /* LoopSeq 3 */
                for (long long int i_12 = 3; i_12 < 12; i_12 += 3) 
                {
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21997)) ? (((/* implicit */int) (short)-10801)) : (((/* implicit */int) arr_32 [i_11] [i_11 - 3] [i_11] [i_11])))))));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (329584518080696760LL)))))))));
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21902))) : (var_8)))) ? (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                }
                for (short i_13 = 3; i_13 < 14; i_13 += 2) 
                {
                    var_37 = ((short) ((504403158265495552LL) + (((/* implicit */long long int) ((/* implicit */int) (short)248)))));
                    arr_42 [i_2] [i_11] [i_2] [i_2] = ((/* implicit */short) ((var_12) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))));
                    var_38 -= ((/* implicit */long long int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_4)))) == (((/* implicit */int) arr_10 [i_6]))));
                }
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_46 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2])) - (((/* implicit */int) var_11))));
                    arr_47 [i_6] [i_6] [(short)6] [i_14] [i_6] &= (((+(3220807450803199268LL))) & ((+(arr_43 [i_2] [i_6] [i_2] [i_2] [i_2]))));
                }
            }
            var_39 *= ((/* implicit */short) min((max((var_8), (((/* implicit */long long int) var_7)))), (var_2)));
            var_40 = ((/* implicit */long long int) max((var_40), (((max((-3220807450803199292LL), (4416460718447820764LL))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 2405483936774946884LL)) ? (68250095263149155LL) : ((-9223372036854775807LL - 1LL))))))))));
        }
        var_41 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-1679))));
        arr_48 [i_2] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_17))) + (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2] [i_2 + 3] [i_2 - 1])) && (((/* implicit */_Bool) var_8)))))));
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) max((((/* implicit */long long int) (short)15)), (-7471460824727059277LL))))));
    }
    var_43 = ((/* implicit */short) max((((min((((/* implicit */long long int) var_16)), (var_2))) << (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) - (8013508349470059480LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-7119360853681907487LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))));
    var_44 = ((((/* implicit */_Bool) var_3)) ? (9223372036854775789LL) : (((((/* implicit */long long int) ((/* implicit */int) (short)1536))) + (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3584))) : ((-9223372036854775807LL - 1LL)))))));
    var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-21110)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_17)) ? (var_2) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (var_13))))))) >= (max((min((var_3), (var_0))), (min((var_3), (var_2)))))));
}
