/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103082
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_11)), (var_13))), (min(((-2147483647 - 1)), (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) var_2)) ? (var_1) : (min((((/* implicit */unsigned long long int) var_11)), (var_12)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_2 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_2 - 1]), (arr_2 [i_0] [i_0 - 1] [7ULL])))) ? ((-(arr_2 [i_0 + 1] [3ULL] [i_2]))) : ((+(arr_2 [i_0] [i_1] [8])))));
                    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [(short)5] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2] [(short)0] [i_2 + 1])))), (((/* implicit */int) arr_7 [i_2] [(unsigned short)11] [i_2 - 1]))));
                    var_16 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (-2574412458419204593LL))), (min((((/* implicit */long long int) arr_6 [(short)8] [i_1] [i_2 - 1])), (min((((/* implicit */long long int) (unsigned short)13648)), (-2574412458419204593LL)))))));
                    arr_10 [i_0] [i_0 - 1] [i_0 - 1] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_0])) ? (arr_4 [i_0 + 1] [i_2] [i_0 + 1]) : (arr_4 [i_2] [i_0 - 1] [i_0 + 1])))) ? (max((((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))) : (12180293530451096112ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0] [i_2 - 3])))) : (min((((12180293530451096113ULL) | (var_12))), (max((((/* implicit */unsigned long long int) (signed char)68)), (6266450543258455494ULL)))))));
                    arr_11 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) max((min((arr_8 [i_0] [i_2 - 3] [i_0]), (((/* implicit */unsigned short) (short)-6135)))), (min((arr_8 [i_0] [i_2 - 3] [i_0]), (arr_8 [i_0] [i_2 - 3] [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
}
