/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182180
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        var_11 -= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) 3448195060U))))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28672))))) | (((/* implicit */int) (!((!(arr_11 [i_1 + 1] [i_1 + 1] [i_4 + 2]))))))));
                            var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (arr_9 [i_1 + 1] [i_2 - 1])))));
                        }
                    } 
                } 
                arr_16 [i_1 - 1] [i_2] |= ((/* implicit */long long int) var_7);
            }
        } 
    } 
}
