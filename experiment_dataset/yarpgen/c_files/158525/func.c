/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158525
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(((/* implicit */int) var_5)))))));
    var_12 = (+(((((((/* implicit */_Bool) 6849094080127941754ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) + (((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) min((max((((/* implicit */unsigned short) (signed char)-19)), ((unsigned short)12404))), (var_2)));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((signed char) arr_3 [i_0]))) ? (((/* implicit */int) max((var_2), ((unsigned short)511)))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_9)))))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) -8804757425632103087LL);
            }
        } 
    } 
}
