/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179357
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)7)) * (1023))), ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_4)))) : (max((((((/* implicit */int) var_6)) + (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_10)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((~((~(((/* implicit */int) arr_0 [i_0])))))) > (-1023)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((int) ((((_Bool) var_7)) ? (((int) var_0)) : (((/* implicit */int) arr_1 [i_0])))));
        arr_4 [(unsigned char)0] &= ((/* implicit */unsigned short) var_10);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((var_7) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) 1023979361U)))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */int) ((-1023) != ((~(arr_6 [i_1]))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_8)))));
        arr_10 [i_1] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((_Bool) 1024))))), (((/* implicit */int) var_7))));
    }
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */int) (unsigned char)255);
        arr_14 [i_2] = ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1009)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((~(((/* implicit */int) var_3)))))) : (arr_6 [i_2]));
        arr_15 [i_2] = ((/* implicit */unsigned char) arr_12 [i_2]);
        arr_16 [i_2] [(unsigned short)12] = ((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2]);
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_19 [(unsigned short)5] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 32767)) ? (1023979361U) : (((/* implicit */unsigned int) -32778))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_27 [i_4] [i_5] [(_Bool)1] [i_4] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((var_11) ^ (((/* implicit */int) var_2))))) ^ (1023979361U)))));
                    arr_28 [i_4] [i_4] [i_5] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1646276220)) ? (((/* implicit */int) arr_26 [i_4] [6U] [i_4])) : (((/* implicit */int) arr_26 [i_4] [i_3] [i_4])))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned short) var_7);
    var_14 = ((/* implicit */int) (unsigned short)59440);
    var_15 = (!(((/* implicit */_Bool) (-(173165303U)))));
}
