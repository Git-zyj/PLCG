/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160052
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
    var_11 = ((/* implicit */unsigned short) min((var_2), (var_2)));
    var_12 = ((/* implicit */signed char) max(((+(11973991335574561113ULL))), (((/* implicit */unsigned long long int) (signed char)-97))));
    var_13 = ((/* implicit */int) max((var_13), (var_7)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (~(arr_2 [i_0])));
                    var_14 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((signed char) var_8))))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_2])) ? (max((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_1] [i_2])))) : (max((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (-2601703925798319210LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)97)))), (max((2147483647), (((/* implicit */int) (unsigned char)71)))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-((-(((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
