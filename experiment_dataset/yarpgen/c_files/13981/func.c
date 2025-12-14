/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13981
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
    var_19 = (-(((/* implicit */int) var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) min((1610612736), (max((((/* implicit */int) ((signed char) var_1))), (min((arr_0 [i_1]), (((/* implicit */int) var_11))))))));
                    var_21 = ((/* implicit */unsigned int) (short)5927);
                }
                /* LoopNest 3 */
                for (unsigned int i_3 = 4; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) + (((/* implicit */int) (unsigned short)0))))) ? (((((((/* implicit */int) (unsigned short)65523)) + (var_10))) + (((/* implicit */int) var_18)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)11687))))));
                                var_23 = ((/* implicit */unsigned long long int) (unsigned char)25);
                                var_24 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)226))))), (((unsigned int) 3U))));
                                var_25 = ((/* implicit */int) var_6);
                                var_26 = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
