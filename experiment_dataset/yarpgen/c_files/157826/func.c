/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157826
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((min((((arr_0 [i_0] [i_1 + 1]) ^ (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_0]) < (arr_6 [i_0])))) >= (max((((/* implicit */int) arr_2 [i_1 + 2])), (arr_4 [i_0] [i_0])))))))));
                var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1])) | (((((/* implicit */unsigned long long int) -1)) / (2008864874518551705ULL)))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_4 [i_0] [i_1])))), (((arr_0 [i_0] [(signed char)3]) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((arr_4 [(short)6] [i_1]) + (((/* implicit */int) arr_1 [i_1 + 1])))) % (((((/* implicit */int) arr_1 [i_1])) << (((arr_3 [i_0] [i_1 + 2]) - (1739791395090498535LL)))))))) & (((((((/* implicit */long long int) arr_4 [i_0] [i_0])) ^ (arr_6 [i_0]))) % (((arr_3 [i_0] [i_1 + 2]) % (arr_0 [i_0] [i_1 + 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_0)))))))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
}
