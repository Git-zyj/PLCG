/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123051
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
    var_20 = ((/* implicit */signed char) min(((short)31446), (((/* implicit */short) (unsigned char)148))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((-10) * (((/* implicit */int) (unsigned char)118))));
            arr_8 [i_0] = ((/* implicit */_Bool) ((((arr_0 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) >> (((((/* implicit */int) (unsigned char)108)) - (73)))));
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) * (arr_4 [i_0] [i_0] [i_2 + 2])));
            var_22 = ((/* implicit */signed char) max((var_22), (arr_9 [i_2 - 1] [i_2 + 2] [i_2 + 2])));
            var_23 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)130)), ((unsigned short)8191)));
        }
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) + (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0])) > (7609431517088592659LL)))) == (((/* implicit */int) ((((/* implicit */_Bool) 7609431517088592659LL)) && (((/* implicit */_Bool) arr_0 [i_0] [14LL]))))))))));
        var_25 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)123)))) << (((/* implicit */int) ((((/* implicit */_Bool) 7609431517088592673LL)) || (((/* implicit */_Bool) 7609431517088592659LL)))))));
    }
    var_26 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : (0LL)))))));
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))))))));
}
