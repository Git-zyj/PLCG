/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163920
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_2] = -9031270669016717383LL;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_17 [(unsigned char)6] = ((/* implicit */signed char) 2529316928983132561LL);
                                arr_18 [(short)11] [i_3] [i_3] [i_3] [(unsigned short)15] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) ((((arr_6 [i_0] [i_2 + 1] [(signed char)15]) / (arr_6 [i_1] [i_1 + 3] [i_2 + 1]))) << (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))))));
                                var_13 = ((/* implicit */_Bool) min((min((arr_14 [i_2 + 1] [i_1 + 3] [i_1] [i_0]), (((/* implicit */int) arr_2 [i_1] [i_1])))), (min((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2529316928983132530LL)) ? (((/* implicit */unsigned int) (~(((int) var_9))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))))) + (((((/* implicit */_Bool) var_11)) ? (1196593459U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) var_10))), (var_10)));
}
