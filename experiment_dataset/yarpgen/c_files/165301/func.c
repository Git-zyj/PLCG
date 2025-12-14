/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165301
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                    var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) ((_Bool) ((unsigned long long int) var_8))))))));
                    arr_8 [18U] [18U] &= ((/* implicit */signed char) (short)-32024);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                arr_16 [i_3] [i_3] |= ((/* implicit */unsigned int) arr_12 [i_4]);
                var_19 |= ((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_4]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) (short)-1))) : (((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_5) + (8368037256686703437LL))))))) / (((/* implicit */int) (signed char)28))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_5] = ((_Bool) ((((/* implicit */_Bool) var_16)) ? ((-(arr_13 [i_5]))) : (((/* implicit */long long int) var_6))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_22 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_0)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((unsigned short) var_14));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                arr_33 [i_9] = var_15;
                var_24 = ((/* implicit */long long int) (signed char)49);
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min(((~(var_2))), (((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9]))));
                                arr_43 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_9] [i_9 - 2] [i_9 + 1] [i_9])) : (((/* implicit */int) (signed char)-26)))) >> (((max((var_5), (((/* implicit */long long int) arr_36 [i_13 + 2] [i_11 - 2] [i_9 + 1] [i_9])))) - (18LL)))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */_Bool) min((var_26), (arr_12 [i_9 + 2])));
                var_27 = ((/* implicit */int) ((long long int) max(((unsigned char)8), (((/* implicit */unsigned char) (_Bool)1)))));
            }
        } 
    } 
}
