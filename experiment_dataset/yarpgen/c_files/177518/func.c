/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177518
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-14980)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_2]))))) ? (((unsigned int) arr_0 [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2 + 1]))) : (((5953925721479934472LL) & (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))))))));
                    var_12 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) (short)-64)), (3706136823671889601LL))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (1073741823U)))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)88)) : (((/* implicit */int) arr_2 [i_0]))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned int) 7866284260619706074ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17620033151960626745ULL))), (min((7866284260619706074ULL), (3226623113523737541ULL)))));
        arr_9 [i_0] = ((/* implicit */unsigned int) arr_1 [7LL]);
        var_13 ^= ((/* implicit */short) ((max((((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (arr_5 [i_0] [i_0]))) ? (((/* implicit */int) arr_6 [10U] [i_0] [10U] [(signed char)0])) : (((/* implicit */int) ((short) (+(((/* implicit */int) (short)63))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */long long int) 3221225478U);
        arr_12 [i_3] [i_3] = arr_10 [12U] [i_3];
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_10 [i_3] [i_3])) - (19022)))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 8; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            var_15 ^= ((unsigned short) ((((/* implicit */_Bool) max((2387030109U), (3140852683U)))) ? (((/* implicit */int) arr_5 [i_4] [i_6 + 1])) : (((/* implicit */int) ((unsigned char) arr_20 [i_4] [i_7] [i_7])))));
                            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (826710921748924871ULL) : (((/* implicit */unsigned long long int) -7LL))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((1907937192U) >> (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(((/* implicit */int) max((var_9), (var_0))))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (var_5)))));
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))))), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
