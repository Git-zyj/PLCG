/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137084
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
    var_13 = ((/* implicit */int) (+(1692757339U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [6U] [i_0] &= ((/* implicit */long long int) 1776556037);
        var_14 = ((/* implicit */int) max((var_14), (((arr_0 [(_Bool)1]) ? (((/* implicit */int) arr_0 [20LL])) : (((/* implicit */int) arr_0 [(unsigned char)8]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((max((arr_3 [i_1]), (arr_3 [i_1]))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 21; i_3 += 2) /* same iter space */
            {
                arr_12 [i_1] [i_3] [i_1] &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20975)) ? (-1776556038) : (((/* implicit */int) (short)20986))))) ? (min((((/* implicit */long long int) arr_3 [i_1])), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) arr_8 [i_3]))))))));
                var_15 = ((/* implicit */unsigned int) ((long long int) -1776556037));
                arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) max((((short) ((arr_8 [i_1]) <= (((/* implicit */int) var_0))))), (((/* implicit */short) (!(arr_3 [i_1]))))));
                arr_14 [i_1] [i_2] [i_3 - 1] [i_1] = ((/* implicit */_Bool) arr_6 [i_2]);
                arr_15 [i_1] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_1]))) : (arr_6 [i_2]))), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 2]))))) : ((+(arr_4 [i_1] [i_2]))));
            }
            for (int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
            {
                var_16 ^= ((((/* implicit */int) arr_3 [i_4 - 2])) * (((/* implicit */int) ((_Bool) arr_3 [i_4 - 2]))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_17 = ((/* implicit */int) var_2);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_24 [i_1] [i_1] = ((/* implicit */long long int) ((int) var_4));
                        arr_25 [i_5] [i_2] [i_4 - 2] [i_6] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : (var_11))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_4 - 1] [i_4 - 2])))))));
                    }
                    arr_26 [i_1] [i_1] = ((/* implicit */short) ((int) ((int) ((unsigned long long int) var_10))));
                    var_18 = ((/* implicit */_Bool) (short)14558);
                    var_19 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (-(arr_21 [i_1] [i_2] [i_2] [i_2] [i_5] [i_5])))), (((arr_6 [(short)6]) - (arr_6 [(_Bool)1])))))));
                }
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))))));
                    arr_29 [i_4] [i_4] &= ((/* implicit */long long int) ((7069092295397766331ULL) / (((/* implicit */unsigned long long int) 3371227994U))));
                    arr_30 [i_7] [i_2] [i_4] [i_4] [i_7] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-4272943269974191073LL))))));
                }
                for (unsigned int i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    arr_35 [i_1] [i_1] [i_4 - 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 2551904530U)) != (11579031361289793713ULL))) ? ((-(((((/* implicit */int) arr_9 [i_1] [i_2] [(short)13])) * (((/* implicit */int) arr_19 [i_1] [i_2] [i_1])))))) : (((/* implicit */int) ((2538009367864772961LL) >= (((long long int) var_9)))))));
                    arr_36 [i_1] [i_1] [i_4] [i_8 + 2] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_34 [i_8 - 2] [i_4 + 1] [i_4 + 1] [i_1])) ^ (((/* implicit */int) arr_34 [i_8 - 2] [i_4 + 1] [i_4 - 2] [i_1])))), (((((/* implicit */int) arr_34 [i_8 + 2] [i_4 - 2] [i_4] [i_1])) | (((/* implicit */int) arr_34 [i_8 + 3] [i_4 + 1] [i_2] [i_1]))))));
                    arr_37 [i_1] [i_1] [i_2] [i_4 - 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */long long int) max((((unsigned int) 509632757U)), (((/* implicit */unsigned int) arr_27 [i_1] [i_1] [i_4 - 1] [i_8]))))) : (864040573351126750LL)));
                    arr_38 [i_4] [i_4 + 1] [i_4] [i_4] [2ULL] [i_4] &= ((/* implicit */short) (!(((_Bool) ((unsigned int) -1776556038)))));
                }
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) arr_18 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */int) (((((_Bool)1) ? (11377651778311785285ULL) : (((/* implicit */unsigned long long int) -1776556038)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_45 [i_1] [i_1] [i_1] [i_2] [i_10] [i_1] [i_1] = (!(((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_4 - 1] [i_9] [i_10])) && (arr_16 [i_1] [i_1] [i_10]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_23 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) 3979730039U)) <= (17132702249221720865ULL)));
                        arr_49 [i_11] |= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (-(2538009367864772961LL)))) ? (((/* implicit */int) arr_27 [(short)20] [i_4] [i_4 + 1] [i_2])) : (((((/* implicit */_Bool) -615566024)) ? (((/* implicit */int) arr_20 [i_1] [i_2] [i_4] [i_9] [i_11])) : (((/* implicit */int) arr_44 [i_1] [15] [15])))))));
                        var_24 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -4462597234230992000LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) -2538009367864772961LL)))))) : (max((((/* implicit */long long int) (!(arr_17 [i_11] [i_2] [i_4 - 1])))), (((var_6) ? (-2730555678777188035LL) : (((/* implicit */long long int) -1973539591))))))));
                    }
                    var_25 -= ((/* implicit */int) min((max((arr_42 [i_1] [i_9] [i_4 - 2] [i_9] [i_9] [i_9] [i_4 + 1]), (arr_47 [i_1] [i_2]))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (1148446357U) : (((/* implicit */unsigned int) arr_21 [i_9] [i_1] [i_9] [i_2] [6LL] [i_9]))))))));
                }
                arr_50 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((long long int) -773052131))) && (((/* implicit */_Bool) ((unsigned int) arr_21 [i_1] [i_2] [i_1] [(_Bool)1] [i_2] [i_2]))))));
            }
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_34 [i_1] [i_1] [i_2] [8ULL]))));
            arr_51 [i_1] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1])) ? (arr_48 [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_39 [i_1] [i_2] [i_2] [(_Bool)1])))), (arr_48 [i_1] [i_1] [i_1] [i_1])));
        }
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        for (unsigned int i_13 = 3; i_13 < 21; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 21; i_14 += 4) 
            {
                {
                    arr_58 [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_13] [i_14 - 2])) && (((/* implicit */_Bool) arr_57 [i_13] [i_14 + 1])))))));
                    var_27 = ((/* implicit */int) (_Bool)0);
                    var_28 *= ((/* implicit */unsigned char) arr_52 [i_12] [15]);
                    arr_59 [i_13] [i_13] [9LL] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9955)) ? (((/* implicit */int) (unsigned char)104)) : (-1776556037)))), (var_2)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_13 - 2] [i_14 - 2]))))) : (((var_6) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_56 [i_14] [i_13] [i_13] [i_12]))))) : (((-1264891018795281091LL) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    var_29 = min((((unsigned int) 1776556036)), (((arr_54 [i_13] [i_14 - 2]) / (arr_54 [i_13] [i_14 - 1]))));
                }
            } 
        } 
    } 
    var_30 |= var_6;
}
