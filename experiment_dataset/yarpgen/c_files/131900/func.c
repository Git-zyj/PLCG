/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131900
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [6] |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_0 [i_0 + 2])) > (((/* implicit */int) arr_0 [i_0 + 2])))));
                var_12 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) max(((short)6518), (((/* implicit */short) var_6))))) > ((+(((/* implicit */int) (unsigned char)247))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_3 [i_1]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [14LL] [i_1] [i_1 - 1]))))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_2 [i_1] [i_0] [i_0]))))))));
                var_14 |= ((/* implicit */unsigned int) ((((((/* implicit */int) min(((unsigned char)51), ((unsigned char)247)))) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (202))))) >> (((((/* implicit */int) arr_1 [15LL])) - (206)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((_Bool) 3154639682U))) >= (((/* implicit */int) var_6))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_11))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned char)65), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) arr_3 [i_2]);
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1140327613U))))));
                var_19 &= ((/* implicit */int) arr_2 [14ULL] [15LL] [15LL]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_6)))), (var_2)));
}
