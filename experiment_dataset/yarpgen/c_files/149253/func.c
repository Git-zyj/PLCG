/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149253
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max(((~(var_4))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 3]))))))))));
                        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-7232)), (var_11)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */int) arr_3 [i_0] [2] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_2 - 4] [i_2 - 4] [i_2 - 4])) : (((arr_8 [i_3] [i_1] [i_1] [i_1] [(unsigned short)11] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [12])))))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_0 [i_2 - 4] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_2 - 3]))))) / (max((var_13), (((/* implicit */unsigned int) arr_4 [i_1] [i_2 - 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((8422050125810735659LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17503)))));
            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 876175367U)))))));
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)181)), ((short)-21009)))), (0LL)));
        }
        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    var_23 = ((/* implicit */int) var_10);
}
