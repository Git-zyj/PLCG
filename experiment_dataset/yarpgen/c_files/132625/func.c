/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132625
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
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 5)) ? (var_1) : (var_2))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((var_1), (var_2)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) (((((((_Bool)0) ? (1946976743) : (465594485))) >= (var_13))) ? ((-((+(arr_0 [(unsigned short)14]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [14]))))), (((((/* implicit */_Bool) 250527792)) ? (arr_0 [20U]) : (arr_0 [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_17 *= (-(arr_3 [i_0 - 2]));
            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
            var_19 = ((/* implicit */_Bool) (-((+(14)))));
            var_20 = ((/* implicit */signed char) ((((var_12) ? (((/* implicit */unsigned long long int) var_13)) : (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) (((_Bool)1) ? (801869932) : (((/* implicit */int) var_0)))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) >= (((var_5) + (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
            var_23 = 2111865285;
            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        }
        var_25 += ((/* implicit */unsigned char) var_12);
        var_26 ^= ((/* implicit */unsigned long long int) 0);
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) max((var_8), (var_8))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551603ULL)) && (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (unsigned char)0))))))))));
}
