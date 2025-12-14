/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155361
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
    var_12 = ((/* implicit */long long int) ((short) (-(max((-1LL), (1LL))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 += ((/* implicit */unsigned char) ((((arr_2 [20LL]) >= (((/* implicit */long long int) var_11)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : ((~((-(-13LL)))))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        arr_5 [(_Bool)1] &= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (-1LL) : (1LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1LL))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -5LL)) > (arr_3 [0ULL] [i_1])))))));
        var_15 = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) 5LL)) ? (arr_4 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) (~(-12LL)))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)10] [(short)10])) ? (max((var_4), (((/* implicit */unsigned long long int) max((0LL), (0LL)))))) : (((/* implicit */unsigned long long int) (~(((long long int) 5LL))))))))));
        arr_6 [i_1 + 2] [i_1] = min((((arr_4 [i_1 + 2]) << (((arr_4 [i_1 + 1]) - (2477407157008324174ULL))))), (arr_4 [i_1 - 2]));
    }
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        var_17 |= min((((/* implicit */unsigned long long int) 4LL)), (arr_7 [0LL]));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 ^= (+(arr_7 [i_3]));
            var_19 = ((/* implicit */int) max((((((((((/* implicit */_Bool) arr_7 [(unsigned short)12])) ? (-20LL) : (4LL))) + (9223372036854775807LL))) << (min((5LL), (((/* implicit */long long int) arr_11 [i_2] [i_3])))))), (((/* implicit */long long int) var_0))));
        }
    }
}
