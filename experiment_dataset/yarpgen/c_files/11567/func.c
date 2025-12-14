/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11567
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)100))))), ((-(((((/* implicit */_Bool) (short)-8406)) ? (1278263624153980794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))))));
                            arr_10 [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0 - 2] [i_0])), (519517587587550212LL))))) ? ((+(((/* implicit */int) arr_0 [i_2 - 1] [i_3])))) : (((int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3 - 2] [i_3] [i_3 - 2])))))));
                        }
                    } 
                } 
                var_19 = var_12;
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_9))));
    var_21 = ((/* implicit */int) var_16);
    var_22 = ((/* implicit */signed char) (~(var_17)));
    var_23 = ((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)17693)));
}
