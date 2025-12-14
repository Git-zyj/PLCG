/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115748
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0 + 4] [i_0] = ((long long int) ((-7LL) & (-1LL)));
        arr_3 [i_0] = ((/* implicit */long long int) ((((max((arr_1 [(unsigned short)0] [i_0]), (var_4))) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_0))) >> ((((-(arr_1 [i_0] [i_0]))) - (10936919127817418231ULL))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) (+(var_11)))), (max((((/* implicit */unsigned int) 486089560)), (0U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) | (arr_10 [i_0 + 3] [i_0 + 3])))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) max(((-(arr_17 [i_4 - 1]))), (((/* implicit */unsigned long long int) ((int) ((243563804) & (((/* implicit */int) (unsigned short)0))))))));
        var_17 = ((/* implicit */unsigned long long int) var_2);
    }
    for (signed char i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) ((arr_6 [i_7] [i_5 + 2] [i_7]) & (var_11)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */long long int) arr_6 [i_5] [i_5 - 1] [i_6]))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-62)))))));
                    arr_26 [8U] [i_5 + 1] [i_5] = ((4294967295U) - (((/* implicit */unsigned int) -486089561)));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) var_10);
        arr_27 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (9LL))) >= (((/* implicit */long long int) arr_11 [i_5] [18ULL] [6] [i_5] [(signed char)7] [(short)16]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (2233785415175766016ULL) : (3679394839458928385ULL)))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) ((arr_13 [i_5] [i_5] [i_5]) >= (((/* implicit */unsigned long long int) arr_0 [i_5 - 3]))))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7))));
}
