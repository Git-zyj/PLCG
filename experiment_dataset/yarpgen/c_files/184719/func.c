/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184719
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
    var_12 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0 + 3] [i_0 + 2])));
        var_15 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) + (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) ^ (var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (3724678011496748800ULL)))))));
        var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) 1300847180U)) : (var_3))) & (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) < (((/* implicit */long long int) (-(arr_4 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) 1300847193U))) ? (1909412719202890466ULL) : (((/* implicit */unsigned long long int) 2994120086U)))), (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) 1300847170U)) : (1909412719202890486ULL)))));
        var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -6180243739288835615LL)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned short)46717))))) ? (((var_2) ^ ((-9223372036854775807LL - 1LL)))) : (min((var_2), (((/* implicit */long long int) var_4))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((_Bool) var_3));
        var_19 ^= ((/* implicit */signed char) ((unsigned int) var_6));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((var_8) + (2147483647))) >> (((((/* implicit */int) var_4)) - (30)))))))), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_2])) + (2147483647))) >> (((var_2) - (6864140483671570687LL)))))), (4286578688ULL)))));
    }
}
