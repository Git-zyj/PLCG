/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182354
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (-(((-903571814) - (((/* implicit */int) arr_1 [i_0])))));
        var_10 -= ((/* implicit */_Bool) min(((~(min((((/* implicit */int) (unsigned char)177)), (var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_11 = ((/* implicit */short) ((int) arr_4 [i_1] [i_1]));
        arr_6 [i_1] = var_3;
        var_12 = ((/* implicit */int) (unsigned char)46);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20207))))) ? (((/* implicit */int) var_8)) : (((int) ((((/* implicit */int) (unsigned char)131)) % (var_3)))));
                            arr_20 [i_4] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */int) var_4);
                        }
                        arr_21 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_0 [i_2])))))))) >> (((((/* implicit */int) (short)-21621)) + (21650)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 4; i_7 < 16; i_7 += 1) 
        {
            for (short i_8 = 3; i_8 < 17; i_8 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (short)24397);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) -2003714543)))));
                                var_16 = min((arr_24 [i_7] [i_7 + 2] [i_7] [i_7]), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 18; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), ((-(((/* implicit */int) ((unsigned char) var_0)))))));
                                arr_37 [i_2] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 32256)) ? ((+(2003714543))) : (((((((/* implicit */int) arr_17 [11] [i_11 - 3] [i_7] [i_11 - 3])) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_11] [i_11 + 1] [i_7] [i_11])) + (6221)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2003714543)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [6] [i_2])) : (((/* implicit */int) (short)-21621))))) ? (33546240) : (((/* implicit */int) (!(arr_13 [i_2] [14] [i_2] [i_2]))))))))))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_6))));
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 = ((int) (((-(2147483647))) + ((~(-903571814)))));
}
