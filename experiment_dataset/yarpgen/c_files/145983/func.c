/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145983
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_3)))), (min((((/* implicit */int) (_Bool)1)), (var_10)))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_1)), (var_9))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))))), (arr_4 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) 15429626369442586823ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_15 -= ((/* implicit */unsigned char) ((int) (signed char)108));
                arr_9 [i_1] [i_2 - 1] [i_2] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_2 + 1])) ? (arr_5 [i_2 + 2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
            }
            var_16 = ((/* implicit */short) ((unsigned short) 1542096327U));
            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_2 - 2] [10LL] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_1]))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (-2920954233462542413LL))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */long long int) arr_5 [(unsigned char)16]))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned long long int) (+(((4294967295LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))))));
        var_18 = ((/* implicit */_Bool) arr_1 [i_4] [i_4]);
        var_19 = ((/* implicit */signed char) arr_4 [i_4]);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) arr_4 [i_4])) : (var_5)))))));
    }
    var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 2920954233462542412LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15660))) : (-4294967295LL))));
}
