/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152012
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
    var_20 = ((/* implicit */signed char) (+(9007199254740984LL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_2 [12U]), (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_1] [12ULL])))))), (max((((/* implicit */long long int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) var_11)) ? (var_4) : (3253274188136454459LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((max((22343939330169765LL), (((/* implicit */long long int) arr_14 [i_4] [i_1] [16LL] [i_2 - 1])))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4])) : (1149641438)))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 3330629914881424327LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) -6620730156786669689LL)))))) : (((((/* implicit */_Bool) 1008806316530991104LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (4503599625273344ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(short)10] [i_3] [(short)10]))) ^ (arr_18 [i_0] [i_0] [i_0] [i_3]))), (((/* implicit */long long int) ((1109987601) >> (((((/* implicit */int) (short)-16978)) + (16990))))))))))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_8 [i_4] [i_1] [i_2 - 1] [i_3])) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned char) arr_14 [(_Bool)1] [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
