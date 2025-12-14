/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156906
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) max((max((var_17), (((/* implicit */unsigned int) var_8)))), (((unsigned int) var_15))))) : (((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)4)))) ^ (var_6)))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_16);
                    var_18 = ((/* implicit */unsigned char) 2282138269839190176ULL);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)38)) >= (((/* implicit */int) var_14))))))), ((unsigned char)4)));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (unsigned int i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */long long int) var_8);
                        arr_20 [i_3] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_5]))) : (arr_6 [i_4] [i_6] [i_6 - 2])));
                        arr_21 [i_6] = ((/* implicit */short) min((var_6), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) min((var_14), (var_8)))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_6 + 2] [i_5])) | (((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1]))))) || (((/* implicit */_Bool) (~(max((3287500558192075805LL), (-3287500558192075805LL))))))));
                        var_21 = ((/* implicit */short) min(((((!(arr_9 [i_3]))) ? (((/* implicit */long long int) ((arr_18 [i_6]) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) var_14))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) ^ (var_6))))), (max((-2693326660348924984LL), (((/* implicit */long long int) (signed char)-39))))));
                    }
                } 
            } 
        } 
        arr_22 [i_3] = ((/* implicit */unsigned int) var_6);
    }
    var_22 |= ((/* implicit */_Bool) (~(var_15)));
}
