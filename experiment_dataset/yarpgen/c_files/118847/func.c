/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118847
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
    var_13 = ((/* implicit */signed char) (short)2810);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [(signed char)0] = ((/* implicit */unsigned short) (short)32763);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(unsigned short)7] [i_1] [i_3] = ((/* implicit */int) var_7);
                                var_14 = ((/* implicit */unsigned short) ((short) max((arr_12 [i_0] [i_4 + 2] [i_2] [i_3] [i_1] [i_2]), (arr_12 [i_0] [i_4 + 3] [i_2] [i_4] [i_1] [i_2]))));
                                var_15 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-47)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) 4294967293U)) ? (11567760086115293989ULL) : (15583230794574601668ULL))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((var_4) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))))));
}
