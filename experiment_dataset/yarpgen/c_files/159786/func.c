/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159786
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
    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) (signed char)126)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))))), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((9007199254478848ULL) > (var_6)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_5)), (2671230661U))), (((/* implicit */unsigned int) (~(-498268722))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [i_0]))))), (-498268725)))) : (var_12)));
                    arr_10 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_1 + 2] [(signed char)0] [i_2])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))))), (max(((unsigned char)187), (((/* implicit */unsigned char) (signed char)40))))))) : (((/* implicit */int) (signed char)17))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((4725869853986398210LL), (((/* implicit */long long int) (unsigned char)75)))) >> (((var_4) - (7877022911939316899LL)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 3929548104U)) ? (((/* implicit */long long int) 627678492U)) : (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3301540533745635854ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))) ? (var_14) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_9))))))));
    var_18 = ((/* implicit */unsigned int) ((var_3) >> (((max((((((/* implicit */unsigned long long int) var_2)) | (6090151819305876816ULL))), (((/* implicit */unsigned long long int) (~(498268721)))))) - (18446744073211282879ULL)))));
}
