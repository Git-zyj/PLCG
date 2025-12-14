/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130046
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
    var_12 = ((50326880338224832ULL) >> (((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((134201344ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_0) : (18446744073575350272ULL))), (((((/* implicit */_Bool) 12505437867139797465ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (134201344ULL)))))) ? (((unsigned long long int) var_4)) : ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4)))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((29ULL) >= (arr_2 [i_0])))) >> ((((-(12828229990052915778ULL))) - (5618514083656635811ULL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [18ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((min((18446744073575350255ULL), (var_0))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)110)))))))));
                                var_14 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1]))))), (((unsigned long long int) 134201344ULL)));
                            }
                            arr_18 [i_0 + 3] [i_2 - 1] [i_1] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)93))))))), (0ULL)));
                            var_15 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_0 + 3] [i_0 - 1] [i_2 - 3])) : (((/* implicit */int) arr_8 [i_0 + 4] [i_0 + 3] [i_2 - 2])))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 2] [i_2 - 1]))) & (var_10)))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 17906483732674228733ULL))));
                                var_17 ^= ((unsigned char) min((11925069046957623610ULL), (0ULL)));
                            }
                        }
                    } 
                } 
                var_18 = (-((+(5336137741926305458ULL))));
            }
        } 
    } 
}
