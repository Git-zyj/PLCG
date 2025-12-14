/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130503
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = (+(((unsigned int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_7 [i_2] [i_1] [i_0]), (arr_7 [i_2] [i_0] [i_0])))) % (((/* implicit */int) ((_Bool) var_5)))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((var_4) + (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])), (var_11)))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) 18014398509481983LL)))))))) - (arr_1 [i_0])));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (63U)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */long long int) arr_8 [i_5]);
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((min((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [i_6]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_6 + 1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_4 - 4] [i_4 - 1] [i_4 + 1])), (arr_5 [i_4 - 4] [i_4 - 1] [i_4 + 1]))))))))));
                                arr_20 [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_7] [i_4 - 2] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_6 [i_4 - 1] [i_4 - 3] [i_4 - 2]);
                        arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 709141464U)) ? (arr_19 [i_0] [i_0] [i_0] [i_4] [i_4] [i_7]) : (arr_19 [10U] [13U] [(_Bool)1] [i_3] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_8] [(signed char)1] [i_0] = (_Bool)1;
                            arr_34 [3] [i_8] [i_4] [i_8] [3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_9 - 1] [i_4 - 3] [i_8 + 1]))));
                            arr_35 [i_3] [i_3] [i_4 - 1] [i_3] [i_8] [i_4] [i_8 - 1] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_4 - 4]));
                            arr_36 [i_8] [15U] = ((/* implicit */signed char) (-(var_6)));
                        }
                        var_19 = ((/* implicit */signed char) arr_10 [17U]);
                        var_20 = (!(((/* implicit */_Bool) ((arr_0 [i_0]) % (((/* implicit */long long int) 1286318288U))))));
                    }
                    arr_37 [i_0] [i_3] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1286318288U)), (min((var_9), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))))));
                    arr_38 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_4 - 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4] [i_4 + 1]))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((long long int) (~(2835682429U)))))));
        var_23 ^= var_8;
        var_24 = ((_Bool) ((((/* implicit */_Bool) arr_18 [i_10] [0U] [0U] [i_10] [4ULL] [i_10] [i_10])) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_13 [i_10] [i_10] [i_10] [11ULL])))))));
    }
    var_25 = ((/* implicit */unsigned long long int) 241801946U);
}
