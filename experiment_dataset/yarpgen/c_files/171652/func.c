/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171652
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                arr_4 [i_0] [i_0] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [(short)0] [i_1 + 1])) ? (var_9) : (((/* implicit */unsigned int) 1793889631))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_6)))))));
    var_19 |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))))) || (((/* implicit */_Bool) (unsigned char)217)))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [8ULL] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3705230502U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93)))))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) var_10))) : ((~(((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) var_8)));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_9 [0U] [0U]))))))) : (arr_5 [i_3]))))));
                var_21 -= ((/* implicit */unsigned short) -3640022970537851133LL);
                arr_12 [i_3] [i_3] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
}
