/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150977
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = max((((arr_0 [i_1 + 1]) >> (((arr_0 [i_1 + 1]) - (1819119110))))), (-11471466));
                var_16 = ((((/* implicit */_Bool) 11471489)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) : (((arr_1 [i_1 + 1]) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                var_17 = min(((~(1008))), (((int) 11471487)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 2; i_2 < 24; i_2 += 1) 
    {
        arr_6 [i_2] = ((int) arr_5 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 24; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_2 - 1] [i_3] = ((((/* implicit */int) ((((/* implicit */_Bool) ((-1009) + (arr_13 [10] [4] [10])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_2]) : (-11471479))))))) * ((-(-11471452))));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) max((arr_7 [7] [4] [i_3]), (max((var_5), (var_0)))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_4 [6] [i_3 + 1]) : (((((/* implicit */_Bool) -639334325)) ? (-2019624562) : (1708266090))))) : ((+(1019))));
                        arr_19 [i_3] [i_4] [i_4] [i_3] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1610612736)) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : (var_6))), ((~(var_11)))))) ? (min((min((var_6), (268173312))), (var_14))) : ((-(-1708266112))));
                    }
                    var_18 = min(((~(arr_4 [i_2 + 1] [i_2 + 1]))), (((/* implicit */int) ((((((-1767836862) + (2147483647))) >> (((11471500) - (11471486))))) == (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                    var_19 = ((int) ((int) arr_11 [i_2 - 2] [i_3] [i_3 + 1] [i_3 + 1]));
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), ((-((-(((int) -1708266062))))))));
        arr_22 [i_6] = ((int) (+(var_4)));
        arr_23 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (min((1053907517), (var_4))) : (-2092072564)))) ? (((/* implicit */int) min((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))), (((-1) <= (arr_10 [11])))))) : (max((1708266090), (-1192959440))));
    }
    var_21 = var_12;
}
