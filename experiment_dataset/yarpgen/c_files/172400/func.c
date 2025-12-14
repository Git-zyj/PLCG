/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172400
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
    var_11 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (short)6291)), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (var_7))))) ^ (min((var_8), (var_1)))));
    var_12 = var_5;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [(short)6]);
        arr_3 [(_Bool)1] [i_0] = ((max((arr_0 [i_0]), (((/* implicit */int) var_6)))) - (arr_1 [i_0] [i_0]));
        var_13 = 518728748;
        var_14 = (((_Bool)1) ? (((/* implicit */unsigned int) (-(var_7)))) : (max((((1U) & (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
        arr_8 [i_1 + 1] = ((/* implicit */unsigned int) arr_4 [i_1 + 2]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_13 [i_2] = ((/* implicit */_Bool) (~(arr_0 [i_2])));
            var_15 *= ((short) var_4);
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 6; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_16 = var_3;
                        var_17 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            arr_22 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            arr_23 [i_2] [i_2] = ((arr_10 [i_2]) ? (((/* implicit */int) (short)1023)) : (var_7));
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            arr_28 [i_2] [i_2] = (((((_Bool)1) ? (((/* implicit */int) var_6)) : (-648862189))) <= (((/* implicit */int) arr_11 [i_7] [i_2] [i_2])));
            arr_29 [i_7] [i_7] [(unsigned char)2] |= ((/* implicit */short) (+(((/* implicit */int) arr_17 [(unsigned char)1] [i_7] [i_7] [i_7]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2113169794)) ? (((/* implicit */unsigned int) var_1)) : (3815919554U)));
                    arr_37 [i_2] [i_9] [i_9 - 1] [(short)7] = ((/* implicit */short) var_6);
                }
            } 
        } 
        var_19 = ((/* implicit */short) (_Bool)1);
    }
    var_20 = ((/* implicit */unsigned char) var_9);
}
