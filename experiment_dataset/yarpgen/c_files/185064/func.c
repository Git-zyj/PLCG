/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185064
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
    var_16 = ((/* implicit */long long int) ((max(((_Bool)1), (((((/* implicit */_Bool) (signed char)113)) || (((/* implicit */_Bool) (signed char)31)))))) ? (1109656996U) : (max(((~(var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) : (((3439563530U) >> (((4053015854U) - (4053015847U))))))))));
                            var_18 = (~(((((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) 2855527724U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [11U]))) : (-4175822840205403310LL))))));
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
