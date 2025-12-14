/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153977
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
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)54))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */_Bool) ((unsigned short) (unsigned short)35665));
                            arr_12 [i_1] [i_1] [i_0] [i_1] [i_0] = ((unsigned short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)7624)) : (((/* implicit */int) (unsigned char)179))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)42341)))), (max(((~(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) (unsigned short)8)))))));
                            arr_20 [i_1] [i_4] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61269)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) min(((unsigned short)65527), ((unsigned short)4284)))) : (((((/* implicit */_Bool) (unsigned short)57888)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)113)))))));
                            var_15 = ((/* implicit */_Bool) max((arr_5 [i_5] [i_1] [i_0]), (((unsigned char) (unsigned short)1993))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (min((min(((unsigned short)48557), (((/* implicit */unsigned short) (unsigned char)229)))), (((/* implicit */unsigned short) min((arr_4 [i_4] [i_4] [i_5]), (arr_4 [i_4] [i_4] [i_4]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
