/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123684
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_0)));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_1);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */signed char) (unsigned short)49274);
                        arr_15 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (short)3968);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 2794800787U))) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) var_2))));
        var_13 = ((/* implicit */unsigned short) ((long long int) ((arr_2 [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16242))))));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) (unsigned short)49267);
    }
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned long long int) ((signed char) (-(((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_5))));
}
