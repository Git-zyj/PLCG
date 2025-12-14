/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148405
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) 25U))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
        var_16 = ((/* implicit */int) min((var_16), (var_10)));
        var_17 = arr_0 [5ULL];
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1048918537))));
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
        var_21 |= ((/* implicit */unsigned short) ((2979766648407967513ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1])), (551527395U)))) ? (((int) var_10)) : (((/* implicit */int) var_11)))))));
        arr_4 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((int) max((arr_3 [i_1]), (arr_3 [i_1]))))) : (((((/* implicit */unsigned int) 1048918542)) & (var_12))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_12)))))))));
        var_23 = ((((unsigned long long int) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) % (((/* implicit */unsigned long long int) ((var_3) / (arr_3 [i_1])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_24 = var_12;
                                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) & (17052559165600132486ULL)));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-((-(-2029390402))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) 
                    {
                        arr_21 [i_4] = ((/* implicit */unsigned short) max((7589372879378932665ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((15466977425301584103ULL) | (2979766648407967518ULL))))), (((/* implicit */unsigned long long int) ((arr_14 [i_7 + 1] [i_3] [i_4] [i_3]) ? (var_13) : (((/* implicit */unsigned int) arr_15 [i_2] [i_3] [i_4] [i_4] [i_7 - 2])))))));
                        arr_22 [i_4] [i_3] = ((/* implicit */unsigned short) arr_14 [13ULL] [i_3] [i_4] [i_3]);
                    }
                    for (int i_8 = 4; i_8 < 13; i_8 += 4) 
                    {
                        arr_25 [i_4] = ((/* implicit */_Bool) arr_6 [i_8]);
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((max((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_6))))), (min((var_10), (((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1048918537)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))))))))));
                    }
                }
            } 
        } 
    } 
}
