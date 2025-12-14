/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13486
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))), (((long long int) var_9))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) var_1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_2))));
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) arr_2 [i_0]))), (arr_2 [i_0])));
        var_20 = (((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)64868)))) : (((/* implicit */int) ((arr_2 [i_0]) <= (((unsigned int) (unsigned char)153))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(short)4]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_18 [i_1] [i_4] [i_2] [i_4] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_5) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)64868)) < (((/* implicit */int) var_0))))) : (((/* implicit */int) var_14))));
                        arr_19 [i_3] [i_3 + 1] [i_3] = (+(((((/* implicit */int) var_16)) - (((/* implicit */int) var_4)))));
                        arr_20 [i_3] [i_3 + 1] [i_4 - 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_1] [11U] [i_1] [i_1] [i_1] [i_4]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_27 [i_1] [i_6] [i_7] [i_7] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_11 [14LL] [i_5 - 1] [i_6] [i_7])) != (((/* implicit */int) arr_11 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                        var_22 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1]);
    }
    var_24 = ((/* implicit */int) (_Bool)1);
}
