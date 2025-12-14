/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189542
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 5067985064795710550LL)), (576458553280167936ULL))), (((/* implicit */unsigned long long int) (+(var_4))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_0]))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17870285520429383680ULL)))) ? (576458553280167937ULL) : (((/* implicit */unsigned long long int) ((var_12) - (min((4492282078640236086LL), (((/* implicit */long long int) var_19)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) 4492282078640236086LL);
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_4] [i_3] [i_3])), (var_3)))) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_4]))))));
                arr_18 [i_3] [i_4] [i_4] = arr_16 [i_4] [i_4];
                var_22 = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
}
