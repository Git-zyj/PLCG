/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168156
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(255954923U)));
            var_19 *= min(((signed char)61), ((signed char)78));
        }
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) arr_5 [i_2]);
        arr_7 [i_2] |= ((/* implicit */int) ((((((_Bool) 17689723448786896690ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (255954913U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2229595708U)) ? (480) : (((/* implicit */int) (_Bool)0)))))));
        var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) (_Bool)1)), (var_6))), (((((/* implicit */_Bool) 255954908U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1761439956U)))));
        var_22 *= ((/* implicit */signed char) (~(((((/* implicit */int) var_12)) << (((/* implicit */int) arr_6 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_23 = ((/* implicit */int) var_5);
        var_24 ^= var_0;
        var_25 = ((((/* implicit */int) (signed char)109)) < (((/* implicit */int) (_Bool)1)));
    }
    var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_9), (255954928U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (min((var_6), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-103))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_12))))) ? (var_9) : (((2065371587U) & (((/* implicit */unsigned int) -2068542417))))))));
}
