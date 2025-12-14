/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147923
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [8] [6ULL] [6ULL] [i_0 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12863397119040645615ULL)) ? (3026020695898820350ULL) : (((/* implicit */unsigned long long int) 536870911LL))))) ? (((/* implicit */int) var_2)) : (max(((+(arr_8 [i_0 - 2] [i_0 + 2] [i_0] [i_0]))), ((~(arr_0 [i_0] [(unsigned short)8])))))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3] [(_Bool)1]))));
                    }
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [6ULL] [i_0 - 3])))) ? (8646911284551352320LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (536870928LL))))), (((/* implicit */long long int) (~(1658298105))))));
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        var_21 &= ((/* implicit */unsigned long long int) (~(((int) arr_11 [i_4 + 1]))));
        var_22 += var_9;
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) 0))));
        arr_13 [i_4] = ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) -786431939))));
        arr_14 [(_Bool)1] = ((/* implicit */unsigned short) (~(arr_12 [i_4] [i_4])));
    }
}
