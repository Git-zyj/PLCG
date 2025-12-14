/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13851
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
    var_11 = ((/* implicit */int) ((_Bool) var_4));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) 1104157603877571805LL);
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)76)), ((-2147483647 - 1))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) max((arr_0 [i_0 + 1]), (max((((/* implicit */int) arr_2 [i_0])), (var_7))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) 31957109);
        var_14 = ((/* implicit */signed char) (~(2147483647)));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 7; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((int) (_Bool)1));
                            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_3 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_8 [i_2] [i_1] [i_2 + 1]) ^ (arr_8 [(_Bool)0] [i_1] [i_2 - 1])));
            var_17 = ((/* implicit */_Bool) var_5);
            arr_20 [i_2 - 2] [i_1] [i_1] = ((/* implicit */signed char) (~(var_5)));
        }
    }
}
