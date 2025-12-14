/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135752
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
    var_11 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_1) : (var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 |= ((/* implicit */short) var_3);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_14 += ((/* implicit */long long int) var_10);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_9));
    }
    var_15 += ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) (+(((((arr_0 [i_1] [i_2]) && (((/* implicit */_Bool) arr_1 [i_3])))) ? ((~(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) && (var_6))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) var_1)))))))) - (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (5567143242182612016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) var_0))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_7 [i_1]), (arr_8 [i_3])))), (((var_4) * (var_4)))))), (min((max((((/* implicit */long long int) 0)), (arr_9 [9] [i_2] [i_3] [(short)2]))), (((/* implicit */long long int) var_3)))))))));
                    var_19 &= ((/* implicit */unsigned char) (+(780434210)));
                }
            } 
        } 
    } 
}
