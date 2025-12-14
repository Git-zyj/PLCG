/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128809
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
    var_13 = var_0;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_14 = (unsigned short)23352;
                        var_15 = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] = ((unsigned short) ((unsigned short) var_11));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned short)65535;
                            var_16 = (unsigned short)42289;
                            arr_15 [i_1] [i_2] [i_3] = arr_5 [i_2] [i_2] [i_2];
                            arr_16 [i_1] [i_2] [(unsigned short)8] [i_4] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_3 - 2])))), ((-(((/* implicit */int) arr_5 [i_3 - 2] [i_3 - 2] [i_3 - 2]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54397)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (unsigned short)46118))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)23563)) : (((/* implicit */int) arr_13 [i_5])))) : (((((/* implicit */_Bool) (unsigned short)46118)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_5 [(unsigned short)10] [(unsigned short)10] [i_0]))))));
                            arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_12 [i_0] [i_0])) / (((/* implicit */int) var_12))))));
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_5])) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_5] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_1))))));
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [(unsigned short)0] [i_1] [i_5] [i_3] [i_5]))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_19 = var_11;
                            var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [(unsigned short)11])) ? (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 3] [i_6 - 1] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [i_3 - 1])))), (min(((-(((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_1 [i_3] [i_6])))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_30 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) - (((/* implicit */int) ((unsigned short) var_11)))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)15630)) : (((/* implicit */int) (unsigned short)19417)))), (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned short)12]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_2 [i_3 - 2]), (arr_11 [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 1])))) != (((/* implicit */int) ((unsigned short) arr_11 [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 3])))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_19 [i_0] [i_1] [i_2] [i_3] [i_3 - 1]), (arr_19 [i_0] [i_1] [i_2] [i_3] [i_3 + 1])))) == ((-(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
        arr_31 [i_0] = arr_6 [i_0] [i_0];
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    var_23 = arr_36 [i_8] [i_10] [(unsigned short)8];
                    arr_41 [(unsigned short)5] [i_9] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_36 [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9])) : (((((/* implicit */_Bool) arr_34 [i_8] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_10] [i_10])))))) | (((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_17 [i_9] [i_9] [i_10] [i_8]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 6; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                {
                    arr_48 [i_11] [i_11] [i_12] = arr_29 [i_8] [i_11] [i_12];
                    var_24 = ((unsigned short) var_12);
                    arr_49 [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
        arr_50 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_44 [(unsigned short)8] [i_8])))) : (((((/* implicit */_Bool) (unsigned short)29915)) ? (((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)65521))))))) ? (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])) : ((-(((/* implicit */int) ((unsigned short) arr_4 [i_8] [i_8])))))));
    }
    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((min(((unsigned short)46108), ((unsigned short)20))), (var_7))))));
}
