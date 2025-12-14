/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106953
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (!(((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-63)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) (~(((int) arr_0 [i_0]))));
                    var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])), ((~(((/* implicit */int) (unsigned char)192))))))) && (((/* implicit */_Bool) min((min((((/* implicit */long long int) var_8)), (arr_1 [(short)2] [(short)2]))), ((-(arr_1 [4LL] [4LL]))))))));
                    var_13 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [(short)0] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_2)))) & ((~(((/* implicit */int) var_7))))));
                    var_14 = ((/* implicit */unsigned char) 7435502772984950578LL);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_3]))), (((/* implicit */unsigned long long int) (unsigned char)3)))), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
        var_16 = ((/* implicit */long long int) min(((~(((/* implicit */int) min((((/* implicit */short) (signed char)77)), (var_8)))))), (((/* implicit */int) ((unsigned char) var_9)))));
    }
}
