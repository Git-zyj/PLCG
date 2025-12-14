/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120560
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
    var_10 = ((/* implicit */unsigned int) (+(min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((unsigned int) var_7));
        arr_3 [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) 158920615U)) ? (158920639U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4136046680U)))))))));
        var_12 = ((/* implicit */unsigned long long int) (-(var_7)));
    }
    for (short i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_4)) || (var_5))) ? ((+(158920615U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2]))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        var_14 += ((/* implicit */int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */short) arr_1 [i_1]);
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_23 [i_5] [i_6] [i_7] = (+(max(((~(var_8))), (((/* implicit */unsigned int) var_9)))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-((-(4136046687U))))))));
                        arr_24 [i_1] [2U] [i_1 + 1] [i_1 - 3] = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned int) (~(var_9)))), (min((((/* implicit */unsigned int) var_0)), (var_8))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_7)))) ? (((int) var_4)) : (((((int) 158920589U)) + (((/* implicit */int) var_5))))));
}
