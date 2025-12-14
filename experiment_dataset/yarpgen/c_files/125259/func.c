/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125259
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
    var_12 = ((-6699640414226391493LL) / (((/* implicit */long long int) ((/* implicit */int) var_1))));
    var_13 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((1603886231), (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) var_3)))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_5 [2ULL] [i_1] [i_1])) * (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_2 - 2]), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (var_8))))))) ? (max((min((((/* implicit */int) (unsigned short)57745)), (-1603886232))), (((/* implicit */int) var_9)))) : (((int) arr_9 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                            var_14 &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) 8778913153024ULL)))));
                        }
                    } 
                } 
                var_15 = arr_4 [i_0] [i_0];
            }
        } 
    } 
}
