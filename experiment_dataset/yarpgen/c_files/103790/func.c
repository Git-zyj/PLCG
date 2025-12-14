/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103790
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) (((+(3137284265U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_0] [i_1]))))));
                arr_5 [i_0] = arr_2 [7ULL] [i_0] [7ULL];
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [(signed char)7] [(signed char)7]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 6; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-88)) ? (var_0) : (((/* implicit */int) var_10))))), (((unsigned int) var_2)))) != (((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_2 + 3] [(_Bool)1] [i_2 + 3] [i_2 + 3])), (arr_10 [i_2 + 4] [i_3 + 3]))))));
                    var_23 -= ((/* implicit */unsigned int) (unsigned short)62105);
                }
            } 
        } 
    } 
}
