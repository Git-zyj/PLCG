/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182868
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
    var_18 += ((/* implicit */unsigned long long int) max((var_10), (-1252966024)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1279916577641791329ULL))));
        var_20 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_0 + 4]))))));
        var_21 = ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (-218337883))))) << ((((+(((/* implicit */int) arr_0 [i_0 + 4])))) + (16889))));
        var_22 = ((/* implicit */signed char) (-(17259595555634348385ULL)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0 + 2] [i_0 + 2] [(signed char)0] [13ULL] = ((/* implicit */long long int) ((int) (signed char)-98));
                        arr_13 [i_0] [i_3] [i_2] = ((/* implicit */int) var_14);
                    }
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) (short)504))))), (min((arr_3 [i_2]), (((/* implicit */unsigned long long int) 2147483647))))));
                    var_24 = ((/* implicit */_Bool) (short)-19323);
                }
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) var_17);
        var_26 = ((/* implicit */short) var_4);
    }
    var_27 = ((/* implicit */unsigned long long int) (~(((long long int) max((var_12), (((/* implicit */short) var_17)))))));
}
