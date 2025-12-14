/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115325
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) << (((((((((/* implicit */_Bool) 2993862742U)) && (((/* implicit */_Bool) (unsigned char)6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9)) || (((/* implicit */_Bool) (signed char)107))))) : (((/* implicit */int) (unsigned short)30332)))) - (1))))))));
                var_20 = ((unsigned short) ((((((/* implicit */int) arr_4 [i_0 + 1])) + (2147483647))) << (((arr_1 [i_0 + 1]) - (11832458018494028088ULL)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_0] = max((((/* implicit */int) (signed char)-115)), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (unsigned short)13028))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) -2887535675932750533LL);
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) 2993862742U)) || (((((/* implicit */_Bool) arr_5 [i_0 + 2])) || (((/* implicit */_Bool) (unsigned short)6330))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 3088745819U)) || (((/* implicit */_Bool) (unsigned char)235))))), (min((((/* implicit */long long int) arr_8 [i_4] [(signed char)6] [i_4])), (-3063058359116874191LL))))), (min((-2887535675932750533LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)61209)), (2993862738U))))))));
                    var_22 = ((/* implicit */unsigned short) (short)-32751);
                }
            } 
        } 
    } 
}
