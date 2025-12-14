/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13998
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
    var_13 = ((/* implicit */unsigned int) var_11);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (-4767073572325955792LL)))), ((-(14232059786967753413ULL))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 0ULL)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40865)) || (((/* implicit */_Bool) var_4))))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [6U] [7]))) <= (var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)55984), (((/* implicit */unsigned short) (signed char)127)))))) : (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62351)))))))));
                var_16 = ((/* implicit */long long int) max(((-(5299043053439948419ULL))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (17579509408122070534ULL)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1] [(_Bool)1] [i_0])), (53441129944799263ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))))))));
                var_17 = max(((unsigned char)178), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122)))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_3] = ((/* implicit */int) (+(arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])));
                                var_18 = ((/* implicit */unsigned char) 1298503736);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1] [i_2 - 3] [i_2] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_1] [(short)11] [i_1] [(short)11])) : (((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 0LL))) ? (-1485541347) : (((/* implicit */int) ((unsigned short) var_6)))));
                }
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) 2075036507)), (9497730597541850208ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-99)) ? (min((((/* implicit */unsigned int) arr_2 [6LL])), (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)0))))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_12 [i_0 + 1] [i_0 + 1] [i_5 - 2] [i_5 + 1]), (arr_12 [i_0 + 1] [i_0 + 1] [i_5 - 2] [i_5 + 1]))))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) 0U);
                                arr_28 [i_7] [i_0] [i_6] [i_1] [i_0] [i_7] = ((/* implicit */int) ((((2492521663259009031LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32363))))) + (((/* implicit */long long int) (~(((/* implicit */int) (short)-2410)))))));
                                var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [0ULL] [i_0 + 1] [i_1])) - (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [(unsigned char)1]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)88)) + (((/* implicit */int) var_1)))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((int) var_6));
                        arr_31 [11LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) : (12920177987941475075ULL)));
                        var_27 = var_7;
                    }
                    var_28 = ((/* implicit */unsigned char) (+(15ULL)));
                    arr_32 [i_6] = ((/* implicit */long long int) arr_13 [i_0 - 1]);
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    arr_36 [i_0] [2] [2] = ((/* implicit */unsigned char) ((short) 1117744836794960181ULL));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_1] [(unsigned char)8] [i_0] [(unsigned char)8] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1176515133))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((unsigned long long int) (_Bool)1)))));
                            arr_45 [i_11] [i_11] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((signed char) (+(min((((/* implicit */unsigned int) var_3)), (1562251054U))))));
                            arr_46 [i_11] [3U] [i_0] [i_0] [i_1] [i_11] = ((/* implicit */short) min((((unsigned int) arr_41 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])), (((/* implicit */unsigned int) max((((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) var_5))))), (((signed char) var_11)))))));
                            arr_47 [i_11] [i_11] [2] [i_1] [i_11] = ((/* implicit */unsigned char) arr_29 [(short)1] [i_11] [i_10] [i_1] [i_0 + 1]);
                        }
                        arr_48 [i_11] [(unsigned char)11] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */unsigned short) (((+(((32767) << (((((/* implicit */int) arr_26 [i_0] [i_0] [i_11] [i_1] [i_10] [i_10] [12ULL])) - (179))))))) != (((((/* implicit */_Bool) (unsigned short)20461)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned short) (((+(((32767) << (((((((((/* implicit */int) arr_26 [i_0] [i_0] [i_11] [i_1] [i_10] [i_10] [12ULL])) - (179))) + (165))) - (17))))))) != (((((/* implicit */_Bool) (unsigned short)20461)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_13 = 4; i_13 < 9; i_13 += 3) 
                    {
                        var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) 17968479418931496671ULL))))) - (max((((/* implicit */int) ((451668436U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))))), (min((32766), (((/* implicit */int) var_9)))))));
                        arr_51 [i_10] [i_13 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (((((/* implicit */_Bool) (-(506427289)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_19 [i_13] [i_1] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [6U] [i_0] [6U])))))))));
                        arr_52 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */_Bool) (unsigned short)29550);
                    }
                }
            }
        } 
    } 
}
