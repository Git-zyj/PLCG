/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1861
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
    var_19 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (var_7)))))))) * (var_16));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((4294967295U) != (((/* implicit */unsigned int) var_6)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7044))) | (var_13))) : (((var_13) * (var_13)))))), (((max((var_16), (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38)))))));
    var_21 = ((/* implicit */_Bool) (+(max((max((var_11), (((/* implicit */unsigned long long int) var_17)))), (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7044)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 *= ((/* implicit */unsigned int) max(((-((-(arr_0 [i_0] [i_0]))))), (min((((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) 1443367773U)))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned char) (_Bool)0)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max(((short)12408), (((/* implicit */short) (unsigned char)16))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_4 [i_1]))) ^ (var_11));
        arr_6 [i_1] = ((/* implicit */unsigned int) var_4);
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)21)) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(var_1))))));
    }
}
