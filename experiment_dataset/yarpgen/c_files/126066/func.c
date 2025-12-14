/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126066
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 + 3] [i_3 - 3] [i_3 + 3])) && (((/* implicit */_Bool) arr_11 [i_3] [i_3 - 2] [i_3] [i_3 + 2]))));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1]))))) ? (((int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_1))))) : ((~(((int) (_Bool)1))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_24 = ((/* implicit */signed char) var_3);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0]))));
            var_26 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
        }
    }
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) var_17);
        var_28 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))))));
    }
    var_29 = ((/* implicit */unsigned char) ((unsigned int) var_2));
    /* LoopNest 3 */
    for (unsigned int i_6 = 4; i_6 < 22; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_27 [i_6] [i_8] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_17)))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) 2216836364U))));
                                var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                var_32 = arr_29 [i_6] [i_6] [i_8] [i_6];
                            }
                        } 
                    } 
                    arr_33 [i_6] [i_8] [i_8 + 2] = (!(((/* implicit */_Bool) (unsigned char)150)));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)27295)) ^ (((/* implicit */int) var_7))))));
}
