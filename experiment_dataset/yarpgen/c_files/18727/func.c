/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18727
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */long long int) 240)) : (8998828541825426856LL)))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_2] [i_1] [i_2] [i_2]);
                    arr_8 [i_2] = ((/* implicit */_Bool) ((short) arr_4 [i_2] [i_2] [i_2] [i_2]));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
        var_21 = ((/* implicit */short) 11624356161561883094ULL);
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 824833096U)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) + (8998828541825426856LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
        arr_11 [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_1 [i_3])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_15 [i_4] = ((((/* implicit */int) ((short) arr_13 [i_4]))) + (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8558)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */int) (short)561)), (((((/* implicit */_Bool) arr_19 [i_6] [i_6 + 2] [i_6 - 1])) ? (1073676288) : (arr_19 [i_4] [i_6 + 3] [i_6 - 1])))));
                    arr_22 [(unsigned short)8] [i_4] [(unsigned short)8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((3606685453155240184ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((unsigned long long int) -1073676289))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) max((var_23), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) 11919334720946296724ULL))))), (((/* implicit */int) ((((/* implicit */_Bool) -8998828541825426857LL)) && (((/* implicit */_Bool) var_17)))))))));
    /* LoopSeq 1 */
    for (long long int i_7 = 4; i_7 < 10; i_7 += 1) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_3))));
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned int) max(((unsigned short)63265), ((unsigned short)2272)));
        var_25 = ((/* implicit */int) min((8998828541825426856LL), (((/* implicit */long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) ((signed char) 10638391608513586008ULL))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) 
            {
                {
                    var_26 *= ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)127)) ^ (((/* implicit */int) arr_1 [i_7 + 1])))), (((/* implicit */int) arr_1 [i_7 + 1]))));
                    arr_32 [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_31 [i_7 - 3] [i_7 + 1] [i_7] [i_9 - 2])))), (((/* implicit */int) (unsigned short)2272))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7 - 4] [i_8] [i_8] [i_9] [i_7] [i_11] = ((/* implicit */unsigned int) ((unsigned short) max((((unsigned short) var_13)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)0))))))));
                                var_27 = ((/* implicit */unsigned short) ((1073676288) < (((/* implicit */int) arr_13 [i_7 - 3]))));
                                arr_40 [i_7] [i_8] [i_7] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) -533870679)) ? (((/* implicit */long long int) 4269345026U)) : (2712651485283197299LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
