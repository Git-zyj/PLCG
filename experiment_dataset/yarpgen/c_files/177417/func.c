/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177417
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0] [i_0]))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0] [i_0] [i_0 + 2])))))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [i_0 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(signed char)4] [(signed char)4] [(signed char)4] [i_3] [(signed char)4])) * (((/* implicit */int) arr_5 [i_2 + 2] [i_3] [i_2 + 2] [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0] [(signed char)14] [i_2] [i_0])) / (((/* implicit */int) arr_1 [i_4] [(signed char)8])))) : (((((/* implicit */int) arr_6 [i_0] [8])) * (((/* implicit */int) arr_8 [(signed char)12] [6] [i_2] [i_3])))))))))));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0 - 1])))))))));
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [(signed char)18] [(signed char)18] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0 + 1] [10] [i_2 - 1] [10]))))) == (((((/* implicit */int) arr_11 [i_4] [16] [16] [i_0])) >> (((((/* implicit */int) arr_11 [i_1] [(short)4] [(short)4] [i_4])) - (85)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) max(((+(((/* implicit */int) (signed char)65)))), (((/* implicit */int) ((((/* implicit */int) (short)-19350)) == (((/* implicit */int) (signed char)45)))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_5] [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0 + 1] [i_0 + 1] [i_6]);
                                var_16 = (~(max((arr_9 [i_7] [i_7 + 1] [i_7 + 1] [i_0] [i_7 - 1]), (((((/* implicit */_Bool) arr_15 [i_0] [7] [i_0] [(short)6])) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_5] [i_0] [i_0 - 1]) : (arr_0 [(short)17]))))));
                                var_17 = ((/* implicit */signed char) (~(max((((/* implicit */int) arr_11 [(short)5] [i_0] [(short)5] [i_7 + 1])), ((~(((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0] [i_7 - 1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (short i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_18 = arr_21 [i_0] [i_0];
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_0] [(signed char)19] [10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)11)), ((short)-30409)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_8] [i_9 + 1])) || (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_9 - 3])))) && (((/* implicit */_Bool) max((arr_20 [i_0]), (((/* implicit */short) arr_11 [i_9 - 1] [i_0] [i_0] [i_0 + 2]))))))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((arr_0 [i_9]) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) & (2120117604))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (signed char i_11 = 3; i_11 < 17; i_11 += 2) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_10] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_11] [i_10] [i_10] [i_1] [i_0]))))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_23 [i_0] [i_0] [i_1]) : (arr_25 [i_0] [i_0])))))) ? (((/* implicit */int) min((arr_1 [i_0 + 1] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : ((+((-(arr_23 [i_0] [i_1] [i_0]))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) max((arr_14 [i_0 - 1] [i_0]), (arr_14 [i_0 - 1] [i_0])))) > (((((/* implicit */_Bool) (short)-11257)) ? (((/* implicit */int) (short)27919)) : (((/* implicit */int) (short)-32088))))));
                            var_22 ^= ((/* implicit */int) min((((((/* implicit */int) arr_20 [i_11 - 3])) >= (((/* implicit */int) arr_20 [i_11 - 3])))), (((((/* implicit */int) (signed char)-39)) != (((/* implicit */int) arr_3 [(short)12]))))));
                            arr_29 [i_0] [i_1] [i_0] [i_11 - 2] = ((/* implicit */int) arr_24 [i_11 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
