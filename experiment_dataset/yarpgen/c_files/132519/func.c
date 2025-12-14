/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132519
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_12)))) : (min((((/* implicit */unsigned long long int) var_11)), (81036387036422905ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)252))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((long long int) (-(var_3)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) var_3))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
        var_17 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) var_0)) + (arr_3 [i_0])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_6 [10ULL] &= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_1)), (arr_5 [i_1 - 1] [i_1 - 1])))));
        var_18 = ((/* implicit */long long int) var_8);
        var_19 = ((unsigned long long int) (unsigned char)128);
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) var_8)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned short)6406))));
                    var_22 ^= (+(((((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 + 2] [i_4 + 3])) ? (var_8) : (((/* implicit */unsigned long long int) arr_9 [i_4 + 1] [i_4 + 3] [i_4 + 3])))));
                    arr_14 [(unsigned short)14] |= ((/* implicit */unsigned long long int) var_3);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 18365707686673128710ULL)) ? (776419206480964534LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned char) (+(18365707686673128710ULL)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 2195574666564033121LL))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    arr_26 [i_6] [i_5] [i_6] = max((min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) var_6)), (4397509640192LL))))), (((/* implicit */long long int) (unsigned char)83)));
                    arr_27 [i_5] [i_6] [i_7] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 4360142086336991511LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (6920221782640709794ULL)));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_19 [i_5] [i_6] [i_7])), (((unsigned long long int) 70334384439296LL))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)163)) && (((/* implicit */_Bool) arr_31 [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_31 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (arr_31 [i_10])));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((unsigned short) (unsigned char)181)), (((/* implicit */unsigned short) arr_33 [i_5])))))));
                        var_29 = ((/* implicit */short) arr_28 [i_10]);
                        arr_35 [i_5] [i_5] [i_8] [i_5] [i_5] [i_10] = ((unsigned long long int) (unsigned short)8174);
                    }
                } 
            } 
        } 
        var_30 = ((((/* implicit */_Bool) var_12)) ? (min((arr_22 [i_5] [i_5]), (((/* implicit */unsigned long long int) var_12)))) : ((+(arr_22 [i_5] [i_5]))));
    }
}
