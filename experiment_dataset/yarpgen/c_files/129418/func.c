/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129418
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_8)))) ^ ((~(arr_1 [i_0 - 1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 4575657221408423936LL))))))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10285831899259817785ULL)));
            arr_12 [i_1] = ((((/* implicit */long long int) -822044962)) & (17508550003756499LL));
        }
        var_19 = ((/* implicit */long long int) 822044961);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1783424311012430335ULL)) ? (((/* implicit */unsigned int) -663482965)) : (var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (~(var_7)));
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_21 [i_1] [i_1] [i_1] [i_1])))) << ((((((_Bool)0) ? (-6015749183474091235LL) : (2562412166906312011LL))) - (2562412166906312003LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
