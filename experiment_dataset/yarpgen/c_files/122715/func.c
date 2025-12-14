/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122715
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
    var_17 = ((/* implicit */signed char) 0LL);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) ((unsigned char) 30LL))), (var_13)));
                arr_6 [i_1] [i_1] [i_1] = max((((unsigned int) ((arr_0 [i_0]) ? (3823387484U) : (((/* implicit */unsigned int) arr_1 [(short)4] [(short)4]))))), (min((min((3823387474U), (((/* implicit */unsigned int) (signed char)32)))), (((((/* implicit */_Bool) 12LL)) ? (4294967295U) : (((/* implicit */unsigned int) arr_1 [19LL] [i_1 - 1])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((short) min((-6464857639813640226LL), (((/* implicit */long long int) arr_12 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3])))));
                                var_19 = (~(((/* implicit */int) ((short) (short)23083))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) ((_Bool) (signed char)111))), (max((-1101470522437865962LL), (((/* implicit */long long int) var_7)))))));
                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) var_15))))) && (((/* implicit */_Bool) ((signed char) 11064408147480748465ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_13);
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(var_11))))));
    var_23 = ((/* implicit */short) ((((/* implicit */int) var_4)) * ((+(((int) var_2))))));
}
