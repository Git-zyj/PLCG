/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188316
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_2 - 3]) | (var_2)))) ? ((-(arr_5 [i_0] [i_0] [i_1] [i_1]))) : (((arr_5 [i_0] [i_0] [i_2 - 2] [i_1]) / (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2 - 2]))))));
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */long long int) var_4)) | (arr_5 [i_0] [i_1] [i_2 - 2] [6U]))) : (((/* implicit */long long int) max(((-(arr_3 [2LL]))), (((((/* implicit */_Bool) arr_0 [i_1] [i_2 - 2])) ? (var_4) : (arr_6 [i_2 + 1] [i_0] [i_0]))))))));
                }
            } 
        } 
        var_20 = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2086661652U)), (16190951664340432119ULL)))) ? (((/* implicit */unsigned long long int) (-(559218388U)))) : ((-(13140060625585098734ULL))))) << (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0] [8U]) < (arr_5 [i_0] [i_0] [i_0] [6U])))));
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_21 += max(((-(((((/* implicit */_Bool) 6512442867543538492ULL)) ? (9740314837681286092ULL) : (((/* implicit */unsigned long long int) arr_9 [i_3])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6344270712535343178ULL)) ? (8896081477971348811LL) : (var_3))) >> (((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_3])) : (3270330011459063318ULL))) - (3756261912ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 3233833819U)) != (((2559187841162768505LL) & (((/* implicit */long long int) var_2)))))))) : (var_5)));
    }
    var_23 = (-(max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) 595368165U)))), ((-(13946856217392779736ULL))))));
}
