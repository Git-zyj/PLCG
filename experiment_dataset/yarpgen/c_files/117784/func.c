/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117784
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL));
                arr_7 [5] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -6882051620643781168LL)) || (arr_2 [i_0 - 1] [i_0]))));
                arr_8 [i_1] = -1LL;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_11 += ((/* implicit */signed char) var_10);
                    var_12 = ((/* implicit */signed char) (((!((_Bool)1))) ? ((~(((/* implicit */int) arr_2 [i_3] [i_4])))) : (((/* implicit */int) arr_2 [i_2] [i_4]))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1838169155)) ? (max((237587316), (((/* implicit */int) (unsigned short)42535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_4])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((/* implicit */int) var_1))));
}
