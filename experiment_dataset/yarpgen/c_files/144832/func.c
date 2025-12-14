/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144832
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != ((-(var_5))))))));
    var_18 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_2] = ((/* implicit */unsigned char) (unsigned short)47373);
                                var_19 = max((((/* implicit */int) (!(((((/* implicit */_Bool) arr_16 [i_0] [(signed char)4] [(signed char)4] [(signed char)4] [i_3] [(signed char)4] [i_4])) || (((/* implicit */_Bool) var_3))))))), (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_12)) - (53014))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) 2028661170)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_2])))), (max((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_5])), (-2028661171))))), (((int) ((arr_7 [i_1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                        arr_20 [5] [5] [i_1] [i_1] [i_2] [i_5] = (-(((((/* implicit */_Bool) max((var_0), (-2028661162)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_0 - 1] [i_1 + 2] [i_2] [i_0 - 1] [i_2] [i_0] [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) 2028661172)))))));
}
