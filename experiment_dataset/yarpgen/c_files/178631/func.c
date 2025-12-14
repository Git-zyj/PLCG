/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178631
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_8 [i_0] [i_0] = ((/* implicit */short) ((arr_2 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_13)) > (var_6)))) : (((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) >> (((((/* implicit */int) (short)32762)) - (32749)))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_17 [i_4 + 3] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 4294967295U)))))), (arr_15 [i_0] [i_4] [i_5] [i_0])));
                        var_21 = ((int) (+(var_2)));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
}
