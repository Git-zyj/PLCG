/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122732
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
    var_12 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((0U) + (var_10)))) && (((/* implicit */_Bool) (-(var_9)))))))) | (468295795U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_13 = (-(min((min((1537765558U), (4294967295U))), (4294967295U))));
                        var_14 |= ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (min((3826671525U), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (697630525U))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) | (4294967276U))))));
                        arr_10 [i_0] [i_0] [9U] [i_1] [i_3] = ((/* implicit */unsigned int) ((signed char) ((max((((/* implicit */unsigned int) (signed char)55)), (arr_3 [i_2] [i_1]))) & (arr_3 [i_1] [i_1]))));
                    }
                    arr_11 [i_0] [(signed char)19] [i_1] = ((max(((~(arr_9 [i_0] [i_1] [i_2] [i_2]))), (((/* implicit */unsigned int) arr_4 [i_2] [i_0] [i_1] [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((signed char) (+(var_10)))))));
}
