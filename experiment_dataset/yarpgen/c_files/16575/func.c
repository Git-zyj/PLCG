/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16575
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (unsigned short)27906);
                    var_20 ^= ((/* implicit */unsigned short) 936197352U);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)37642), (arr_1 [i_0] [i_1]))))) % (var_13));
                                var_22 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (signed char)-1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [6] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_2))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (signed char)57))));
                        arr_17 [10ULL] [i_0] [i_0] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)20222), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5803))) : (var_7))));
                        arr_18 [i_0] [i_1] [(_Bool)1] [(signed char)10] |= ((/* implicit */unsigned long long int) (+(936197352U)));
                    }
                    var_25 = (~(max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) (_Bool)1)) << (((1844927944U) - (1844927914U))))))));
                }
            } 
        } 
    } 
}
