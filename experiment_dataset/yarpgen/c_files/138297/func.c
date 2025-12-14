/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138297
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
    var_10 -= ((/* implicit */unsigned char) var_7);
    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_3] [i_3] = max(((!(((/* implicit */_Bool) arr_11 [i_2 - 2] [i_0] [i_3 + 1] [i_3])))), (arr_8 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1]));
                            var_13 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) arr_11 [i_0] [i_2 + 2] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_14 = (unsigned char)32;
                arr_13 [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_7 [i_0] [i_1])) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_8 [(unsigned short)12] [i_0] [(unsigned short)12] [i_0]))))))));
            }
        } 
    } 
}
