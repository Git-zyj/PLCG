/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175252
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_10 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_9))))) == (((/* implicit */int) ((unsigned short) var_3))))))));
                    arr_7 [1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (int i_4 = 4; i_4 < 21; i_4 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) : (var_6)))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_12 = ((/* implicit */int) var_7);
                    arr_16 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [i_4 - 4] [i_5] [i_3])) << (((((/* implicit */int) var_5)) - (160)))))))) ? (((/* implicit */unsigned int) (+(arr_11 [i_4] [i_3])))) : (((((/* implicit */_Bool) (~(351781221U)))) ? (max((3943186074U), (((/* implicit */unsigned int) 1053984823)))) : (((((/* implicit */_Bool) 4294967295U)) ? (3943186066U) : (((/* implicit */unsigned int) 1053984823))))))));
                    var_13 = max((((unsigned int) arr_11 [i_3] [i_4 + 1])), (((/* implicit */unsigned int) arr_10 [i_5])));
                }
                var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) arr_9 [i_3])) : (arr_12 [i_4])))))));
                arr_17 [i_3] [3] [i_3] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (351781224U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_14 [i_4 - 3] [i_4 - 2] [(unsigned char)16] [i_3])) ? (((/* implicit */unsigned int) arr_11 [i_4 - 4] [i_4 - 3])) : (3093822060U))));
            }
        } 
    } 
}
