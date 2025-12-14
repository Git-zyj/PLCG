/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175516
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) -3310484889578607803LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+(0ULL))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) var_12)))), (((((/* implicit */_Bool) arr_3 [19])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_3 [i_1])))))) ? (((((/* implicit */_Bool) (+(arr_2 [i_1] [i_1])))) ? (var_12) : (((var_10) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((((/* implicit */int) var_0)) + (arr_2 [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_24 += ((/* implicit */unsigned char) (+((-(((arr_3 [(unsigned short)12]) ^ (((/* implicit */long long int) arr_2 [i_1] [(unsigned char)2]))))))));
    }
    var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22567))) != (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)97)))))) ? (max((((var_10) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (min((((/* implicit */unsigned int) var_14)), (var_11))))) : (((/* implicit */unsigned int) var_1))));
}
