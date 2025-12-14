/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141479
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_10 *= ((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)212))) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            var_11 |= ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))));
            arr_7 [5U] = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_9))))));
        var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) != (((/* implicit */int) arr_11 [i_2] [i_2])))) ? ((-(((/* implicit */int) arr_3 [1U])))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2]))))));
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) (unsigned char)252);
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)248)))))));
            var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_2] [i_3]))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (3528316033U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)247))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned char) ((signed char) (signed char)-123));
            arr_17 [i_2] [i_4] = arr_5 [i_2] [i_2];
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_4))))));
            arr_20 [i_5] = ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_5] [i_5]));
            arr_21 [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2])) << (((/* implicit */int) arr_10 [i_2] [i_2]))));
            var_19 = 1073741820U;
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            arr_25 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(_Bool)1]))))) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)0))))));
            var_20 = ((/* implicit */unsigned int) arr_9 [i_2]);
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(766651267U))))));
            var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)1)));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_15 [i_2] [i_2] [i_2]))));
        }
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : ((((!(((/* implicit */_Bool) (signed char)19)))) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))))))))))));
    var_26 |= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7))))))))));
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (var_6))))) - (28669U))))))));
}
