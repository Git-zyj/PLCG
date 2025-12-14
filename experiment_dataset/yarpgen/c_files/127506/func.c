/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127506
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_9))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))) ? (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_13)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))) : (var_3)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (int i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                {
                    var_18 = arr_10 [i_2] [i_4 + 3];
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned char)190)) - (((/* implicit */int) arr_13 [i_5 + 2] [i_4 + 3] [i_2])))) + (2147483647))) >> (((((/* implicit */int) var_13)) - (34))))))));
                                var_20 += ((((/* implicit */_Bool) (~(arr_9 [i_3] [i_6 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_3)))));
                                arr_19 [i_5] [i_5] [18ULL] [i_5 - 1] [i_6] [i_3] [i_5 - 1] = ((/* implicit */unsigned int) var_4);
                                var_21 = ((/* implicit */int) min((var_21), (var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-89))));
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_6))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (short)-28158))) ? (((/* implicit */int) min(((unsigned char)234), (((/* implicit */unsigned char) arr_22 [i_7]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_7] [i_7]))))))) - (((((((/* implicit */int) var_9)) * (((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) (signed char)111)) ? (1419830371) : (((/* implicit */int) arr_12 [i_7] [(unsigned short)10] [i_7] [i_7]))))))));
    }
}
