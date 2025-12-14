/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175153
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned long long int) (short)-29820)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_1 [i_0])) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (var_13)))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ^ (-2266605271990703198LL)))), (var_15)));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 1339110068231601026ULL)) ? (((((/* implicit */_Bool) 17107634005477950593ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) 6449293095583135355LL)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) min((2266605271990703202LL), (((/* implicit */long long int) (_Bool)1))))), (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) -5471550291579459479LL)))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2266605271990703203LL), (((/* implicit */long long int) ((unsigned int) arr_6 [(signed char)11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) : ((~(17107634005477950589ULL)))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (!((!((!(var_12)))))));
        var_20 = ((/* implicit */short) (((~(((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (1829165653))))) >= (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) ((1954110066U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))) : (((/* implicit */int) arr_1 [i_2]))))));
    }
    for (int i_3 = 4; i_3 < 23; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (_Bool)1))));
                        var_22 &= ((/* implicit */long long int) arr_20 [i_3 - 4] [i_3 - 4] [i_5] [i_5] [i_3 - 4] [i_3 - 4]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_23 &= ((/* implicit */short) var_2);
                arr_24 [i_7] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 1954110066U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-88))));
            }
        }
        /* LoopSeq 3 */
        for (int i_8 = 1; i_8 < 24; i_8 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)2640))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)103))) % (arr_16 [i_3] [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)150)) && (((/* implicit */_Bool) arr_19 [i_3 - 3])))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((((((long long int) (short)-10561)) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)62896)) - (62855)))))));
                            arr_38 [i_11] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((arr_37 [i_9 + 3] [i_8 - 1] [i_11]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_3 - 3] [i_3 - 3]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53747))) * (2147481600U)))));
                            var_27 = ((/* implicit */long long int) ((min((max((arr_19 [i_3 - 2]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((1073741823) - (1073741776)))));
                            var_28 ^= ((((((/* implicit */_Bool) var_1)) ? (arr_34 [i_9 + 2] [(short)12] [i_9 - 1] [i_9 - 2] [i_9 + 1]) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) 2266605271990703197LL)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18537))))));
                        }
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63230)) ^ (((/* implicit */int) var_5))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((17107634005477950589ULL) < (var_3))))))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
            {
                arr_42 [i_3 - 4] [i_12] [i_12] [i_3 - 4] = ((/* implicit */short) 18446744073709551615ULL);
                arr_43 [i_3] [i_12] [i_12 + 1] = ((/* implicit */unsigned int) (unsigned short)31930);
                arr_44 [i_3] [i_8 + 1] [i_12] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (arr_27 [i_8 + 1] [i_12 - 1])))) & (((unsigned long long int) ((short) (unsigned char)112))));
            }
            for (short i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) -691886208))))));
                arr_49 [i_13] [i_13] = ((/* implicit */unsigned short) (~(max(((+(17107634005477950585ULL))), (((/* implicit */unsigned long long int) (-(8589934590LL))))))));
            }
            /* vectorizable */
            for (short i_14 = 1; i_14 < 21; i_14 += 1) /* same iter space */
            {
                arr_54 [i_8] [i_14] = ((/* implicit */signed char) var_3);
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
                {
                    var_31 = ((/* implicit */long long int) min((var_31), (var_0)));
                    var_32 = ((/* implicit */short) (-(3593693399713018338ULL)));
                    arr_58 [i_15] [i_14] [i_15 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1325794733290874352ULL) % (var_3)))) ? (((/* implicit */int) ((signed char) 3204206866823085190ULL))) : (((/* implicit */int) (short)-1))));
                }
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    arr_61 [i_8] [i_14 + 4] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) > (arr_34 [i_14 + 2] [i_14] [i_14] [i_14] [i_14 + 4]))))) ^ (arr_16 [i_3] [i_16] [i_14])));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_12)))))))));
                    var_34 |= ((/* implicit */unsigned long long int) (+(((int) 3243209279352328811LL))));
                }
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7276852048951452156LL)) ? (((/* implicit */int) (_Bool)1)) : (589927097))))));
                    var_36 = ((/* implicit */unsigned int) (+(var_3)));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(((arr_19 [i_17]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_8]))))))))));
                    arr_64 [(unsigned short)6] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    arr_65 [15LL] [i_8] [15LL] [(signed char)11] = (~(arr_16 [2ULL] [i_8 + 1] [2ULL]));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 1; i_18 < 24; i_18 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) ((max((5408995822094388256ULL), (((/* implicit */unsigned long long int) 2887370795U)))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_47 [i_3 - 4] [i_3] [i_3])))))));
                arr_68 [i_3] [7ULL] [i_18] = ((/* implicit */unsigned int) (_Bool)1);
            }
            var_39 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned char)154)) ? (arr_33 [23LL] [i_3 + 1] [i_8 + 1] [i_3 + 1]) : (arr_33 [i_3] [i_3 - 4] [i_8 - 1] [i_8 - 1]))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            arr_71 [i_19] = ((((((/* implicit */_Bool) -3661509379519005615LL)) || (((/* implicit */_Bool) var_2)))) ? (max((max((arr_22 [i_19] [(_Bool)1] [(_Bool)1] [i_3 - 3]), (((/* implicit */unsigned long long int) 7035162142854835448LL)))), (((/* implicit */unsigned long long int) (+(arr_52 [i_3] [i_3] [i_19])))))) : (((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_19] [i_19] [i_3 + 2] [i_3]))) > (7035162142854835448LL))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_31 [i_3] [i_3 + 2] [i_3] [i_3])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((arr_34 [i_20] [i_3 - 3] [2ULL] [i_3 - 3] [i_3 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -7035162142854835448LL)))))))));
            var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 3] [i_3 + 2])) ? (arr_5 [i_3 - 1] [i_3 - 3]) : (((/* implicit */long long int) var_13))));
        }
    }
}
