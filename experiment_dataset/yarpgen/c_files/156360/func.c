/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156360
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) << (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) 3918725210U);
                    var_18 = ((/* implicit */_Bool) arr_4 [i_0]);
                    arr_8 [i_2] [i_1] [i_2] [i_2] = arr_2 [i_0] [i_0];
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_3)));
                        arr_13 [i_2] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] [i_1] [16ULL] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) var_1);
                        var_20 += ((/* implicit */unsigned short) (+(((((/* implicit */int) var_13)) * (((/* implicit */int) var_11))))));
                        var_21 = ((/* implicit */unsigned int) var_5);
                        var_22 &= ((/* implicit */_Bool) arr_10 [i_0]);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-5697)) * (((/* implicit */int) arr_16 [i_1 + 2] [i_2] [i_1 - 3] [i_1 + 2]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_0])) + ((~(((/* implicit */int) (signed char)120))))));
                        var_25 += ((/* implicit */long long int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0]);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) (short)5705)) : (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */signed char) arr_0 [i_1 - 2]);
                    }
                }
            } 
        } 
    } 
    var_27 = ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-122)), ((short)6644)))) || (((/* implicit */_Bool) var_9))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8))))))));
}
