/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141238
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
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4282667137547007553ULL)) ? (((((/* implicit */_Bool) 4282667137547007551ULL)) ? (14164076936162544063ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (32767LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1])))))))))));
                var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) 14164076936162544062ULL)) ? ((-(-8535740210296217792LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)19517))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_1] [(signed char)17] [i_1])))) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (max((((/* implicit */int) arr_2 [i_0])), (arr_4 [i_1] [i_0] [i_0]))))))));
                arr_7 [(unsigned short)10] &= ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))))), (min((arr_0 [i_1 + 2]), (arr_0 [i_1 + 2])))));
                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (min((((/* implicit */int) arr_5 [(unsigned char)0])), (((((/* implicit */_Bool) arr_4 [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (arr_3 [0]))))) : ((+((-(((/* implicit */int) arr_5 [(signed char)4]))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) var_2);
    var_23 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (4282667137547007549ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_17)))))));
}
