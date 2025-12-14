/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158536
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)0))))) + (2147483647))) >> (((18446744073709551590ULL) - (18446744073709551560ULL)))))) ? (var_8) : (min((((2962000204657831402LL) >> (((475317080U) - (475317074U))))), (((((/* implicit */long long int) var_6)) + (-2962000204657831411LL))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 2]))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (0ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19206))) < (19ULL)));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 3])) / (((/* implicit */int) var_7))))) && (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19206))))) && (((/* implicit */_Bool) 0U)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3819650207U) >> (((((/* implicit */int) arr_0 [i_1])) + (25674)))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_0 [(_Bool)1]))))));
        arr_8 [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11414005)) ? (((((/* implicit */_Bool) max((2776382459U), (((/* implicit */unsigned int) var_0))))) ? (3819650207U) : (((/* implicit */unsigned int) 1686896682)))) : (((/* implicit */unsigned int) 1433359317))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) max((3574994935U), (((/* implicit */unsigned int) (signed char)48))))) ? (((((/* implicit */int) (unsigned short)21621)) | (((/* implicit */int) var_1)))) : (((((/* implicit */int) (signed char)-3)) | (var_5)))))));
                        var_15 *= ((/* implicit */signed char) arr_14 [i_2]);
                        arr_22 [i_5] [(unsigned short)2] [i_3] [i_5] = ((/* implicit */unsigned short) (signed char)64);
                        var_16 = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [6]))));
        var_18 = ((/* implicit */unsigned char) 2962000204657831402LL);
    }
}
