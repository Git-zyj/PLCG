/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16183
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)178), (arr_3 [i_0] [i_0] [i_2])))) || (((((/* implicit */int) ((var_8) <= (var_8)))) <= (arr_4 [i_0])))));
                    var_10 = ((/* implicit */int) (unsigned char)28);
                    var_11 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)227))))) <= ((-(((/* implicit */int) (unsigned char)49)))))), ((!(((/* implicit */_Bool) arr_3 [i_0] [0ULL] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)228), ((unsigned char)28))))) / (min((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)19]))))), (min((-9223372036854775807LL), (((/* implicit */long long int) var_3))))))));
        var_12 = ((/* implicit */unsigned char) var_7);
    }
    for (signed char i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */int) (+(((((((/* implicit */long long int) ((/* implicit */int) (signed char)21))) / (9223372036854775807LL))) * (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_7))))))));
        var_13 = ((/* implicit */unsigned char) (+(arr_15 [3LL])));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (signed char)-33))) || (max((((((/* implicit */int) (unsigned char)28)) <= (((/* implicit */int) arr_2 [i_4])))), (arr_7 [i_4])))));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min(((-(2147483647))), ((+(((/* implicit */int) (unsigned char)5))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)108)), ((unsigned char)227)))) : (((/* implicit */int) (unsigned char)14))));
    }
    var_16 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (var_5)))), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3016195728467114003ULL)) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_2))))))))));
}
