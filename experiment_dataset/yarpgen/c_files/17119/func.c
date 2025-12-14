/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17119
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64213)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (3627301764220723804ULL) : (((/* implicit */unsigned long long int) ((int) var_0)))))) ? (((/* implicit */int) ((unsigned char) -1838331645))) : (((/* implicit */int) var_1)))))));
    var_14 ^= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (min((((/* implicit */long long int) var_12)), (arr_2 [i_0])))))));
                    var_16 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned char)0)) ? (10502794487177911998ULL) : (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_11))))) ? (((unsigned long long int) arr_5 [i_0 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))))));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_2 + 1])) ? (((/* implicit */int) max((var_5), (var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)14945))))))) ? (((/* implicit */unsigned long long int) (~((-(1838331645)))))) : (((unsigned long long int) (short)-11655))));
                    arr_9 [8LL] [i_0 - 1] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_2) ? (var_10) : (1618752345)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 9379963131344489307ULL))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 103665045)) ? (((/* implicit */int) (unsigned short)7825)) : (((/* implicit */int) (short)-9423))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (short)3542)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) var_1))))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */short) (signed char)11);
}
