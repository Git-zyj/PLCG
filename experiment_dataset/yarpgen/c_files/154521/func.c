/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154521
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
    var_18 = ((((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((-370323544) < (((/* implicit */int) var_16)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (-370323544)))) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) var_14))))));
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) == (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */unsigned short) (!(max((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                    arr_9 [i_0] [i_0] [(unsigned short)3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)19)), (((int) var_11))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 4; i_4 < 9; i_4 += 2) 
        {
            {
                var_21 = (+(min((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (-370323530) : (((/* implicit */int) (unsigned short)65291)))))));
                arr_14 [i_3] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (+(-370323551)))) || (((/* implicit */_Bool) (-(arr_11 [10U])))))));
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) arr_4 [i_3] [i_4 + 2] [i_4 + 2]);
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)245))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((-1084931476) > (((/* implicit */int) (signed char)-115))));
}
