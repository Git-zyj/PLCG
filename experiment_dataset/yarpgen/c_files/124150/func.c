/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124150
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) var_6);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_11)))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((~((+(((/* implicit */int) var_16)))))))))));
        var_19 = ((/* implicit */unsigned int) (unsigned char)66);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [19] [i_3])) | (((/* implicit */int) ((signed char) var_14)))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)66))))), (((int) arr_10 [i_3] [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                        var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 + 2])) ? (((/* implicit */int) arr_8 [i_2 - 2] [i_4 - 3] [i_4 - 2])) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_4 - 2] [i_4 + 1]))) != (arr_5 [i_4 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_4 + 2])), (var_5))));
                        arr_11 [(short)19] = (~(((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [i_1] [(short)13] [i_3])))) : ((-(arr_10 [i_3] [i_4]))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) != (arr_10 [i_1] [i_1])))), ((~((-(var_13)))))));
    }
    var_23 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_4)), (var_0))))))));
    var_24 = var_1;
    var_25 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))));
    var_26 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)192)))))), (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned short) var_8))))), (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) var_7))))))));
}
