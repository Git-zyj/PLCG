/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118804
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
    var_12 = ((((/* implicit */_Bool) 10347743688453321909ULL)) ? (8099000385256229707ULL) : (18038889075117677778ULL));
    var_13 = var_2;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_6 [i_3] [i_2] [i_1] [8ULL]) : (arr_8 [(_Bool)1] [i_1] [i_2] [i_3])))));
                            var_15 = ((((/* implicit */_Bool) 8099000385256229707ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10347743688453321908ULL));
                        }
                    } 
                } 
                arr_10 [12ULL] [i_1] = ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3767538435373501205ULL) : (arr_6 [i_0] [i_0] [i_0] [i_1 + 1])));
                var_16 = arr_9 [i_0] [1ULL] [i_1 - 1] [10ULL];
            }
        } 
    } 
}
