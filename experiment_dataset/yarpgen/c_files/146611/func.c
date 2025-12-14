/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146611
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
    var_15 = (unsigned char)99;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) -1870614137);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1986264938)) ? (13991070444980830463ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 + 3] [i_2 - 2])) ? ((-(((/* implicit */int) var_0)))) : (((((-1870614137) + (2147483647))) << (((((var_4) + (5334220713892832043LL))) - (25LL))))))))));
                        arr_12 [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -1870614139)), (var_2)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) 
        {
            {
                arr_19 [i_4] = ((/* implicit */unsigned short) arr_15 [i_4]);
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned char) min((arr_17 [i_4]), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)65535))))));
                arr_21 [i_5] [i_4] = ((short) (!(((/* implicit */_Bool) arr_14 [i_4]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_32 [(unsigned char)4] [(unsigned char)16] [i_8] [i_9] = ((/* implicit */_Bool) 0U);
                            arr_33 [i_6] = ((/* implicit */int) arr_23 [i_6] [i_6]);
                            arr_34 [i_6] [i_7] = ((/* implicit */unsigned short) min(((((((~(((/* implicit */int) arr_28 [i_9] [i_8] [(short)4] [i_6])))) + (2147483647))) >> (((max((((/* implicit */long long int) var_11)), (127LL))) - (412491848LL))))), (((min((((/* implicit */int) arr_27 [i_6] [i_9] [i_9])), (var_14))) + ((-(((/* implicit */int) var_0))))))));
                            arr_35 [i_6 + 2] [i_6 + 2] [i_8] [i_9] [i_8] = ((((/* implicit */int) var_9)) << (((((/* implicit */int) (short)-1)) + (23))));
                            arr_36 [i_7] [i_7] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_8] [i_7] [i_6])) : (arr_26 [i_9] [i_8] [i_7] [i_6])))))));
                        }
                    } 
                } 
                arr_37 [i_7] [i_6] [i_6] = ((/* implicit */signed char) arr_29 [(unsigned char)10]);
            }
        } 
    } 
}
