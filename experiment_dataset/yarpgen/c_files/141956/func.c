/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141956
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (var_15)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
            arr_5 [i_0] = ((((/* implicit */int) arr_0 [i_0])) % (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_9)))));
            var_22 = ((/* implicit */int) max((var_22), (((int) (_Bool)0))));
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))));
        var_24 ^= ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
    }
    var_25 = ((((/* implicit */_Bool) ((max(((_Bool)1), (var_9))) ? (711828086) : (var_1)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_19 [(_Bool)1] [i_5] [i_4] [2] [(_Bool)1] |= ((/* implicit */int) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_13 [i_4 - 1] [i_6] [i_2 - 1]))) != (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_3 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))));
                                var_26 = ((((min((-2147483632), (-1196097055))) != (((((/* implicit */int) (_Bool)1)) << (((var_2) + (1244241127))))))) ? (((/* implicit */int) (((-(var_3))) == (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : (((/* implicit */int) min(((_Bool)1), (var_6)))));
                                var_27 = ((/* implicit */_Bool) min((var_27), (((arr_7 [i_4 + 1] [i_6]) > (2097144)))));
                                var_28 = ((int) 711828068);
                            }
                        } 
                    } 
                } 
                arr_20 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((710874725) * (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
