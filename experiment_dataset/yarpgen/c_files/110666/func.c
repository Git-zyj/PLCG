/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110666
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = (~(((/* implicit */int) arr_1 [i_0] [i_0])));
        arr_2 [(unsigned char)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_5 [(short)0] [i_0] [8] = (!(((/* implicit */_Bool) 7674432548922697128ULL)));
            var_21 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1]);
            var_22 = ((/* implicit */unsigned long long int) arr_0 [i_1] [4U]);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_23 = ((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_2 + 1] [i_0]);
                var_24 = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [3LL] [i_2])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2])))))));
                var_26 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_27 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_11 [(short)0])) - (arr_7 [i_3] [(_Bool)1] [(short)0] [i_0]))) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [0U])) - (19145))))))));
                arr_12 [i_0] [(unsigned short)2] [i_0] = (~(2988075965947832469ULL));
            }
            arr_13 [i_0] [i_1 - 3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1] [i_0] [i_0]))));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_17 [i_4] [14U])), (min((min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))), (((/* implicit */int) arr_14 [i_4]))))));
        var_29 = ((/* implicit */unsigned int) (~(arr_16 [i_4] [i_4])));
        var_30 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_17 [i_4] [i_4])))), (min((arr_16 [(_Bool)1] [i_4]), (arr_16 [i_4] [i_4])))));
        var_31 ^= ((/* implicit */unsigned int) (((~(arr_16 [(short)8] [i_4]))) / (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)12] [i_4]))))), ((+(((/* implicit */int) arr_15 [i_4]))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) <= (max((((/* implicit */unsigned int) var_4)), (min((var_11), (((/* implicit */unsigned int) var_4))))))));
    var_33 = ((/* implicit */short) (-(((var_8) % (((/* implicit */int) var_14))))));
    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) min(((~((-(((/* implicit */int) var_1)))))), (var_3))))));
}
