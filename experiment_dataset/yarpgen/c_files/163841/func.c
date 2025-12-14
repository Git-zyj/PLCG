/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163841
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3917499851U), (3917499868U)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (2952006780U))))))) ? (((((/* implicit */_Bool) 2952006780U)) ? (((((/* implicit */_Bool) 16274604944623971731ULL)) ? (2172139129085579884ULL) : (7292017966787051141ULL))) : ((-(2172139129085579885ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((var_5) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (16274604944623971731ULL))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
                    arr_9 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)0))))), (((16274604944623971743ULL) ^ (((/* implicit */unsigned long long int) var_7))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (min((var_4), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))))));
                }
            } 
        } 
    } 
}
