/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13582
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
    var_13 = ((/* implicit */unsigned int) ((int) ((short) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) 579200901)) : (var_7)))));
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((10368403103624398875ULL) - (((/* implicit */unsigned long long int) -1803427094)))) : (1729382256910270464ULL))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((1803427081), (((/* implicit */int) (!(((/* implicit */_Bool) 16717361816799281152ULL)))))));
                    arr_7 [i_0 + 2] [i_1] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(16717361816799281151ULL)))) ? (((/* implicit */unsigned long long int) ((166344796) & (((/* implicit */int) (short)32764))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9358378264343319674ULL))))), (((arr_0 [i_0 + 2]) & (((arr_4 [i_0 + 1]) & (((/* implicit */unsigned long long int) var_2))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) 1865326928949787950ULL);
                    arr_15 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 9223372036854775805LL)) ? (3254349045U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (signed char)4)))) : (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) -405060671);
                                var_18 = (~((-((+(arr_0 [i_3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
