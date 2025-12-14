/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130889
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((2ULL) == (arr_3 [i_2 - 1] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0])))) : (min((arr_7 [i_0]), (arr_3 [i_1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_0] [i_2 - 1] [i_0] [i_4] [i_1] = ((/* implicit */int) (-((-(arr_7 [i_3])))));
                                var_14 *= ((/* implicit */unsigned char) ((int) var_7));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            {
                var_15 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (+(arr_14 [i_6 + 1])))))));
                arr_20 [i_5] [i_6 + 4] [i_6 + 4] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(arr_14 [i_5])))), (arr_15 [i_5] [i_6])));
                var_16 = ((/* implicit */int) (signed char)55);
                arr_21 [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5051039705976818527ULL)))) ? ((+(-611854930))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) arr_19 [i_5])), (2846246563U)))))));
            }
        } 
    } 
}
