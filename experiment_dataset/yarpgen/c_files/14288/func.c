/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14288
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
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] = ((signed char) (+(((/* implicit */int) (signed char)-37))));
                            arr_15 [i_1] [i_1] [(_Bool)1] = max((max(((signed char)97), (((/* implicit */signed char) (_Bool)0)))), ((signed char)65));
                            var_21 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)43956)), (((((/* implicit */int) ((signed char) (signed char)37))) + (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_7 [i_2] [i_1])) : (((/* implicit */int) (short)-1))))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [(signed char)16] [i_0]))));
            }
        } 
    } 
    var_23 = ((unsigned int) var_0);
}
