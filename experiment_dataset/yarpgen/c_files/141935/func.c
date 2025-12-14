/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141935
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) < (((/* implicit */int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) var_14))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((arr_3 [0LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [4ULL]), (arr_3 [(unsigned short)6]))))) : ((+(var_10))))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_1)))) ? (((((/* implicit */_Bool) -5946601795602954278LL)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned short)30243)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)29567)) : (((/* implicit */int) (unsigned short)33948)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_19 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)10])) ? (((/* implicit */int) arr_1 [(short)0])) : (var_8)))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)4])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_20 += ((/* implicit */unsigned long long int) (!(((_Bool) var_5))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [(unsigned short)18] [(unsigned short)13] [i_1] [i_2] = ((/* implicit */long long int) arr_10 [i_2]);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (5946601795602954277LL)));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned long long int) var_7);
    }
}
