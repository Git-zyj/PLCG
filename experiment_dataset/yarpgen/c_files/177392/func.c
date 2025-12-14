/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177392
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = var_0;
                arr_4 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (~(((arr_1 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_20 = arr_3 [i_0] [i_0] [i_0];
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) 32158870903222238LL))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (signed char)-27);
                            arr_15 [i_2] [i_2] [8U] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((arr_13 [i_2] [i_3] [0U] [(signed char)2] [i_5]), (((/* implicit */short) (signed char)-112)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_2] [i_2] [i_4 + 3])))) : (min((((/* implicit */long long int) min((((/* implicit */signed char) arr_2 [i_3])), ((signed char)26)))), (((((/* implicit */_Bool) 0LL)) ? (-1060646721291303872LL) : (((/* implicit */long long int) var_18))))))));
                            arr_16 [i_5] = ((/* implicit */_Bool) min((((/* implicit */short) ((signed char) arr_12 [i_4 + 3] [i_4 - 1] [i_4 + 2]))), (var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
}
