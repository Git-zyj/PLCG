/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114076
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) var_6);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) var_6);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */int) var_4);
                            var_11 = ((/* implicit */short) var_3);
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_8))));
                arr_22 [(signed char)0] |= ((/* implicit */short) (+(((/* implicit */int) var_2))));
            }
            arr_23 [i_0] [i_0] = (+((~(((/* implicit */int) var_0)))));
            arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? ((+(((/* implicit */int) (short)-20003)))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))) : (((/* implicit */int) ((short) var_8)))));
        }
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != ((+(((/* implicit */int) (_Bool)1))))));
            arr_28 [i_6 - 2] [i_0] = ((/* implicit */short) (((~(((/* implicit */int) (short)511)))) != (((/* implicit */int) ((short) (short)-10681)))));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (_Bool)1))));
                var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned int i_9 = 4; i_9 < 10; i_9 += 3) 
            {
                arr_38 [i_0] [i_0] [i_7 + 1] [i_0] = ((/* implicit */short) var_7);
                var_16 += ((/* implicit */_Bool) (~((~(((/* implicit */int) var_2))))));
                arr_39 [i_0] [i_0] [i_0] [i_9 + 2] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)-20003))));
            }
            var_17 = ((/* implicit */signed char) var_6);
            var_18 -= ((/* implicit */_Bool) (short)20002);
        }
        arr_40 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
    }
    var_19 -= ((/* implicit */short) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)16009))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 17; i_11 += 3) 
        {
            arr_46 [i_11] = var_6;
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-72))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
        }
        arr_47 [(short)5] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20002)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_48 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (var_3)))) % ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (short)2884)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (signed char)49);
        arr_51 [i_12] [i_12] = ((/* implicit */_Bool) var_3);
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_54 [i_13] = ((/* implicit */_Bool) var_5);
        arr_55 [(short)8] [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    }
}
