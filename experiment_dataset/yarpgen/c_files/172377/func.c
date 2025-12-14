/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172377
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
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (536059382U)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_2);
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
                    var_18 *= ((/* implicit */short) (((_Bool)1) ? (arr_5 [i_2 - 1] [i_1] [11] [i_2]) : (((/* implicit */int) var_3))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((int) var_2))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_3] = ((/* implicit */signed char) 600774764U);
                        var_20 = ((/* implicit */int) (((+(3694192531U))) & (((unsigned int) 3694192531U))));
                        var_21 = ((((((/* implicit */_Bool) 1570971665)) && (((/* implicit */_Bool) var_11)))) ? (((long long int) var_11)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))));
                        var_22 *= ((/* implicit */_Bool) 3694192557U);
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((3694192532U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1570971665)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */int) var_10);
        arr_15 [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((signed char) -1064923488462981315LL));
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15074)) ? (var_2) : (-1570971666)));
        var_26 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_5)))))) : (((/* implicit */int) var_3)));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_27 = ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (arr_12 [i_5] [i_5]) : (arr_12 [i_5] [i_5]));
        var_28 -= ((unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
}
