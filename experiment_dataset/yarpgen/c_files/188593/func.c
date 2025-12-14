/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188593
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_11)), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_0 [i_0])))), (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (var_1)))))) < (min((((/* implicit */unsigned int) min((550485860), (((/* implicit */int) var_15))))), (min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 12977663014011716711ULL))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((int) arr_1 [i_0]))) != (((((/* implicit */_Bool) 12977663014011716711ULL)) ? (960293854U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16619))))))) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 5469081059697834905ULL)) ? (1353332151) : (((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */signed char) ((min(((_Bool)1), ((_Bool)1))) ? (arr_3 [7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_22 = ((var_13) - (((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) >= (min((((/* implicit */int) var_7)), (var_13)))))));
                        var_23 = arr_16 [i_1] [i_1] [i_3] [i_4];
                        arr_17 [i_3] [i_2 - 2] = ((/* implicit */unsigned int) (+(-398676050)));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((arr_14 [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (0U)))))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] &= ((/* implicit */signed char) ((int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (5469081059697834904ULL))))));
    }
}
