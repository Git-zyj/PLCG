/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151205
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
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_19 = 1293663122;
                    var_20 = 356964769;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = arr_6 [i_0];
                                arr_12 [i_0] [i_1] [i_1] [2] = ((/* implicit */int) ((((1293663123) | (arr_8 [i_1] [i_4] [i_4] [i_4] [i_4 - 1]))) == (((int) min((arr_4 [i_1 - 1] [i_1] [i_4]), (var_6))))));
                                var_22 = var_3;
                                arr_13 [i_4] [i_1] [i_2] [i_1] [8] = ((1293663122) << (((((-1161084988) + (1161085006))) - (18))));
                            }
                        } 
                    } 
                    var_23 += ((int) ((var_7) * (((/* implicit */int) ((790682343) == (-1293663108))))));
                    arr_14 [i_1] [i_1] [i_1] [i_1] = min((max((min((var_10), (arr_11 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]))), (var_15))), (max((var_12), (-1911106896))));
                }
                for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    var_24 = arr_5 [i_0 - 2] [i_0 + 1] [i_0] [i_1];
                    arr_18 [14] [i_1] [i_0] [i_5] &= ((int) min(((+(1955865821))), (min((arr_7 [i_0] [i_0] [i_0] [i_5 + 2]), (var_17)))));
                    arr_19 [i_0] [i_1 - 3] [i_1] [i_5] = min((-1), (15));
                }
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_25 ^= (-(arr_10 [i_1] [i_1] [13] [i_1 - 2] [i_1] [i_1 - 2]));
                    arr_22 [i_1] = min((((((/* implicit */_Bool) (~(986050647)))) ? (((/* implicit */int) ((arr_4 [i_0] [i_1] [15]) < (1293663123)))) : (((arr_15 [i_1] [i_1 + 1] [i_1]) - (var_15))))), (min((-1293663123), (((var_16) << (((arr_17 [i_0] [12]) - (1085319859))))))));
                }
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        arr_29 [i_1] = arr_8 [i_1] [0] [0] [i_8 - 2] [i_8 - 3];
                        var_26 = var_12;
                        arr_30 [i_1] [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -762270971)) ? (arr_10 [i_0] [i_1] [i_1] [i_7] [i_7] [i_8]) : (arr_16 [i_0])))) ? (arr_20 [i_0 + 1]) : (-10))));
                    }
                    var_27 = min((((((/* implicit */_Bool) var_17)) ? (1293663129) : (arr_24 [i_7] [i_0 - 1] [i_7]))), ((+(var_6))));
                }
            }
        } 
    } 
    var_28 = var_10;
}
