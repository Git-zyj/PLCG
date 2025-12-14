/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120553
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 4101301888357186011LL)) && (((/* implicit */_Bool) ((short) (_Bool)1)))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (1257801713)));
                                arr_13 [i_1 - 1] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (arr_9 [i_3] [i_3 + 2] [i_3] [i_4] [i_4]) : (arr_9 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_4])))));
                                var_23 = ((/* implicit */_Bool) arr_10 [i_0] [i_1 + 2] [i_1 + 2] [i_3] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) min((arr_0 [i_5 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_25 |= ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned int) var_4)) + (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2091788525U))))))) != (((/* implicit */unsigned int) (-(arr_1 [i_0] [i_0 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_7 = 3; i_7 < 8; i_7 += 2) /* same iter space */
    {
        var_26 += ((/* implicit */short) (((_Bool)1) ? (-522040709) : (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57342)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (_Bool)0))))), (max((var_3), (((/* implicit */unsigned int) arr_11 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 6; i_8 += 3) 
        {
            for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / ((((-(1257801701))) / (max((((/* implicit */int) (short)15596)), (-2147483631)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_6 [i_9 + 1] [i_8 + 2] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_21 [i_7 + 2] [i_7 - 3] [i_7 - 3]))));
                        var_30 = ((/* implicit */long long int) arr_27 [i_8 - 1]);
                    }
                    var_31 -= ((/* implicit */unsigned int) (-((-(522040692)))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 6; i_11 += 3) 
                    {
                        for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) min((((/* implicit */int) arr_15 [i_8] [i_9 - 2] [i_11 + 3] [i_11 + 4])), (arr_3 [i_9])));
                                arr_39 [i_12] [i_11] [i_11] [i_9] [i_9 - 2] [i_11] [i_7] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_13 = 3; i_13 < 8; i_13 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_14 = 2; i_14 < 9; i_14 += 3) 
        {
            for (signed char i_15 = 2; i_15 < 9; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_33 &= ((((/* implicit */_Bool) (+(arr_1 [i_14 - 1] [i_14 + 1])))) ? ((~(((/* implicit */int) (unsigned short)46976)))) : (((/* implicit */int) ((((/* implicit */long long int) -522040709)) <= (-51693513041999384LL)))));
                        var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_15 - 2] [i_14 + 1])) ? (((((/* implicit */_Bool) arr_40 [i_15 - 2] [i_14 + 1])) ? (arr_40 [i_15 - 1] [i_14 - 1]) : (arr_40 [i_15 + 1] [i_14 - 2]))) : (((arr_40 [i_15 - 2] [i_14 - 1]) % (arr_40 [i_15 - 2] [i_14 - 1])))));
                    }
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        arr_55 [i_13] [i_14 - 1] [i_15 + 1] [i_13] [i_15 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_42 [i_14 - 2]) & (arr_42 [i_14 + 1])))) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_28 [i_13] [i_14 - 2] [i_15]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48704))) + (366301665U)))));
                        arr_56 [i_15 + 1] = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_17 [i_13] [i_14 - 2] [i_15 - 1])), (var_4)))));
                        var_35 |= (+(max((((/* implicit */unsigned long long int) -7328641292270703668LL)), (18014396361998336ULL))));
                    }
                    var_36 = ((/* implicit */unsigned short) min((12930618865077886596ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 2; i_18 < 7; i_18 += 3) 
                    {
                        for (long long int i_19 = 1; i_19 < 9; i_19 += 1) 
                        {
                            {
                                arr_62 [i_18] [i_14 - 1] [i_15] [i_18] [i_19 - 1] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) << (((((/* implicit */_Bool) arr_17 [i_18] [i_15 - 1] [i_14 - 2])) ? (((((/* implicit */_Bool) 5516125208631665020ULL)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_19 + 1])))))))));
                                var_37 = arr_58 [i_14];
                                var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) min((arr_31 [i_19 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 2]), (((/* implicit */unsigned short) (unsigned char)64))))) : (((/* implicit */int) ((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_4))))) >= (((-7328641292270703668LL) & (var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_49 [i_13 - 1] [i_13 + 1]), (arr_49 [i_13 - 2] [i_13 - 2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1073741824)))))) & (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) 1558476017)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13])))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36547))) & (((arr_32 [i_13] [(_Bool)1] [i_13 + 1] [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36529))) : (((((/* implicit */_Bool) 2405581454U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_13]))) : (arr_40 [i_13] [i_13])))))));
    }
    for (int i_20 = 1; i_20 < 13; i_20 += 3) 
    {
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_20 + 3] [i_20] [i_20] [i_20 + 3] [i_20 + 2] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_20 + 3] [i_20 + 3] [i_20 - 1] [i_20 + 3] [i_20 + 3] [i_20] [i_20]))) : (5478754746154563776ULL)))) ? (arr_3 [i_20 + 1]) : (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)197))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 522040699)))) : (18014396361998336ULL)));
        /* LoopSeq 2 */
        for (short i_21 = 1; i_21 < 16; i_21 += 2) 
        {
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37680)) ? (7328641292270703683LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27849)))))) ? (((unsigned long long int) arr_4 [i_20])) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_17 [i_21] [i_21] [i_20 - 1])), (522040699))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_22 = 1; i_22 < 16; i_22 += 4) 
            {
                for (long long int i_23 = 3; i_23 < 16; i_23 += 2) 
                {
                    for (int i_24 = 3; i_24 < 16; i_24 += 2) 
                    {
                        {
                            arr_76 [i_21] [i_22 - 1] [i_23] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_69 [i_21])) ? (3255383226U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_20] [i_21 - 1] [i_20] [i_22] [i_21 - 1] [i_24])) % (-1564912421)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_21] [i_22 - 1] [i_21] [i_22 - 1] [i_23] [i_23 - 1]))) : (((unsigned long long int) (short)32745))));
                            var_43 = ((/* implicit */long long int) max((((unsigned long long int) arr_17 [i_20 + 3] [i_21 - 1] [i_21 - 1])), (((((/* implicit */_Bool) 556495344U)) ? (7214858055844160208ULL) : (((((/* implicit */_Bool) var_11)) ? (16315451523086036483ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (2405581454U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)28))))) : (4183370631U)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1257801713)), (3592496215002109380ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64512)))))) : (arr_9 [i_23] [i_23] [i_23 - 2] [i_24 - 3] [i_23 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_1 [i_20 + 2] [i_21 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -5931965584859022761LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_21] [i_21] [i_21] [i_21] [i_21] [i_24])) && (((/* implicit */_Bool) 3592496215002109380ULL))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_25 = 1; i_25 < 16; i_25 += 2) 
        {
            arr_79 [i_20] [i_20] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)63)) > (-101806058))));
            var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((8126464U) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)81)), ((unsigned short)45976))))))))));
        }
        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_17 [i_20] [i_20] [i_20])) ? (((-6691033241771056356LL) - (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_20]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_66 [i_20 + 3] [i_20] [i_20]))))))), (((/* implicit */long long int) var_7)))))));
    }
    var_47 += ((/* implicit */short) var_15);
    var_48 = var_15;
}
