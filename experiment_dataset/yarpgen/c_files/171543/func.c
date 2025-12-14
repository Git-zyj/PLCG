/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171543
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
    var_13 = var_1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) 1046528U)) : (6204128846155948338ULL)));
        arr_2 [(signed char)8] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (6204128846155948338ULL)))) >= (((/* implicit */int) var_4))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_3 [i_1])), (4293920768U))) | (var_9)))) & (max((var_12), (((/* implicit */unsigned long long int) -4331103067348428818LL))))));
        var_16 *= ((/* implicit */unsigned short) (signed char)123);
        arr_5 [5LL] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41162)))))), (((long long int) arr_4 [i_1]))))));
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1587231272U)) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)168))))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_3) : (((/* implicit */int) arr_3 [i_1]))))));
        var_18 = ((/* implicit */short) var_2);
    }
    var_19 = ((/* implicit */_Bool) (unsigned char)88);
    var_20 |= ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) 4654975481451373515LL)) || (((/* implicit */_Bool) 506489278U)))), ((_Bool)1))));
    var_21 += ((/* implicit */unsigned short) min((max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned long long int) var_2))));
}
