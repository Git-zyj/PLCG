/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143208
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = (((~(arr_3 [i_0 + 1] [i_0 + 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_2] [i_0]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned char) (-((+((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) != (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_0 - 2])) : (((/* implicit */int) (unsigned short)9857))))))) <= (((((/* implicit */_Bool) arr_5 [11LL] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) arr_5 [i_1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) 2136533375)))), (((/* implicit */long long int) min(((unsigned char)211), (arr_4 [i_4] [i_1] [i_0]))))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (-2136533374) : (((/* implicit */int) (unsigned short)43203))))))));
                        arr_12 [10] [i_4] [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))) ? (((((arr_3 [i_1] [i_0 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_4]))))) / (((/* implicit */unsigned long long int) min((5653013047006999391LL), (var_6)))))) : (max((arr_1 [i_4]), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_1] [(signed char)14] [i_1])), (-1981265805))))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (int i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_21 [i_5] [(short)1] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (var_3) : (((/* implicit */int) arr_20 [16] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_6])) ? (arr_14 [i_6]) : (((/* implicit */int) var_4)))))))) ? ((~(-427106489))) : ((+(((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (((/* implicit */int) var_2))))))));
                    arr_22 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) var_9);
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_5] [i_5])) ? (((/* implicit */int) ((unsigned char) arr_17 [i_5]))) : ((-(((/* implicit */int) arr_20 [i_5] [i_6] [i_7 - 2]))))))) : ((+(5653013047006999391LL)))));
                }
            } 
        } 
    } 
}
