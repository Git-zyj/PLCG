/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137176
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = arr_6 [i_0];
                    var_18 = ((/* implicit */signed char) (((-(((((/* implicit */int) arr_4 [i_0] [i_1])) >> (((((/* implicit */int) var_3)) - (217))))))) + (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), ((unsigned char)110)))))));
                    var_19 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)110))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) (unsigned char)146))))) % (((/* implicit */int) (unsigned char)145))))));
                }
            } 
        } 
    } 
    var_20 = min((var_2), (((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                arr_15 [(signed char)2] [i_4] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)121))));
                arr_16 [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned char) arr_5 [i_3] [i_3 + 1]))) % (((/* implicit */int) ((signed char) arr_2 [i_3])))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [(unsigned char)18] [(unsigned char)18] [i_4]))))) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) min((arr_13 [i_3] [i_4]), ((unsigned char)127)))))) > (min((((/* implicit */int) min(((unsigned char)145), (arr_3 [i_3 - 1] [i_4])))), ((+(((/* implicit */int) arr_14 [i_3])))))))))));
            }
        } 
    } 
}
