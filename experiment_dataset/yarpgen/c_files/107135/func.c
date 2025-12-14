/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107135
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) / (arr_3 [i_0] [i_0] [i_0])));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
            var_11 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)177))))), (504403158265495552ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [0ULL])))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) + (((((/* implicit */_Bool) 72703064)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0])))))) + (min((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_1])))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)149)) ? (((((((/* implicit */_Bool) (unsigned char)246)) ? (var_2) : (arr_3 [i_2] [(unsigned char)1] [(unsigned char)1]))) * (((/* implicit */int) ((72703072) < (((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */int) ((unsigned char) (unsigned char)20)))));
            }
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_15 [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(1762743090)));
                    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */int) arr_2 [i_3 + 2])) : (((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 1] [i_3] [i_1]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    arr_18 [7] [12ULL] [5] [i_1] [i_0] [i_0] = max((arr_8 [i_3] [i_3] [i_3 - 1] [i_3]), (((arr_8 [i_3] [i_3] [i_3 - 1] [i_3]) * (arr_8 [i_3 + 2] [i_3] [i_3 + 1] [i_3]))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [3ULL] [i_3 + 2] [7] [i_3 - 1])) != (min((var_9), (((/* implicit */int) arr_17 [i_0] [i_3 + 2] [i_3] [i_3 + 2]))))));
                    arr_19 [10] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_3 + 2])) < (2147483647))));
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_1]);
                    var_16 = ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_5])))) + (((/* implicit */int) max((var_7), ((unsigned char)161))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_7)), (arr_13 [i_5]))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (arr_3 [i_5] [i_3] [(unsigned char)6])))))))) : ((~(arr_7 [i_5]))));
                }
                arr_21 [6ULL] = ((/* implicit */unsigned char) 70368744177663ULL);
            }
            for (int i_6 = 2; i_6 < 12; i_6 += 2) 
            {
                arr_24 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) max((arr_8 [i_0] [0ULL] [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) arr_10 [i_0] [i_0] [i_6]))))) > (min((var_1), (var_1))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_12 [i_0] [0] [4] [i_6])))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1073741824)), (min((((/* implicit */unsigned long long int) (unsigned char)88)), (var_0))))))));
                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [(unsigned char)4] [(unsigned char)4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_6] [(unsigned char)10] [i_0]))) : (918005474929239157ULL)))) ? (((/* implicit */unsigned long long int) ((-1073741824) - (-1856782553)))) : ((+(arr_16 [i_0] [(unsigned char)8] [i_1] [i_1] [8] [(unsigned char)8]))))), (((((/* implicit */_Bool) ((unsigned char) 2021679400827436864ULL))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_6] [i_1] [i_0]) < (((/* implicit */unsigned long long int) arr_11 [i_0]))))))))));
            }
            arr_25 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) -1073741824));
        }
        arr_26 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551593ULL)) && (((/* implicit */_Bool) (unsigned char)195)))))));
        arr_27 [(unsigned char)3] [i_0] = (((~(((1939603737065517541ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) % (29ULL));
        var_19 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))))))) ^ (arr_8 [i_0] [i_0] [i_0] [i_0]))), (((arr_8 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1380494428)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) -1073741824);
        arr_31 [(unsigned char)10] = arr_17 [(unsigned char)11] [i_7] [i_7] [i_7];
        var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))) > (min((arr_1 [i_7]), (arr_1 [i_7])))));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_37 [(unsigned char)17] [i_9] &= arr_35 [(unsigned char)14] [i_9];
            arr_38 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_8] [i_8 + 1])) || (((/* implicit */_Bool) var_8))));
        }
        arr_39 [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_8] [i_8])) * (((/* implicit */int) (unsigned char)179))))) : (arr_33 [i_8 + 4] [i_8])));
    }
    for (unsigned char i_10 = 4; i_10 < 14; i_10 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (~(min((arr_32 [i_10 + 1] [2]), (((/* implicit */unsigned long long int) arr_41 [i_10 + 3]))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((8621999464395008177ULL) & (((/* implicit */unsigned long long int) min((arr_42 [i_10 - 1] [i_10]), ((~(((/* implicit */int) arr_34 [9ULL] [(unsigned char)3]))))))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) | (max((16704915272036578942ULL), (((/* implicit */unsigned long long int) arr_41 [i_10]))))))) ? ((~(var_1))) : (min((max((9824744609314543439ULL), (((/* implicit */unsigned long long int) arr_36 [i_10] [9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2058578848)) ? (507904) : (arr_41 [i_10])))))))))));
        arr_43 [i_10] = 1884315395;
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_32 [i_10 + 1] [i_10 - 2]))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_10 - 4] [i_10 + 3])) % (((/* implicit */int) arr_35 [i_10 + 2] [i_10 - 1]))))))))));
    }
    for (int i_11 = 3; i_11 < 20; i_11 += 2) 
    {
        arr_46 [i_11] = ((/* implicit */int) min(((-(min((var_0), (((/* implicit */unsigned long long int) (unsigned char)251)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_45 [i_11])))))));
        arr_47 [i_11] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_45 [i_11])) ? (arr_44 [i_11] [i_11]) : (((/* implicit */int) arr_45 [i_11])))) + ((+(arr_44 [i_11] [i_11 - 2]))))) > ((-(1073741824)))));
    }
    for (int i_12 = 2; i_12 < 9; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                for (int i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_12 - 2] [i_12] [i_13] [i_14] [i_14] [7ULL])) / (arr_11 [(unsigned char)7])))) : (((((/* implicit */_Bool) arr_50 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_13]))) : (var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_12] [i_12] [7] [i_15])) ? (arr_7 [i_13 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_12])) << (((var_8) - (11699213952732734200ULL))))))))) ? ((~(12155230406658961498ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_12] [i_12 + 1] [i_14] [i_15 - 1]))) & (max((16542049786641050664ULL), (arr_29 [i_12]))))))))));
                    }
                } 
            } 
        } 
        arr_60 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) min((2147483647), (arr_59 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 1] [i_12]))));
    }
}
