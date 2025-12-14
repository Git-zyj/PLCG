/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17326
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
    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)8191), (((/* implicit */short) (_Bool)1)))))) : (min((min((var_6), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-1617395612) : (((/* implicit */int) (short)8185)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8173)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0])) : (2022188585)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_22 += ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) var_17))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(signed char)0])))))));
        }
        for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_25 += ((_Bool) arr_10 [4] [i_3 - 1]);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)28906)))) : (((/* implicit */int) arr_16 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_0] [6ULL] [6ULL]))));
                        }
                        for (short i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            var_27 += ((/* implicit */int) arr_1 [i_6]);
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned int) var_16));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [(signed char)4])) && (((/* implicit */_Bool) 1077858678)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_12 [i_4] [(short)4] [i_0] [i_4])));
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) 3970305888750165072LL))));
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((_Bool) var_19));
                            var_32 = ((/* implicit */long long int) min((var_32), (var_5)));
                        }
                        for (short i_11 = 2; i_11 < 10; i_11 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((int) arr_18 [i_9 + 1] [i_7] [i_8 - 1] [i_7] [i_7])))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_11 + 1] [i_7 + 2] [i_0])) ? (((/* implicit */long long int) arr_32 [i_11] [9U] [i_11] [i_11] [i_11] [7ULL] [9U])) : (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-68))) : (-1LL)))) || (((/* implicit */_Bool) 16251596077057020392ULL)))))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) 18446744073709551613ULL))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((unsigned short) (signed char)90)))));
                        }
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_14 [i_7] [i_7])))))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((short) arr_4 [i_7 + 1] [i_8 - 1])))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
    {
        var_40 ^= ((/* implicit */_Bool) var_16);
        var_41 += ((/* implicit */unsigned short) min((min((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17241))))), (((((/* implicit */_Bool) arr_13 [(unsigned short)8] [(short)0] [i_12] [(short)0] [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12])))) && (((/* implicit */_Bool) ((var_14) >> (((((/* implicit */int) var_15)) + (24367)))))))))));
        var_42 = ((/* implicit */unsigned char) var_13);
        var_43 = ((/* implicit */signed char) var_4);
    }
    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_36 [i_13]), (arr_36 [i_13])))) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) min((var_12), (((/* implicit */short) ((signed char) 16251596077057020389ULL))))))));
        var_45 = ((/* implicit */unsigned short) min((((((_Bool) (signed char)-4)) ? (var_6) : (arr_37 [i_13]))), (((/* implicit */unsigned long long int) ((var_14) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (2147483641)))))))));
        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) arr_37 [21U]))), (var_10))))));
        arr_38 [10ULL] [4] = ((/* implicit */short) var_5);
    }
    /* LoopSeq 2 */
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                {
                    arr_47 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_15])) ? (max((((/* implicit */long long int) (signed char)10)), (8594849008355611260LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))));
                    var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((-1057438621), (max((arr_36 [11LL]), (((/* implicit */int) (signed char)8))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14]))))))));
                    arr_48 [i_15] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_14])) ? (((arr_45 [6]) & (((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) arr_42 [i_15]))))), (min((min((((/* implicit */long long int) var_16)), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_39 [(unsigned char)13])) : (((/* implicit */int) arr_42 [i_15])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 13; i_17 += 4) 
        {
            for (short i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                {
                    var_48 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_44 [i_18 + 3])) ? (arr_44 [i_18 + 3]) : (((/* implicit */int) var_18)))) >> (((((/* implicit */int) max((var_11), (((/* implicit */short) arr_50 [i_18 - 1] [i_18 - 1] [i_18]))))) - (811)))));
                    var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551613ULL))) ? (((/* implicit */int) arr_50 [i_17] [(unsigned short)3] [i_17])) : (((/* implicit */int) (unsigned short)17808)))))));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)181)), (arr_49 [i_14])))) : (((((/* implicit */int) arr_46 [i_14] [i_14] [i_14])) + (((/* implicit */int) (signed char)4)))))))));
        var_51 = ((/* implicit */unsigned short) var_12);
    }
    for (signed char i_19 = 2; i_19 < 15; i_19 += 1) 
    {
        var_52 ^= ((/* implicit */_Bool) arr_36 [(unsigned char)9]);
        var_53 = ((/* implicit */short) min((max((arr_37 [i_19 + 1]), (arr_37 [i_19 - 1]))), (((((/* implicit */_Bool) arr_37 [i_19 + 1])) ? (((/* implicit */unsigned long long int) var_10)) : (var_14)))));
    }
}
