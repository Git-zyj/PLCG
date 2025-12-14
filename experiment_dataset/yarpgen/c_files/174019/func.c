/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174019
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
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 1296687348)))))), (min((min((var_1), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (signed char)-30));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8743)) ? (((((/* implicit */_Bool) 1781164626U)) ? (1781164626U) : (2513802680U))) : (((/* implicit */unsigned int) 10))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1781164627U)) || (((/* implicit */_Bool) 2513802669U)))))) % (2991331218U)));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_3]))))))));
                                arr_14 [0] [i_1] [i_2] [(unsigned short)3] [i_4] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)27))))));
                                var_17 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_2 + 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)43513))))) / (((((/* implicit */_Bool) max((1088877502U), (((/* implicit */unsigned int) (signed char)-126))))) ? (2513802670U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
    var_19 = ((/* implicit */unsigned int) ((min((2513802669U), (1763631279U))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3025)))))));
}
