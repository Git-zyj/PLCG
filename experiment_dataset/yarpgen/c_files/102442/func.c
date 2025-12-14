/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102442
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
    var_18 &= ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (short)-1024)) <= (((/* implicit */int) var_7))))));
    var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */int) min((var_10), (((/* implicit */short) var_13))))) : (((((/* implicit */int) (short)32751)) ^ (((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */unsigned char) ((unsigned short) (~(((((/* implicit */int) var_12)) & (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [10] [10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_13))) >> (((((415165983) << (((((arr_0 [i_0]) + (2015973477))) - (11))))) - (1660663907)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                arr_9 [i_1] = ((/* implicit */unsigned char) var_12);
                arr_10 [i_1] [i_1] |= ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_10)))) >> (((/* implicit */int) arr_8 [i_2])))) > ((+(var_14)))));
                arr_11 [(unsigned short)9] [2LL] [i_1] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (_Bool)1)))), (((int) arr_6 [(unsigned char)0]))));
                arr_12 [i_2] [10U] [10U] = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
