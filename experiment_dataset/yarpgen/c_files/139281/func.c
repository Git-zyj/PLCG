/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139281
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [(short)5] = ((/* implicit */short) min(((+(arr_2 [i_0]))), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_1))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_10 = (+(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) var_7)), (3114888497U))))));
                        arr_13 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_5))))))) ? (min((((/* implicit */unsigned int) (unsigned char)223)), (arr_7 [(short)16] [(short)16]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned char) var_0)))))));
                        var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 3114888497U)))) ? (3114888484U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) ((unsigned int) 3114888497U));
    }
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(var_3))))));
    var_14 |= ((/* implicit */unsigned char) 1180078828U);
}
