/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153789
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_2))));
    var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17627263532811896965ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49198)))))) ? ((-(-3600301673773502469LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) (+(var_1))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))), (((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_4))))));
        arr_4 [i_0] [i_0 - 4] &= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_14 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [(unsigned short)11])) | (var_8))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) ^ (var_6))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (min((((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)16325)))))));
            var_17 = ((/* implicit */long long int) ((min((arr_0 [i_2 + 1] [i_2 + 2]), (arr_0 [i_2 - 1] [i_2 + 2]))) ^ (arr_0 [i_2 + 2] [i_2 - 2])));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | ((+(((/* implicit */int) (unsigned short)59317))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) (~(var_7)));
        var_19 = ((/* implicit */short) (!(arr_2 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7; i_4 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4 + 3])) ? (((/* implicit */int) (short)-20072)) : (arr_13 [9] [i_4])))));
        var_21 = ((/* implicit */unsigned short) (-(arr_0 [i_4 + 1] [i_4 - 2])));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
        {
            for (unsigned short i_6 = 4; i_6 < 7; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) var_4);
                    var_23 = ((/* implicit */long long int) ((arr_14 [i_4 - 1] [i_4 - 2]) | (((/* implicit */unsigned long long int) arr_9 [i_4 + 3] [i_5 + 1] [i_6 + 3]))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((var_5) | (((/* implicit */int) arr_17 [i_4] [(_Bool)0])))) | (((/* implicit */int) arr_19 [i_4 - 2]))));
        var_25 = ((/* implicit */unsigned short) arr_7 [i_4] [i_4 - 1]);
    }
}
