/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156133
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((var_1) ? (var_0) : (var_8)))) : (max((((/* implicit */unsigned long long int) var_10)), (12341556321870669310ULL))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [(_Bool)1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) arr_4 [i_1])) - (arr_7 [i_0] [i_0] [i_0] [3U]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_2] [i_1])))))) - (((/* implicit */unsigned int) (-(((int) var_1)))))));
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-22778)) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28505)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) : (6105187751838882306ULL)))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [7LL] [i_2] [i_4]))))), ((((_Bool)1) ? (12341556321870669309ULL) : (((/* implicit */unsigned long long int) 1612259259))))))));
                            }
                        } 
                    } 
                } 
                var_13 = (+((~(var_6))));
            }
        } 
    } 
}
