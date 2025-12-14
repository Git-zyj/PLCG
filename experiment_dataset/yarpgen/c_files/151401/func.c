/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151401
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
    var_14 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) var_12)) | (((((/* implicit */_Bool) var_5)) ? (9360919488004197160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (2583785820121330055ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)187), (((/* implicit */unsigned char) var_6)))))) : (var_2))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) var_8)), (var_2)))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) 9279048923310114637ULL);
                    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_10 [i_2] [i_2] [i_2] [i_2]))) ? (min((arr_10 [i_0] [i_1 - 1] [i_2] [10LL]), (((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) : (arr_10 [i_0] [i_1 - 1] [i_2] [(unsigned short)10])));
                    arr_11 [(unsigned char)7] [i_1] [5] [(unsigned char)7] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_8))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 4])), (15862958253588221557ULL)))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 3] [i_1 + 1])))))));
                }
            } 
        } 
    } 
}
