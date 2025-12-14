/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128534
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
    var_19 = (+(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (var_5))) != (var_18)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_20 = ((/* implicit */int) max((var_20), (arr_5 [i_0] [i_1] [3])));
            var_21 = min((((int) -1991760918)), (min((arr_1 [i_1]), (arr_0 [i_0] [i_0]))));
            var_22 = min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (((int) arr_0 [i_0] [i_1])));
            arr_7 [i_0] [i_1] = arr_1 [i_0];
            var_23 = min((((((/* implicit */_Bool) 1991760891)) ? (-18) : (-1991760908))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (-2147483644)))) ? (var_8) : (((((/* implicit */_Bool) 901731976)) ? (-1585124782) : (arr_5 [i_0] [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_2 [i_2])))));
            var_25 = ((/* implicit */int) max((var_25), ((-(((arr_1 [i_0]) - (arr_1 [i_2])))))));
        }
        var_26 = arr_2 [i_0];
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            var_27 = arr_12 [i_0] [i_0] [7];
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (((~(arr_2 [i_3 + 1]))) < ((+(arr_11 [i_3 + 1]))))))));
        }
        arr_13 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(arr_12 [i_0] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
        arr_14 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (var_2)))) ? (arr_1 [i_0]) : (var_18)))) ? ((+(arr_9 [i_0]))) : (((int) arr_2 [i_0])));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_21 [i_4] [1] [i_4] = arr_11 [i_5];
            arr_22 [i_4] [i_4] = ((arr_3 [i_5]) % (((int) var_0)));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_26 [i_4] [2] = (((~(min((arr_18 [i_4]), (arr_2 [16]))))) / (min((1678487177), ((~(arr_18 [i_4]))))));
            var_29 = min((-1428797955), (32505856));
            arr_27 [i_4] [i_6] = ((((/* implicit */_Bool) min((arr_25 [i_4] [i_6] [i_4]), (arr_12 [i_6] [i_4] [i_4])))) ? (((/* implicit */int) ((-1012265509) <= (var_15)))) : (((int) 2045021821)));
        }
        var_30 = ((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (arr_11 [i_4]) : (arr_4 [i_4] [i_4]))) / (min((arr_11 [i_4]), (var_0))));
    }
    var_31 = var_10;
    var_32 = min((((((/* implicit */_Bool) ((int) -1585124763))) ? (min((var_3), (var_3))) : (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) min((680078422), (-127953637))))))));
    var_33 = ((((/* implicit */_Bool) (~(min((646775054), (258048)))))) ? (-1991760916) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (var_17))) : (((((/* implicit */_Bool) var_16)) ? (-1207143118) : (var_11))))));
}
