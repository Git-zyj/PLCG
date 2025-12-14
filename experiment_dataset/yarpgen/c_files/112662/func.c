/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112662
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_14)));
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_1 + 2]))))), (arr_6 [i_0 + 1] [i_0 - 1] [i_1 + 2])));
                    var_17 += ((/* implicit */_Bool) (+(arr_3 [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) ((int) (short)13)))), (max((((/* implicit */long long int) var_5)), (max((var_4), (((/* implicit */long long int) (unsigned char)38))))))));
                        var_19 &= ((/* implicit */unsigned char) var_14);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((-7562789719806111115LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((-2925016207895997536LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))), (((/* implicit */long long int) (short)-17986)))))));
                        var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_1 + 1])))) && (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) - (var_9))), (arr_10 [i_0] [i_0 - 1] [i_1 + 2] [i_2]))))));
                        var_23 ^= ((/* implicit */_Bool) ((short) ((_Bool) arr_0 [i_4])));
                    }
                }
            } 
        } 
    } 
}
