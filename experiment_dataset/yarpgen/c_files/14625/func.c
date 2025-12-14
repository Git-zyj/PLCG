/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14625
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
    var_11 = (-(((((/* implicit */_Bool) (signed char)10)) ? (var_0) : (((/* implicit */int) var_4)))));
    var_12 = ((/* implicit */signed char) var_10);
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) var_8)))))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) <= (arr_4 [i_1 + 1] [i_1] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = (+(arr_7 [i_4 + 3] [i_3 + 1] [i_3 + 1] [i_1 - 1]));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_1] [i_3] [i_0] = ((signed char) ((((/* implicit */_Bool) arr_1 [(unsigned short)6] [(unsigned short)6])) ? (((/* implicit */int) (signed char)10)) : (max((((/* implicit */int) (unsigned char)39)), (arr_7 [i_0] [i_1] [i_3 - 1] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
