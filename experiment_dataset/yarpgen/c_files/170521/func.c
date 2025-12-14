/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170521
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_13)))), ((+(((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)71))))), (((16458286757480388019ULL) + (((/* implicit */unsigned long long int) 3772646107U))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) / (((/* implicit */int) var_6))))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-61))))), (((((/* implicit */_Bool) 2187135074U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */long long int) var_1)) : (var_0))))) & ((~(((1032192LL) << (((/* implicit */int) var_12))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) / (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_6 [i_0] [2U] [i_0] [i_0])), (((min((arr_5 [i_0] [i_1] [i_2]), (var_8))) ? (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_1] [i_0])))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (((((/* implicit */_Bool) 3772646104U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 3772646118U))))))) ^ ((((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))) & (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
}
