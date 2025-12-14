/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111715
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_12)) : (-3827341628021909991LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50567)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (965251528U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 &= ((/* implicit */unsigned char) min((min((arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                        arr_11 [i_3] [i_0] [i_0] [5U] = ((/* implicit */signed char) min((max((max((7699827389504035927LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_0 [i_0])))), (2453123815907130842LL)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (short)-12411)), (((((/* implicit */int) var_0)) / (((/* implicit */int) var_5))))));
                        var_16 += var_2;
                    }
                    arr_13 [i_0] [(signed char)24] = ((/* implicit */int) (_Bool)1);
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_7))))) ? (7699827389504035927LL) : (arr_8 [i_0] [0] [i_0] [i_1] [i_2])))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max(((~(((((/* implicit */long long int) arr_6 [i_0] [23LL] [i_5])) & (-7699827389504035918LL))))), (((((((/* implicit */_Bool) -6920567)) ? (7699827389504035917LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7699827389504035927LL)) ? (((/* implicit */int) (unsigned short)1277)) : (((/* implicit */int) (unsigned short)1298))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 7699827389504035933LL)))) : ((-(((7699827389504035933LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 7699827389504035910LL))) ? (((long long int) arr_17 [i_0] [i_0] [i_2] [i_4] [i_6])) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_5))))))))));
                            arr_24 [i_0] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */int) (-(-7699827389504035918LL)));
                        }
                        for (signed char i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            var_19 ^= ((/* implicit */_Bool) (((+(((-7699827389504035916LL) - (((/* implicit */long long int) 6920566)))))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))));
                            arr_29 [i_0] [i_1 - 1] [i_0] [i_4] [(signed char)0] = ((/* implicit */unsigned int) (signed char)-27);
                            var_20 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_7] [i_4] [i_7 - 1] [i_4] [i_0])) | (((/* implicit */int) arr_19 [i_7] [i_4] [i_7 + 1] [i_4] [i_1 + 2]))))) | (((long long int) 7699827389504035918LL))));
                            arr_30 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2527896885931530909LL)) ? (((((/* implicit */_Bool) -7699827389504035918LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_15 [i_0] [i_1] [i_1] [i_4] [i_7])))))) : (((((/* implicit */_Bool) var_4)) ? (14786972232735473785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            var_21 = min((arr_6 [i_0] [10U] [i_4]), (((/* implicit */unsigned int) ((min((var_1), (var_9))) ? (((((/* implicit */_Bool) arr_8 [(short)6] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (arr_4 [(signed char)4] [i_1] [i_4]))) : (6920554)))));
                        }
                        arr_31 [i_0] [i_0] [i_1] [i_0] [i_2] &= ((/* implicit */_Bool) (+((((-(((/* implicit */int) arr_5 [i_4] [i_4])))) * ((+(arr_4 [i_1 + 1] [i_1 + 1] [i_4])))))));
                        arr_32 [i_0] [i_1 - 1] [i_2] [i_4] [8LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)122)))) % (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (var_11) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-123)))))))) : (max((min((((/* implicit */long long int) (unsigned short)19798)), (-7699827389504035925LL))), (arr_16 [i_1 + 1] [i_1 - 1])))));
                        arr_33 [i_0] [23LL] [i_1] [23LL] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */long long int) 1281629010)))))) == ((-(arr_25 [i_0] [i_0] [i_0] [i_1 + 2] [i_2] [i_1 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (((((/* implicit */_Bool) -7699827389504035918LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (var_12))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55228)) ^ (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [4LL] [i_1]))))), (min((-7699827389504035918LL), (((/* implicit */long long int) (short)-3997))))))));
                    }
                    for (short i_8 = 2; i_8 < 24; i_8 += 2) 
                    {
                        arr_38 [i_0] [(unsigned short)20] [i_2] [i_0] [23LL] = ((/* implicit */signed char) ((((((/* implicit */int) arr_28 [i_1 + 1] [i_1] [i_2] [i_8 - 1] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_8 - 2])))) + (((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((-7699827389504035925LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))))) : (((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) * (((((/* implicit */_Bool) (~(arr_16 [(unsigned short)7] [3LL])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [i_2] [i_8]))) : (5588517129049736611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (+(((((/* implicit */int) var_6)) * (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6))))))));
}
