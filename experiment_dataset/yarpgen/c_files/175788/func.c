/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175788
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((var_7) % (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)29370)))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : (6401145543753892960LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)85))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_5))))) : (min((arr_5 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)3)))) << ((((-(((/* implicit */int) var_1)))) + (55052))))), ((+(((/* implicit */int) max(((unsigned short)65532), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2])))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (min((((/* implicit */int) (unsigned char)28)), (arr_9 [i_0] [i_1] [i_1] [i_2]))))))));
                    var_17 = min((max((max((4523124582899513993ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36773)) ? (var_8) : (arr_9 [(unsigned short)8] [i_0] [i_0] [1LL])))))), (min((((var_3) ^ (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (!(var_0)))))));
                }
                var_18 = ((/* implicit */signed char) (((((~(((/* implicit */int) max(((unsigned short)65523), (((/* implicit */unsigned short) (_Bool)1))))))) + (2147483647))) >> ((((+(((/* implicit */int) max((arr_1 [i_0]), ((unsigned short)47739)))))) - (47713)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5)))))))), (((((((/* implicit */int) var_0)) >> (((var_7) - (1174352187U))))) & ((~(((/* implicit */int) (unsigned short)28852))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (var_14)));
}
