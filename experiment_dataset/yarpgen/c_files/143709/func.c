/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143709
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [6ULL] [6ULL] [i_3] [i_2] [(unsigned short)17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))) ? (var_6) : (var_6)))), (var_2)));
                                arr_14 [i_3] [i_1] [i_2] [i_3 + 1] [(_Bool)1] [i_2] [i_4] = ((/* implicit */unsigned char) min((2047), (((/* implicit */int) (!(((/* implicit */_Bool) 66584576U)))))));
                                arr_15 [i_3] [i_2] [i_3 - 1] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4659548626033413176LL)) ? (2376718034U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))) ? (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (-(var_6)))))) : (6775245676895464155ULL));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = (-(((/* implicit */int) var_1)));
}
