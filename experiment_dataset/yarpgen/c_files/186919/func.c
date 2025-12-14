/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186919
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
    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)63)) ? (13668073014503372732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1]);
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 9899738591259278343ULL))))) | (((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1] [i_0] [i_0])), (arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_9 [i_1] [i_2 - 4] [i_2 - 4])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) arr_8 [i_0] [i_2 - 3] [i_2 - 4])))))));
                            arr_12 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)2068)) >> (((arr_8 [i_3] [i_2 - 3] [i_1]) - (455918531U))))))))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (signed char)-6)) / ((-(((/* implicit */int) (signed char)-61)))))));
}
