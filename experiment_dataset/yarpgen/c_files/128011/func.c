/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128011
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
    var_16 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((_Bool) ((var_14) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_18 = ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = arr_11 [i_0] [(unsigned short)8];
                            arr_13 [i_3] [i_1] [(unsigned short)4] [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_14 [(_Bool)1] [(_Bool)1] [i_2] [i_1] = arr_12 [i_4] [i_1] [i_2] [i_1] [i_0];
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16391)) && (arr_10 [i_7] [(unsigned short)3] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_5] [i_0] [i_7 - 2]))));
                            arr_22 [i_0] [i_1] [i_1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            arr_23 [i_7] [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14] [i_0]))));
                            arr_24 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)49145)) : (((/* implicit */int) var_10)))) <= ((+(((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_6] [i_6 - 1]))))));
                            var_21 = (!(((/* implicit */_Bool) (unsigned short)61571)));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */_Bool) arr_11 [i_8] [i_8]);
        var_22 |= ((/* implicit */_Bool) (unsigned short)65535);
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(arr_8 [i_8] [i_8] [i_8] [i_8])))), ((((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) (unsigned short)61664))))))));
        arr_30 [i_8] = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
    }
    var_23 = ((/* implicit */unsigned short) var_10);
    var_24 = ((/* implicit */_Bool) (unsigned short)16371);
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) 
        {
            {
                arr_35 [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)5068)) : (((/* implicit */int) (_Bool)1))));
                arr_36 [(_Bool)1] [i_10 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_26 [i_9])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)60895))))))))));
                var_25 = ((((/* implicit */int) arr_12 [i_9] [(_Bool)1] [i_9] [(unsigned short)0] [(unsigned short)0])) != ((-((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65533)))))));
            }
        } 
    } 
}
