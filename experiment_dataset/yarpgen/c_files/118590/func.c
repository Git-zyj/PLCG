/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118590
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) ((3665400492U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-15181)))))))) : (((/* implicit */int) var_9)))))));
    var_20 = var_13;
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (+(1612134112845582267LL)));
        var_22 = ((/* implicit */unsigned char) max((var_2), (((((/* implicit */_Bool) (unsigned short)64971)) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))));
        arr_5 [10LL] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) >> (((((/* implicit */int) (unsigned short)29006)) - (28976))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_1 + 1]))) * (max((var_8), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1 - 1]))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) ^ (5923034991669905654ULL))))));
            arr_10 [6LL] [6LL] = ((/* implicit */unsigned short) (-(13116709564917388068ULL)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) arr_7 [(unsigned char)3]);
            arr_13 [i_0] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0] [(short)1] [i_2]))));
        }
    }
    var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (var_2)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -5186876510957874524LL)), (var_5))))))) ^ (((/* implicit */int) (unsigned short)15664))));
}
