/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185886
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 3989009925870351795LL))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 6; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [8LL] = ((/* implicit */unsigned int) var_8);
                        arr_10 [i_3] [i_1] = ((/* implicit */unsigned char) (+(6252445182092812209ULL)));
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 7; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_3] [2U] [i_1] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_6 [i_2] [i_4 - 4] [i_2] [i_2 - 1] [(_Bool)1])))) + (2147483647))) << ((((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27997))) ^ (var_0))))) - (5520516008789156199LL)))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) 3496237404U);
                        }
                    }
                } 
            } 
        } 
    }
}
