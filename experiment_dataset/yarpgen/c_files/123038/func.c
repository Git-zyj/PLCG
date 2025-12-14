/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123038
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (274743689216ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 6478668729199083509LL)))))))));
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_14), ((unsigned char)0))))))), (var_15)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)25))))) / (max((9223372036854775807LL), (((/* implicit */long long int) arr_6 [i_0] [i_2 - 1] [15])))));
                    arr_8 [i_2] [i_1] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */_Bool) 2060766733233344205ULL)) ? (var_5) : (var_5)))), (max((274743689223ULL), (var_1)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1518894091U)))) && ((!(((((/* implicit */int) var_0)) == (((/* implicit */int) arr_5 [1] [(_Bool)1] [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 18446743798965862408ULL)))))));
                        var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 18446743798965862393ULL)))))) == ((~(-4253618157756151905LL))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446743798965862400ULL)))) ? (min((-3601117110605039676LL), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_2] [i_1] [i_0]), (((/* implicit */signed char) (_Bool)0)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((8736636409461536511ULL) << (((((/* implicit */int) var_15)) - (147)))))))))))));
                        var_25 = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_2 + 2])) % (((/* implicit */int) arr_1 [i_2 + 2])))), (((/* implicit */int) arr_1 [i_2 + 3]))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) - ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (10798307130419071398ULL))))))))));
        var_27 = ((/* implicit */unsigned short) (+(arr_7 [i_0])));
        arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3601117110605039644LL)) ? (((/* implicit */int) var_7)) : (-774666903))), ((-(((/* implicit */int) (unsigned char)181)))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_5])), ((unsigned short)7674)))) <= (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) var_0)))))));
        var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_14 [i_5])))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) var_6)))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446743798965862399ULL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_7]))))));
                var_31 = ((/* implicit */unsigned short) var_14);
            }
            arr_26 [i_6] [(unsigned short)14] [i_7] = ((/* implicit */unsigned short) 8111209494445442320ULL);
            arr_27 [10U] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)5058)))) == ((~(((/* implicit */int) (signed char)0)))))))) % (min(((-(8736636409461536527ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)245)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                arr_31 [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */long long int) -1207417816)) : (3601117110605039657LL)))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6403649730251622893LL)))))))) ? ((~(((((/* implicit */_Bool) var_13)) ? (arr_15 [i_6]) : (((/* implicit */long long int) 109729455)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_14 [i_7])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((var_2) <= (((((/* implicit */_Bool) (short)14477)) ? (((/* implicit */int) arr_28 [18ULL] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)245))))));
                        var_33 = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)10))))) : (((14561954172113638492ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(unsigned short)0] [i_11])))))));
                        var_34 ^= ((/* implicit */_Bool) ((arr_22 [i_7]) | (((/* implicit */int) arr_18 [i_9] [i_7]))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 109729455)) ? (1053819026) : (((/* implicit */int) (unsigned short)61164))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_9] [4] [20]))) + (arr_37 [i_7] [i_9] [i_7] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10 + 2] [i_10 + 2]))))))));
                        arr_38 [i_6] [i_6] [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) (((!(arr_35 [i_6] [i_7] [i_9] [i_12] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10 + 3] [i_10 + 3] [i_10 + 3] [(unsigned char)21]))) : (arr_33 [i_10 + 1] [i_10 + 1])));
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_36 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5058))))) <= ((-(((/* implicit */int) var_3)))));
                        var_37 = ((/* implicit */signed char) var_0);
                    }
                    var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_6]))));
                }
                arr_41 [i_6] [i_7] [i_9] [i_6] |= ((/* implicit */unsigned short) ((_Bool) (~(max((1053819026), (((/* implicit */int) arr_39 [16] [i_7] [i_9] [i_6] [i_7] [i_6] [i_6])))))));
                var_39 = ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned char)241)), (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))))) ? (min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) arr_36 [i_6] [i_6] [i_7] [i_7] [i_9] [i_9] [i_9])))) : (var_2));
            }
            for (short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned char)11)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-26851), (((/* implicit */short) arr_34 [i_7] [i_14])))))) | (((((/* implicit */_Bool) arr_46 [i_6] [i_6] [i_15] [i_6])) ? (216172782113783808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6] [9] [i_14] [i_15])))))))))))));
                    arr_48 [18ULL] [18ULL] [i_14] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_42 [i_6])) ? (((((/* implicit */_Bool) arr_15 [i_15])) ? (1702492306) : (((/* implicit */int) (unsigned char)223)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_14] [i_7] [i_14] [i_15]))))))), (((/* implicit */int) arr_16 [i_15] [14]))));
                    arr_49 [14LL] [i_6] [(unsigned short)3] [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_14))))));
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_6] [(_Bool)1] [i_6])) ? (3601117110605039680LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) 11421927219340709709ULL))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_36 [i_6] [i_7] [i_7] [i_7] [i_7] [i_14] [i_15])) : (((/* implicit */int) arr_23 [i_15] [i_15] [i_15] [i_15]))))))))));
                }
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                    var_43 = ((/* implicit */unsigned long long int) arr_37 [i_6] [i_6] [i_16] [i_16]);
                }
                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((1556124764U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1556124764U)))))))))));
                var_45 = ((/* implicit */int) (short)26772);
            }
            var_46 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))))));
        }
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_40 [i_6] [i_6] [i_17] [i_17])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) (unsigned char)122))))) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) max((arr_23 [i_6] [(unsigned char)3] [i_6] [i_6]), (((/* implicit */unsigned short) var_8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_6] [i_17])) ^ (((/* implicit */int) (unsigned char)245))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : (-5063377489162371581LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_32 [i_17] [i_17] [i_6] [i_6]), (var_15)))))))));
            var_48 = ((/* implicit */signed char) ((((18446743798965862395ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)48)), (arr_44 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))) : (min((((/* implicit */int) var_14)), (2147483637)))));
            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_43 [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)165))))) : ((-(arr_15 [i_17]))))))))));
            arr_55 [i_6] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)60760)) ? (((/* implicit */int) (short)-10961)) : (((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> (((((((/* implicit */_Bool) -293612661)) ? (((/* implicit */unsigned long long int) -5063377489162371570LL)) : (274743689209ULL))) - (13383366584547180029ULL)))));
        }
        var_50 ^= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-30))))));
        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (arr_40 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_6] [i_6] [(_Bool)1] [(_Bool)1]))))))))) : (((((((/* implicit */_Bool) arr_20 [i_6])) ? (18446743798965862399ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [21U] [5ULL]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4001969056U)))))))))));
        var_52 |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -3215860808571282422LL)))) : (var_1))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_6] [i_6]))))) : (((var_13) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49667))))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) >> (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (arr_56 [6]))))) : ((-(arr_15 [i_18])))))) ? (((((/* implicit */_Bool) (~(-3215860808571282422LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_7))))) : ((~(831334367800625016ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 1556124768U))) ? (((5063377489162371569LL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) -87525385))))))))));
        arr_59 [i_18] = ((/* implicit */int) 1556124764U);
        arr_60 [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)4389))));
    }
}
