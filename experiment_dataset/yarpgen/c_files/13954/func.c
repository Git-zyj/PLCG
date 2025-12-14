/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13954
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
    var_10 -= ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((var_3), (((/* implicit */unsigned long long int) arr_4 [i_0 + 3])))))) % (-2065118000)));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) arr_0 [i_1 - 1]);
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((((/* implicit */long long int) ((18446744073709551610ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18115)))))), (max((((/* implicit */long long int) arr_7 [i_2] [i_1 - 1] [i_0 - 3])), (-2815420918902436381LL))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / ((+(7116146943387796933LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)6904), (((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 2] [i_0]))))) < (((/* implicit */int) arr_4 [i_0]))))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) 7116146943387796938LL)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) 192212025)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6904)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((736247585), (((/* implicit */int) (unsigned short)13152))));
}
