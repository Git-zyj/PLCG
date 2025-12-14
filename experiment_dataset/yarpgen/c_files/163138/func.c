/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163138
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) -5929101243179755273LL)))));
    var_20 = ((/* implicit */_Bool) var_14);
    var_21 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */long long int) var_17);
            var_23 = ((/* implicit */int) ((unsigned int) ((signed char) (unsigned short)39009)));
        }
        var_24 = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)51299))))));
        var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (var_6))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_26 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 5929101243179755257LL)))));
            arr_8 [(signed char)12] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9223372036854775796LL)))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((short) 467613807U)))));
        }
        for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) -5929101243179755273LL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5929101243179755250LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_21 [i_5] [i_3] [i_3 - 2] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) -1029064398);
                            var_28 = (((!(((/* implicit */_Bool) var_17)))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            arr_22 [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
    }
}
