/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120829
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [0U] &= ((/* implicit */int) ((short) var_4));
            var_14 = ((/* implicit */int) (unsigned char)0);
            /* LoopSeq 2 */
            for (int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                var_15 = ((/* implicit */_Bool) ((short) ((((((/* implicit */unsigned long long int) var_10)) + (var_12))) >= (max((0ULL), (var_13))))));
                var_16 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) var_5)))))));
            }
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_3 [i_0]))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) - (var_0)))) || (((/* implicit */_Bool) ((var_3) & (var_12))))))))))));
                var_18 = (i_1 % 2 == zero) ? (((/* implicit */short) ((var_0) >> ((((((-(arr_5 [i_1] [i_1] [i_3]))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-15)), (var_0)))))) - (942961685ULL)))))) : (((/* implicit */short) ((var_0) >> ((((((((-(arr_5 [i_1] [i_1] [i_3]))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-15)), (var_0)))))) - (942961685ULL))) - (2685949495ULL))))));
            }
        }
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_1 [i_4] [i_4])) >> (((var_12) - (1066852218169511277ULL))))));
            var_20 = ((((/* implicit */unsigned long long int) ((-147243068) / (-195174987)))) * (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (18446744073709551615ULL)))));
        }
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_5)) ^ (18446744073709551594ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((int) ((var_13) ^ (((/* implicit */unsigned long long int) var_7)))))) : (max((var_10), (((/* implicit */unsigned int) var_2))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_22 = (i_5 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((var_5) << (((((((/* implicit */int) arr_17 [i_5])) + (13624))) - (29))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((var_5) << (((((((((/* implicit */int) arr_17 [i_5])) + (13624))) - (29))) - (36755)))))))));
        var_23 ^= ((/* implicit */unsigned int) var_13);
        var_24 = ((/* implicit */unsigned short) ((((_Bool) var_5)) ? (arr_5 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) + (arr_14 [i_5] [i_5] [i_5]))))));
        var_25 = ((((arr_4 [i_5] [i_5] [i_5]) != (var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_5]))) : (((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    }
    var_26 = ((/* implicit */_Bool) max((var_26), (((((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (signed char)14)))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) ((_Bool) 0ULL))))))))));
}
