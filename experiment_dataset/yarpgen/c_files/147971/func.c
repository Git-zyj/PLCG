/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147971
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned long long int) 2152643702U))))) ? (var_2) : (min((var_2), (((/* implicit */unsigned long long int) var_12))))))));
    var_16 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) + (26064)))))) ? (var_5) : (((/* implicit */int) var_1))))) <= (((((((/* implicit */_Bool) -5692224229679319007LL)) ? (((/* implicit */unsigned long long int) var_12)) : (var_14))) / (((/* implicit */unsigned long long int) (-(5692224229679319007LL))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1705502188U)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned char)255))))) : (((826384304U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_18 ^= (+(min((((/* implicit */int) ((signed char) arr_6 [8U] [2] [i_3]))), (((((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_0] [i_3] [i_1])) - (((/* implicit */int) var_4)))))));
                        arr_9 [i_1] [i_1] [i_2 + 4] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((18446744073709551595ULL), (((/* implicit */unsigned long long int) 408517168U)))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -955109112))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((1032714394) > (((((/* implicit */int) (unsigned char)20)) & (arr_5 [i_1]))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) 545400175)), (15462920513087911652ULL))))));
                    }
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 4] [i_2 + 4] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (arr_7 [i_2 + 3] [i_2 + 1] [i_2] [i_1]))) : (arr_7 [i_2 + 4] [i_2 + 3] [i_2 + 2] [i_1])));
                    arr_11 [i_1] = ((/* implicit */signed char) (+(min((1756571089), (((int) 18446744073709551581ULL))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((min(((+(var_0))), (((/* implicit */unsigned int) ((unsigned short) 149218048))))), (((/* implicit */unsigned int) (_Bool)0)))))));
}
