/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179780
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
    var_19 = ((/* implicit */int) min((715764553979763662LL), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) arr_4 [i_0 + 3] [(unsigned char)12] [i_2] [(unsigned char)12])) / (((/* implicit */int) arr_8 [(unsigned char)0] [(_Bool)0] [(unsigned char)0] [(unsigned char)0])))))) >> (((((/* implicit */int) var_0)) + (2292)))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (short)2032)) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_6 [(_Bool)1] [i_1 + 1] [i_1 + 1] [(unsigned char)7] [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) var_15);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_9))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */short) (((-(max((((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4] [i_4] [i_4])), (715764553979763662LL))))) < (((/* implicit */long long int) (~(((((/* implicit */_Bool) 715764553979763654LL)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) arr_1 [i_4])))))))));
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (unsigned short)4092)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_4])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4] [i_4]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_6 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_4] [i_4] [i_4] [i_4])), (var_17)))))));
        arr_14 [i_4] = ((/* implicit */unsigned short) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [12U]);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_7] [(short)13] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) 715764553979763662LL)) || ((_Bool)0))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [6LL] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) var_3))))) + (536870912U))))));
    }
    for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
    {
        arr_30 [(short)13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_1)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9 + 2])) ? (((/* implicit */int) (short)-32738)) : (((/* implicit */int) (unsigned short)61444))))) ? (arr_27 [i_9] [i_9]) : ((~(((/* implicit */int) (signed char)-94))))))));
        arr_31 [i_9 + 2] [i_9 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3758096384U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32738))) : (3758096401U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)0])) ? (((/* implicit */int) arr_29 [i_9 + 2])) : (var_14)))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) var_11)))) : (((((arr_27 [i_9] [i_9]) + (2147483647))) >> (((((/* implicit */int) arr_29 [i_9])) + (23943)))))));
        var_26 = ((/* implicit */unsigned int) min((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_29 [i_9 + 2]))));
    }
}
