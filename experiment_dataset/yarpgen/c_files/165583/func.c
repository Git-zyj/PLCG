/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165583
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_2] = ((/* implicit */long long int) arr_8 [i_0] [(signed char)8] [i_2] [i_2]);
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) | (((arr_6 [i_0] [i_1] [i_2]) | (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_2 [i_1] [i_2] [i_3])))))));
                        var_16 = (-(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))) : (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10))))));
                    }
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (-8210062022612999283LL)));
                    arr_11 [5U] [5U] [5U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_3 [i_0] [14])) : ((~(((/* implicit */int) arr_3 [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5))))) ? ((~(((((/* implicit */int) var_2)) | (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_0))));
}
