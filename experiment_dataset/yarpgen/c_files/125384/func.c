/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125384
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
    var_12 = ((/* implicit */unsigned long long int) 473925491U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) arr_3 [i_0])) - (6281)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) var_5);
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned short) var_7);
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */int) var_3)) : (-2147483640))) : (((/* implicit */int) (unsigned short)65535)))))));
            arr_15 [i_2] = ((((/* implicit */_Bool) (signed char)23)) ? ((~(((/* implicit */int) (unsigned short)33561)))) : (((((/* implicit */_Bool) (unsigned short)31967)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))));
            arr_16 [i_2] = ((/* implicit */signed char) 848321405U);
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            arr_20 [i_2] [8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-98)) || (((/* implicit */_Bool) (short)-9163))))) * (((/* implicit */int) (signed char)25))));
            arr_21 [i_2] [i_4] = ((/* implicit */unsigned char) arr_18 [15U]);
            arr_22 [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) (~(1155274257)));
            arr_23 [(_Bool)1] = ((/* implicit */unsigned short) 15552354268281911676ULL);
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_28 [i_5] [i_2 - 2] = ((/* implicit */short) arr_9 [i_5]);
            var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36591)) != (((/* implicit */int) (unsigned char)217))));
        }
        var_16 = ((/* implicit */int) arr_19 [i_2 - 1]);
        arr_29 [i_2] = ((/* implicit */unsigned char) var_11);
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        arr_38 [i_8] [i_7] [i_6] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)102)) : ((-(((/* implicit */int) var_6))))));
                        arr_39 [i_2 - 4] [i_2 - 4] [i_7] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (1796731620) : (((/* implicit */int) (unsigned char)108))))));
                    }
                } 
            } 
            arr_40 [i_2] [i_6] [18] = ((/* implicit */unsigned long long int) (unsigned char)93);
            arr_41 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)65519))));
        }
    }
}
