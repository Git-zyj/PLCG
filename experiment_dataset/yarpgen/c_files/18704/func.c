/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18704
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [(_Bool)1] [i_1] [i_0]);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) arr_2 [(signed char)15] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)39)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_8 [i_0] [i_0])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (5626355397493321055ULL) : (((/* implicit */unsigned long long int) 14LL)))))))))))));
    }
    var_18 |= ((/* implicit */signed char) (-(((((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)25)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : ((~(12820388676216230590ULL)))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (max((4294967295U), (((/* implicit */unsigned int) var_3)))))) / ((-(max((((/* implicit */unsigned int) var_14)), (4294967292U)))))));
}
