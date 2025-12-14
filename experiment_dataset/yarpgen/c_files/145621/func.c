/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145621
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
    var_10 = (((+(((/* implicit */int) var_6)))) >= ((~(((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            arr_4 [i_0] [i_1 - 1] = ((/* implicit */short) ((((arr_0 [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) : (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) % (((/* implicit */int) (_Bool)1)))))) != ((+(((/* implicit */int) var_5))))));
            arr_5 [i_0] = ((_Bool) (_Bool)1);
            var_11 ^= ((short) max((((((/* implicit */int) var_1)) + (((/* implicit */int) var_9)))), (((/* implicit */int) ((arr_0 [(short)7] [i_1 - 1]) && (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])))))));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_9))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) ((_Bool) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) (short)-5747))))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_2)))))))) ? (max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_1))));
        }
        for (short i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            var_15 -= ((/* implicit */_Bool) (short)-25679);
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_0 [i_4 - 1] [i_0 - 1])) ^ (((/* implicit */int) var_8))))))));
                            var_17 = (short)-13170;
                        }
                    } 
                } 
            } 
        }
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) var_6))))));
        arr_16 [i_0] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_3)))));
        arr_17 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) max((arr_12 [i_0]), (var_2)))) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((_Bool) (!((_Bool)1)))))));
    }
    for (short i_7 = 4; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((((/* implicit */int) arr_18 [(_Bool)1])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_7 + 2]))))));
        arr_21 [(short)18] [(short)8] = var_7;
    }
    for (short i_8 = 4; i_8 < 17; i_8 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_0)))))) : (((((/* implicit */int) ((short) arr_20 [i_8]))) & ((-(((/* implicit */int) var_3))))))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_21 = ((/* implicit */short) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 19; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (_Bool)1);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) arr_30 [i_9] [i_8 + 3] [i_9] [i_11 - 2] [i_11 - 2])))))));
                            var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)13905)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << ((((+(((/* implicit */int) var_4)))) + (9377))))))));
            }
        }
    }
    var_26 = ((/* implicit */short) ((_Bool) var_4));
    var_27 = ((/* implicit */short) var_7);
}
