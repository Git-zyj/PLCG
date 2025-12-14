/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14375
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
    var_10 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = (short)17998;
                    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((arr_6 [i_0 + 1]), (arr_6 [i_0 + 1])))) < (max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_1])), (arr_3 [i_0 - 2])))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [8U] [i_2] [i_1] [8ULL])))))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0 + 3] [i_0 + 3] [i_2] [i_2])), (var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42455)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 3]))) + (arr_1 [(unsigned char)3] [(unsigned char)3]))))) + ((+((+(arr_1 [i_0 - 2] [i_0 + 2])))))));
        var_15 = ((/* implicit */signed char) var_7);
    }
    var_16 = (-((~(((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
}
