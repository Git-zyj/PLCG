/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145052
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
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) (~(var_6))))))));
    var_13 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [4] = ((/* implicit */int) (~((((!(((/* implicit */_Bool) var_7)))) ? (arr_1 [4] [i_0]) : (arr_0 [i_0])))));
        var_14 &= ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_8)) : (2501454313U)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) (-((-(arr_3 [i_2 + 1] [i_2 + 1])))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (var_3)));
                    }
                } 
            } 
        } 
        var_17 = ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_18 = (~(((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 1] [i_5 + 2])));
                    arr_22 [i_1] [(unsigned char)17] [8] = ((/* implicit */unsigned char) var_10);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_16 [i_1])) : ((~(var_7)))));
                }
            } 
        } 
        arr_23 [3U] = (-((-(arr_15 [(unsigned char)3] [(unsigned char)14] [i_1] [i_1]))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_20 = var_1;
                        var_21 = ((/* implicit */unsigned int) var_9);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) 16383)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (4294967279U)))))));
                    }
                } 
            } 
        } 
    }
}
