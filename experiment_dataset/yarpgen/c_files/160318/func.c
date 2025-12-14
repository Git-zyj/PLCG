/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160318
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 2] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_2]);
                            arr_11 [i_0 + 1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 3])))))));
                        }
                    } 
                } 
                var_10 = ((/* implicit */unsigned int) (short)-3174);
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_2 [i_0 + 2] [i_0])))), (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_1])), (arr_9 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)149)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1] [(signed char)4] [9ULL]))))))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) min((((/* implicit */unsigned short) var_3)), (var_6)))));
}
