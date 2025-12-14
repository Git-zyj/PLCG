/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169307
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((var_8) / (((/* implicit */unsigned long long int) arr_4 [(unsigned short)7])))))));
                var_15 = ((/* implicit */int) (((_Bool)1) ? ((+(arr_1 [i_1 + 2] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (unsigned char)253)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8214)) : (((/* implicit */int) arr_13 [i_2 + 2] [i_2 - 1] [i_4] [i_2 - 1])))))));
                    arr_14 [i_4] [i_3] [(unsigned char)6] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)103)))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3745689982151051173LL)))))) & (((((/* implicit */_Bool) arr_2 [i_2 + 3])) ? (arr_2 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))))));
                    arr_15 [i_2 + 2] [i_3] [i_4] = ((/* implicit */long long int) arr_4 [i_2 + 3]);
                    arr_16 [i_2 - 1] [i_3] [i_2 - 1] = ((/* implicit */_Bool) 1743405151034498248ULL);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
