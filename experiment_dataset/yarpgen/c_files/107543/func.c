/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107543
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)121))))) * (((1730240161U) >> (((((/* implicit */int) var_3)) - (35353)))))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (0ULL))))) - (((var_2) | (18ULL))))))))));
    var_12 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (18446744073709551615ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_8)) & (var_5))) != (((-2738075712282932539LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))) - (((var_7) + (((/* implicit */unsigned long long int) 2147483647)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -2738075712282932535LL)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) -2147483642)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (12102))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))))))) > (((((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (12112))))) / (((1973778258) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
