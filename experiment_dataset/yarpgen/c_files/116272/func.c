/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116272
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
    var_15 = (-((~((-2147483647 - 1)))));
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] &= arr_7 [i_0] [i_4] [6] [i_4] [i_4] [i_4];
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (-2027034460) : (var_2));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_17 = (+(min((max((arr_15 [8] [8] [11] [i_6]), (1361091335))), (min((2027034458), (arr_1 [11] [i_6]))))));
                            var_18 = ((((/* implicit */_Bool) -2027034444)) ? (2014629931) : (-2113755908));
                            arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] = -35142194;
                            arr_18 [i_6] [i_5 - 1] [i_1] [i_0] = min((1411443859), (2014629912));
                            var_19 = arr_13 [10] [10] [4] [10];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 4; i_7 < 11; i_7 += 4) 
                {
                    var_20 = ((/* implicit */int) max((var_20), (((int) 2027034458))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), ((-(var_8)))));
                                arr_26 [i_1] [i_7] [i_1] = ((((/* implicit */_Bool) ((int) -1686194001))) ? (((-2027034460) ^ (2014629917))) : (arr_4 [i_9 - 1]));
                                arr_27 [i_0] [i_0] [i_7] [i_8] [i_9] = ((int) -1411443875);
                            }
                        } 
                    } 
                    arr_28 [1] [i_1] [i_7] = (((!(((/* implicit */_Bool) 1411443846)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2014629933)) ? (arr_8 [i_7] [i_1] [i_1] [6] [i_1] [2]) : (-2014629918)))) ? ((-(2027034458))) : (((arr_4 [i_7]) / ((-2147483647 - 1)))))) : ((+((-2147483647 - 1)))));
                    var_22 = ((/* implicit */int) max((var_22), ((~(2027034462)))));
                }
                arr_29 [i_0] [i_0] [i_0] = (-((~((-2147483647 - 1)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_23 = (-((+(-1411443874))));
                    var_24 = var_0;
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    arr_35 [7] [7] [7] [7] = ((((/* implicit */_Bool) max((-2027034451), (-1535621122)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (max((((int) -1535621108)), (arr_6 [i_0] [i_1] [i_11] [i_11]))));
                    var_25 = ((/* implicit */int) max((var_25), (min((11), (1262232022)))));
                    var_26 = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (-131845215) : (var_0))) : (min((((int) 1411443873)), (((((/* implicit */_Bool) -1535621132)) ? (2027034460) : (2027034456))))));
                }
            }
        } 
    } 
}
