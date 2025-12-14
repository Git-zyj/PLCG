/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189388
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
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(arr_0 [i_0 - 1]))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) % (var_2)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)-11589)) : (arr_0 [i_0 + 1])));
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_10))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)17444)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1]))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
        arr_15 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-47)) > (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))))) | (var_7));
    }
    for (short i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((max((max((((/* implicit */int) var_10)), (var_1))), (((/* implicit */int) (unsigned short)17434)))) <= (min((arr_0 [i_5 - 2]), (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_7]))))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((var_3), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6 - 1] [(_Bool)1]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_2 [i_4 - 1]) - (4476179405349142540LL)))))) : (((unsigned int) min((((/* implicit */int) var_10)), (var_1)))))))));
                        var_19 = ((/* implicit */int) arr_24 [i_4]);
                        var_20 = ((/* implicit */unsigned int) ((((arr_3 [i_4 + 1] [i_6 + 1]) - (arr_3 [i_4 + 1] [i_6 - 1]))) * (arr_3 [i_4 + 1] [i_6 - 1])));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48112)) != (arr_21 [i_4 - 1])))), (arr_1 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8468566662883908284ULL)) && (((/* implicit */_Bool) (unsigned short)48112)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8468566662883908292ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [i_4 + 1] [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)48112))) : (min((arr_16 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_4 [i_4 - 1] [(unsigned short)3] [(unsigned short)3]))))))));
        arr_27 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 0ULL)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48111))))) <= (((/* implicit */unsigned long long int) var_2))));
        arr_28 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_4 - 1] [i_4 - 1]) == (arr_16 [i_4 - 1] [i_4 + 1]))))) > (((((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4])))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [(signed char)2]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4 + 1])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        var_22 -= ((/* implicit */unsigned long long int) (unsigned short)17444);
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) min((arr_19 [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) var_1))))), ((~(8468566662883908261ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_17 [i_8] [i_8]))) % (((/* implicit */int) var_8))))))))));
        var_24 = ((/* implicit */short) (-(((/* implicit */int) (short)11595))));
        arr_33 [15U] [i_8] = (~(((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_32 [i_8] [i_8])))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) arr_12 [i_8] [i_8])))));
    }
}
