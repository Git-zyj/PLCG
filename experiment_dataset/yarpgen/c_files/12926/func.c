/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12926
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = var_2;
        var_20 = ((/* implicit */long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((signed char) var_6)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 -= ((((/* implicit */_Bool) ((long long int) 1450235353U))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (2211369179138036206LL));
                    arr_11 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_10)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_7 [i_3] [i_3] [i_3]) && (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((signed char) (~(-1LL))))) : (((/* implicit */int) var_2))));
                arr_18 [i_3] = ((/* implicit */long long int) 885117098U);
            }
        } 
    } 
}
