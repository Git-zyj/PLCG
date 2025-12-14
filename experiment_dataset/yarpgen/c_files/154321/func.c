/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154321
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
    var_19 = min((var_10), ((unsigned char)67));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_1] [10U] [i_3 - 1])) && (arr_8 [i_1] [i_1] [i_1] [i_1]))), (min((arr_8 [i_1] [i_1] [i_2] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_2]))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((15), (6))))));
                        }
                    } 
                } 
                arr_9 [11] [i_0] [i_1] = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) arr_7 [i_0] [i_1])))), ((-(-1676224235))))), (max((((/* implicit */int) ((signed char) arr_7 [i_0] [i_0]))), ((+(var_4)))))));
                arr_10 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_2 [3U]))) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))))) / (((unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                arr_11 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((arr_6 [i_0] [i_1] [i_0] [i_1]), (18))))))));
            }
        } 
    } 
}
