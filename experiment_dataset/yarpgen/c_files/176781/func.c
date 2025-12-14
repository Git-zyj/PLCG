/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176781
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) & (((unsigned int) min((((/* implicit */unsigned int) arr_8 [i_3] [i_1])), (arr_7 [i_3] [12]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (~((((-(var_11))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) var_13)))))))));
                            var_19 = (((((-(var_16))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))) / ((((-(arr_10 [i_4] [i_2] [i_0]))) / (((/* implicit */unsigned int) (+(arr_5 [i_4] [15] [i_4])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(2450285033U)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) min(((signed char)-28), (var_0))))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]))) & (((324448907U) | (arr_17 [i_5] [i_5])))));
        var_22 += ((/* implicit */unsigned char) -926688911);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((unsigned int) ((signed char) arr_4 [i_6])));
                    var_23 = ((_Bool) (-(arr_5 [i_7] [i_7] [i_7])));
                }
            } 
        } 
    } 
}
