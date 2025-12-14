/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142267
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) 3720046444361764402LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3527689803U)))))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-29864)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_19 *= ((/* implicit */_Bool) (unsigned char)196);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_7 [i_1 + 2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) -2733390758898665657LL)))));
        arr_8 [i_1] = ((/* implicit */short) (-(arr_0 [i_1 + 3])));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-124)) ? (arr_1 [i_2]) : ((~(((/* implicit */int) arr_2 [i_2])))))), (min((((/* implicit */int) min(((signed char)-28), (((/* implicit */signed char) var_14))))), ((~(var_15)))))));
        var_20 ^= ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_21 = ((/* implicit */signed char) ((short) (signed char)100));
                var_22 ^= ((/* implicit */unsigned int) (-(((long long int) arr_1 [i_2]))));
                var_23 &= ((/* implicit */short) ((var_15) & ((+(((/* implicit */int) (signed char)-123))))));
            }
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_2 [i_3]))));
            arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)21)) : (arr_1 [i_2])));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_25 = ((/* implicit */signed char) -8011718677372423283LL);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_2]), (arr_1 [i_2])))) ? (min((((/* implicit */int) var_11)), (arr_1 [i_2]))) : (min((((/* implicit */int) var_17)), (arr_1 [i_2])))));
            arr_20 [i_5] [i_2] [(short)6] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (signed char)-127)))) ? (((((/* implicit */_Bool) 3527689803U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (3527689803U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (arr_19 [i_5] [i_2]))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2805243320U), (((/* implicit */unsigned int) var_1))))) ? (((arr_1 [i_5]) & (((/* implicit */int) (signed char)40)))) : (((/* implicit */int) arr_12 [i_2] [(signed char)14] [i_5])))))));
            arr_21 [i_5] = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_10 [i_2])) < (((/* implicit */int) ((unsigned short) var_3))))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((arr_15 [i_2] [3LL] [i_6] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-6006159913026588194LL)))) ? (((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 1] [i_7])) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_7])) != (arr_26 [i_2] [(unsigned short)10] [i_6] [(unsigned short)17])))))) : (min((((((/* implicit */int) var_16)) + (((/* implicit */int) (signed char)100)))), (((/* implicit */int) ((signed char) var_5))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 694957011U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : (-3720046444361764403LL)))));
                            arr_32 [i_9 - 2] [i_8] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)-100);
                            var_29 |= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_28 [i_9] [i_9 - 2] [i_9 - 2] [i_7] [i_7 - 1])))), (((var_0) >> (((((/* implicit */int) arr_28 [i_9 - 2] [i_9] [i_9 - 2] [i_9] [i_7 - 1])) - (178)))))));
                            arr_33 [i_6] [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)79)) | (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) -3720046444361764403LL)) : (523264ULL))))));
                            arr_34 [11ULL] [i_8] [i_8] [i_7 - 1] [i_6] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-15027))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_39 [i_7] = ((/* implicit */unsigned short) (~(max((var_2), (((/* implicit */int) (signed char)126))))));
                            arr_40 [i_2] [i_6] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) ((((/* implicit */int) (short)13905)) >= (((/* implicit */int) var_8))))), (((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) (short)-23246)))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (min((((/* implicit */long long int) var_11)), (-2470969280638275665LL)))))) ? ((~(((/* implicit */int) var_8)))) : (var_15))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_13 [i_2] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_16)) >= (arr_29 [i_6] [i_6])))) != (((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2])) ? (var_2) : (((/* implicit */int) var_1)))))))) : (min((2470969280638275665LL), (((/* implicit */long long int) (short)-23246))))));
                            var_32 += ((/* implicit */short) var_1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    var_33 = ((/* implicit */short) var_5);
                    arr_44 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) > (var_10)));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((unsigned char) 4294967295U))));
                    /* LoopSeq 3 */
                    for (short i_13 = 3; i_13 < 17; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((arr_42 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]) ? (((/* implicit */int) arr_47 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [7U])) : (((/* implicit */int) (unsigned char)254))));
                        arr_49 [i_2] [i_6] [i_7 - 1] [i_7 - 1] [i_12] = (!(((/* implicit */_Bool) (-(arr_43 [i_2] [i_7] [i_12 + 1] [i_13 - 3])))));
                        var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_46 [i_7 + 1] [i_7] [i_7 + 1] [i_7])) : (var_2)));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-51)))))));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) var_16);
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_7 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_19 [i_14] [12U])) : (arr_29 [i_2] [i_6]))) : ((~(((/* implicit */int) var_8)))))))));
                        var_40 = ((/* implicit */unsigned long long int) (+(var_5)));
                    }
                    for (int i_15 = 1; i_15 < 17; i_15 += 1) 
                    {
                        arr_54 [13] [i_12] [i_7 + 1] [i_12] [i_12] [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))));
                        var_41 = ((/* implicit */short) max((var_41), ((short)256)));
                    }
                    var_42 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_2] [i_2] [i_6] [i_2] [i_12]))));
                }
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_0) == (((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) (short)-23246)) ? (var_9) : (var_15)))))) ? (((/* implicit */unsigned int) var_0)) : (((unsigned int) var_6))));
            }
            arr_55 [i_6] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) 11749670204097124971ULL)) ? (min((3953014269U), (((/* implicit */unsigned int) (short)-13092)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_8))));
        }
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) 2147483647)))))) % (arr_13 [i_2] [i_2])))) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2470969280638275665LL))))), (((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10663))) : (0ULL)))))))));
        arr_58 [i_16] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(1438508155U)))) ? (((/* implicit */int) (unsigned char)118)) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7))))))), ((+(max((1305554119692274933LL), (((/* implicit */long long int) var_9))))))));
        /* LoopSeq 2 */
        for (long long int i_17 = 3; i_17 < 11; i_17 += 4) /* same iter space */
        {
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((max((((/* implicit */long long int) arr_50 [i_17 + 2] [i_17 + 1] [i_17 + 2] [(signed char)10] [i_17 - 3])), (3720046444361764402LL))) >= (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_50 [i_17 - 3] [8LL] [i_17 - 3] [12] [i_17 - 3]))))))))));
            var_47 *= (signed char)-55;
            var_48 ^= ((/* implicit */signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_47 [i_17 - 3] [i_17 - 1] [i_16] [i_16] [i_16]))));
        }
        /* vectorizable */
        for (long long int i_18 = 3; i_18 < 11; i_18 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_19 = 3; i_19 < 12; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    for (signed char i_21 = 2; i_21 < 12; i_21 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_66 [i_19 - 2] [i_21 - 1])) : (((/* implicit */int) arr_38 [i_16])))))));
                            var_50 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_18])) && (((/* implicit */_Bool) (unsigned char)75))))));
                            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
            } 
            arr_77 [i_16] [i_18] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -214703462)))) ? (((/* implicit */int) arr_63 [i_18 + 1] [i_18 + 1])) : (2147483638)));
            arr_78 [i_16] [(unsigned short)8] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)82))) : (((((/* implicit */_Bool) (signed char)126)) ? (arr_41 [i_16]) : (var_3)))));
        }
    }
}
