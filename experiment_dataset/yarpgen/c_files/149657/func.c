/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149657
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
    var_10 = ((/* implicit */_Bool) max((9LL), (((/* implicit */long long int) var_3))));
    var_11 = ((max((((((/* implicit */_Bool) var_5)) ? (17592152489984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((int) var_6))))) >> (((min((var_0), (((/* implicit */int) ((signed char) var_9))))) + (1800309977))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) min((((int) min((((/* implicit */unsigned long long int) -1418793445)), (18446726481557061631ULL)))), (var_0)));
                    arr_10 [(signed char)8] [i_0] = ((/* implicit */_Bool) ((max((arr_7 [i_0] [i_1 + 2] [i_0]), (((/* implicit */long long int) ((unsigned char) arr_9 [i_0] [i_1 - 1] [i_0] [i_0]))))) >> (((((long long int) (~(((/* implicit */int) var_4))))) - (11794LL)))));
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) >> (((((int) var_7)) + (26)))))) ? (min((18446726481557061626ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [i_0])))));
                }
            } 
        } 
        var_13 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_8)), (1880535809))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (16)))))) ? ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_0] [10] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((_Bool) (unsigned short)51475)))))));
    }
}
