/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143349
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) var_12);
                                var_15 = ((/* implicit */long long int) arr_3 [i_2]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), ((~(var_9)))))) ? (min((((/* implicit */unsigned int) 1218348245)), (((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (7U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)27900))))))))));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [(signed char)0] [(unsigned short)0])) != (6958555955046170451ULL)));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-97)), (arr_18 [(short)12] [i_1] [(short)12] [i_1 + 1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) arr_9 [i_1 + 2] [i_1 - 2]))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (int i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 7992616026647593644ULL))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (min((arr_8 [i_8] [i_8] [i_8] [i_7] [i_7]), (((/* implicit */unsigned int) var_7))))))) ? (((/* implicit */int) (!(((7992616026647593644ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((14716273694844282958ULL) | (7992616026647593628ULL)))))))));
                /* LoopSeq 3 */
                for (short i_9 = 4; i_9 < 17; i_9 += 2) 
                {
                    arr_30 [i_7] [i_8 - 2] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)20426)), ((unsigned short)50957)))) ? (((10454128047061957987ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [2ULL] [i_8] [i_8] [i_7] [i_8 + 3] [i_7]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                    arr_31 [(unsigned char)10] [(unsigned short)5] [i_9] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)4430)))) : (((((/* implicit */_Bool) var_10)) ? (2091911960U) : (((/* implicit */unsigned int) arr_3 [i_9 - 3]))))));
                    var_22 = ((/* implicit */unsigned long long int) var_7);
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)56)), (7992616026647593631ULL))))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 |= ((/* implicit */int) ((5977901206448040654ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511)))));
                        arr_36 [i_7] [i_10] [i_7] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) 15346516587815766076ULL)) ? (var_3) : (((unsigned long long int) ((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */int) (signed char)122)) : (arr_3 [i_7]))))));
                        var_25 = ((/* implicit */unsigned long long int) (((((((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) + (2147483647))) >> (((((/* implicit */int) var_5)) + (54))))) ^ (((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [i_9]))));
                        var_26 = ((/* implicit */short) (-((~(arr_20 [i_7] [i_8 + 2] [i_10])))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((3730470378865268657ULL), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_7)), (var_10))))))) && (((/* implicit */_Bool) var_11))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_13))))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) arr_26 [i_7] [i_8] [i_9])))))), (((/* implicit */unsigned long long int) (+(2203055335U)))))))));
                        var_29 = ((/* implicit */long long int) min((var_29), ((+(var_0)))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) var_11);
                        arr_41 [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7992616026647593628ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4429))) : (695635125810794348ULL)));
                    }
                }
                for (short i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) ((var_7) ? (((long long int) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) arr_12 [0LL] [i_7] [12U] [i_8] [i_8] [i_13] [0LL]))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_7))))), ((+(((/* implicit */int) (unsigned short)57604)))))))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (~(max((arr_3 [i_8 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) (short)16408))))))))))));
                                arr_50 [i_7] [i_8] [i_13] [i_13] [i_14] [i_15] |= ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    var_34 += ((/* implicit */unsigned int) ((unsigned long long int) (short)-31596));
                }
                for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_16] [i_7] [(short)0] [i_8 - 3] [i_7] [i_7]))) >= (var_8))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            {
                                var_36 ^= ((/* implicit */unsigned char) arr_34 [10U] [i_17] [i_16] [i_18]);
                                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 10454128047061957967ULL)) ? (1073741696LL) : (-1403803917750078307LL))))))));
                                var_38 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_48 [i_7] [(signed char)3] [i_16] [i_17] [i_18])))));
                                var_39 = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_40 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))))), (var_6)));
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 11; i_21 += 2) 
                {
                    for (short i_22 = 1; i_22 < 13; i_22 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) 7LL)), (10454128047061957987ULL))) << (((min((((((/* implicit */int) (short)-31596)) - (((/* implicit */int) var_10)))), (((/* implicit */int) min((arr_27 [i_19] [i_20]), (var_7)))))) + (31547)))));
                            arr_66 [i_19] [i_19] [i_19] [i_19] [i_21] [i_22] = ((/* implicit */short) var_11);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_58 [i_19] [i_22 - 1]), (((/* implicit */short) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-1250603897168943937LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        {
                            arr_72 [i_24] [i_19] = ((/* implicit */signed char) min((var_1), (((/* implicit */long long int) max((((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_16 [i_19] [i_20] [(signed char)1] [i_19])))))));
                            arr_73 [(_Bool)1] [(short)0] [i_19] [i_24] = ((/* implicit */unsigned short) 8216535893553233031LL);
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((_Bool) ((var_11) << (((((unsigned long long int) var_12)) - (15375279505053507941ULL)))))))));
            }
        } 
    } 
}
