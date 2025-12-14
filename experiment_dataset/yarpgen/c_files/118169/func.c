/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118169
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
    var_10 = ((/* implicit */int) ((((18446744073709551615ULL) <= (1ULL))) ? (3765418614U) : (((/* implicit */unsigned int) var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((arr_8 [i_2] [i_1] [i_1]) != (((/* implicit */int) arr_4 [1ULL] [i_1] [i_0])))) || (((/* implicit */_Bool) var_2)))) ? ((+(330900427U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((13ULL) + (arr_2 [i_2] [i_0]))))))))));
                    arr_11 [i_2] = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_3] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_9));
                                arr_18 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) (((+(arr_15 [i_4] [i_2] [i_3] [i_2] [i_3]))) % ((((!(((/* implicit */_Bool) 18446744073709551608ULL)))) ? (1293975700) : (((/* implicit */int) ((_Bool) 8444249301319680ULL)))))));
                                arr_19 [7] [i_2] [i_0] = ((((/* implicit */_Bool) -2035498585)) ? (arr_2 [8ULL] [i_3]) : (18438299824408231929ULL));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */_Bool) max((((arr_5 [i_2] [13ULL] [i_0]) * (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) ((_Bool) arr_5 [7ULL] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1396803385)) ? (3840319672U) : (92823695U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (25ULL) : (((/* implicit */unsigned long long int) 1247176917))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (1130054640) : (-1792059180)))) : (var_7))));
    var_13 = max((((/* implicit */unsigned long long int) (_Bool)1)), (14097143605524304401ULL));
}
