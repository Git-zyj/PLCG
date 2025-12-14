/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186198
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))) : ((~(((/* implicit */int) var_3))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
                            var_16 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((~(((/* implicit */int) var_11)))))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
}
