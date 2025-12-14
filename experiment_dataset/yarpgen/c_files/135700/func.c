/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135700
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_0 [i_0 + 3])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (+(4294967283U)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) max((((arr_6 [i_0 + 1]) >> (((arr_6 [i_0 + 3]) - (8138372550948337796ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1] [i_3] [i_1 - 1] [i_0 + 3])))))));
                        arr_11 [i_0 - 2] [13] [13] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0 - 1] [i_0] [i_1 + 1] [i_3]) ^ (arr_7 [i_0 + 3] [i_0] [i_1 + 1] [i_2])))) ? (max((arr_7 [i_0 - 3] [i_0 - 3] [i_1 + 2] [i_3]), (arr_7 [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1]))) : (((arr_7 [i_0 - 3] [i_1] [i_1 + 1] [i_0 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 3])))))));
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_8 [8U] [i_0 + 3] [i_1] [i_1 + 3])))) == (((/* implicit */int) max((arr_8 [i_0] [i_0 + 2] [(unsigned short)2] [i_1 + 3]), (arr_8 [i_0] [i_0 - 2] [i_1 + 1] [i_1 - 1])))))))));
                        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1]), (arr_10 [(unsigned char)7] [(unsigned char)7] [4] [(unsigned char)7] [(unsigned char)7] [i_4]))))));
        var_15 = ((/* implicit */unsigned long long int) (!(arr_3 [i_4])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_24 [i_8] [i_7] [(unsigned short)5] [i_5])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_5]))))) : ((~(18446744073709551602ULL)))));
                        arr_25 [i_5] = ((/* implicit */unsigned int) (+(((int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [3U] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1152920405095219200ULL))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
    }
}
