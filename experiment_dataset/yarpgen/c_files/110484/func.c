/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110484
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
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) (signed char)48)) / (((/* implicit */int) (short)-11232))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [0LL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */signed char) var_0);
        var_19 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_1]))));
        var_20 = ((/* implicit */long long int) var_5);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)19827))));
        var_21 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-27)), ((unsigned short)36974))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2 - 3] [i_2])) > (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_7))));
        arr_11 [i_2] [i_2 - 4] = ((/* implicit */signed char) arr_1 [i_2] [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (short)-599)) ? (-204068254) : (((/* implicit */int) arr_7 [i_3])))));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [i_3] [i_5])));
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) % ((-(((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_21 [i_7])))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (0LL)))))))));
                    arr_27 [i_3] [(short)0] [i_3] |= ((/* implicit */signed char) (((+(((/* implicit */int) arr_21 [i_7])))) - (((/* implicit */int) var_3))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) (unsigned char)241);
}
