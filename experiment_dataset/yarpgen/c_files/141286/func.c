/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141286
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) - (((10774007236053106645ULL) ^ (arr_1 [i_0 + 1] [i_0]))))));
        var_19 = ((/* implicit */unsigned int) ((unsigned char) min((arr_0 [i_0]), (((/* implicit */int) min(((unsigned char)241), ((unsigned char)194)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (arr_0 [i_0])))) ? (arr_1 [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_14))))))) ? (arr_0 [i_0]) : (((/* implicit */int) ((unsigned char) ((arr_0 [i_0]) / (arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (short)-18992));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((signed char) max((4503599627370495ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (short)255))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((arr_9 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)14)), (arr_10 [i_2 - 2] [i_2 - 1] [i_2 + 1]))))));
                    var_23 = ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))) % (max((((/* implicit */long long int) ((((/* implicit */int) (short)18997)) != (((/* implicit */int) var_18))))), (min((((/* implicit */long long int) var_2)), (arr_5 [i_3] [i_3]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) & (var_8))) : (((/* implicit */unsigned long long int) (+(arr_9 [i_1] [i_1] [i_1])))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0) < (((/* implicit */int) (short)-18998))))))))));
        arr_11 [i_1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
    }
    var_25 = ((/* implicit */short) var_12);
    var_26 = ((/* implicit */unsigned int) (+(((((_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))));
}
