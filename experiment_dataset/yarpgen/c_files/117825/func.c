/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117825
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((0), (((/* implicit */int) arr_2 [i_1])))))))) & ((((+(((/* implicit */int) (unsigned short)23017)))) * (((0) * (-1674282051)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2044643068)) && (((/* implicit */_Bool) (unsigned short)6880))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45299))))) - (((int) (unsigned short)20237)));
                                arr_19 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-846067822))))));
                                arr_20 [i_4] [1] [i_2] [i_4] [i_1] [i_0] [9] = (~((~(2213321915846123124ULL))));
                                arr_21 [i_0] [i_0] [i_0] &= (((!(((/* implicit */_Bool) arr_6 [15])))) ? ((-(((((-847911378) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0])) - (25913))))))) : ((-((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((2044941536) - (2044941536))))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)20234);
            }
        } 
    } 
    var_17 = (+(min((((0ULL) + (0ULL))), ((-(7831990317486421599ULL))))));
}
