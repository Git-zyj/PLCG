/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102105
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_8))))) ? (max((var_3), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_7)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_2))))) : (max(((~(var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_5))))))))))));
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (short)17441)) : (((/* implicit */int) (short)17418))))), (max((max((((/* implicit */unsigned int) var_6)), (var_9))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))));
    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_3) + (var_3))), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_1))))))) ? (max((((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_9) - (3633386255U)))))), (((((/* implicit */_Bool) -8048253394279695177LL)) ? (8048253394279695168LL) : (((/* implicit */long long int) 8U)))))) : (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) var_7)), (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)3]))) : (var_4)))))) ? (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0 - 1]), (((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_1])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_0 + 2] [i_1]))))) > (-8048253394279695168LL)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967288U), (((/* implicit */unsigned int) (signed char)107))))) ? (arr_0 [i_0 - 1] [11U]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0 + 2] [i_0 + 2])), (arr_3 [i_0])))))))), (max((max((((/* implicit */unsigned long long int) var_7)), (var_0))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                var_14 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_2] [i_3])), (arr_8 [(unsigned char)3])))) ? (max((var_4), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [(short)3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_3]))) : (var_3)))))) ? (max((((/* implicit */unsigned int) max((arr_3 [11U]), (((/* implicit */unsigned short) arr_11 [i_3]))))), (max((((/* implicit */unsigned int) arr_9 [i_2] [i_3] [i_3])), (var_9))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_3] [i_3])), (arr_2 [i_3] [i_3])))))))));
                var_15 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
}
