/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107210
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (arr_4 [i_1] [i_1] [i_0]))))))) : (((/* implicit */int) max((((((/* implicit */_Bool) (short)-6)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))), (arr_0 [i_0]))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_11)));
                    var_20 = ((/* implicit */long long int) ((((arr_3 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
        arr_9 [i_0] |= ((/* implicit */unsigned int) (~(0ULL)));
    }
    var_21 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (var_0)))) && (((/* implicit */_Bool) max(((short)-4096), (var_8)))))))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_16)) ? (1152921504573292544LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_16 [i_5] |= ((/* implicit */unsigned long long int) 4255655252U);
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_5 + 1] [i_5 + 2]))))) <= ((~(arr_10 [i_4] [i_3 - 1])))));
                }
            } 
        } 
    } 
}
