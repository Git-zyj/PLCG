/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143671
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
    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)161)))), (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((((/* implicit */int) (unsigned short)65529)) >> (((((/* implicit */int) (unsigned short)30527)) - (30525))))) : ((+(var_3))))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (7504641991844013843ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) max(((unsigned short)58736), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((arr_5 [i_4 - 1] [i_0 - 1]), (((unsigned char) var_7))))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)0))))))));
                                var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_5)) - (53065)))))), (((max((((/* implicit */unsigned long long int) var_8)), (var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_7))))))))));
                                arr_15 [i_1] [i_1] [(short)7] = ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned char)87), (arr_13 [i_0 - 1])))), ((-(((((/* implicit */int) var_11)) + (((/* implicit */int) (_Bool)0))))))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [(_Bool)1] [(unsigned char)19] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)40)) == (((/* implicit */int) (unsigned char)94)))) ? (max((((var_11) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_0 - 1] [i_4 - 1])))) : (((/* implicit */int) min((var_7), ((unsigned char)231))))));
                                var_16 = ((/* implicit */int) 0ULL);
                            }
                        } 
                    } 
                    arr_17 [i_0] [3ULL] [i_0] = max(((unsigned char)209), (((/* implicit */unsigned char) var_4)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((+(max((((/* implicit */int) var_5)), (var_3)))))));
}
