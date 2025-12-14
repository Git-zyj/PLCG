/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17944
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
    var_12 = ((/* implicit */_Bool) ((int) var_7));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((~(arr_0 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_13 ^= ((/* implicit */unsigned short) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_3))))), (((/* implicit */unsigned int) ((arr_0 [(unsigned char)10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)18827)))))))))));
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)126))) ? (max((((/* implicit */long long int) var_10)), (6548212160472041603LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)61378)), (var_6))))))) ? (((/* implicit */unsigned long long int) -3258356949405057753LL)) : (arr_0 [(unsigned char)14])));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) (_Bool)1)), (6548212160472041603LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))))), (((/* implicit */long long int) ((unsigned short) var_2)))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3258356949405057752LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_0 [i_1]) ^ (((/* implicit */unsigned long long int) 1567660426)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))) | (max((-3258356949405057748LL), (((/* implicit */long long int) var_4)))))))));
    }
}
