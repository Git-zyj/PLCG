/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1029
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
    var_14 = ((/* implicit */unsigned char) ((4292774910U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_15 ^= ((/* implicit */unsigned long long int) max(((unsigned short)51937), (((/* implicit */unsigned short) (_Bool)0))));
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned short)20042)) : ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((((~(2754540769U))) - (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) arr_9 [0LL] [(unsigned short)5] [(unsigned short)3]))))))) << (((max(((~(9223372036854775807LL))), (min((((/* implicit */long long int) 850458695)), (arr_3 [i_3]))))) - (850458672LL))))))));
                        var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2147483647)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30282))))), (((/* implicit */unsigned int) arr_4 [i_3]))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_9 [(_Bool)0] [i_1] [3LL]))), (((((/* implicit */_Bool) 27U)) ? (1687326377U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18616)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((min(((_Bool)0), (var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29692)) << (((2725417858U) - (2725417855U)))))) : ((~(3345258160884521961ULL)))))))));
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((-(((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) max(((unsigned short)26700), (((/* implicit */unsigned short) var_5))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 4; i_4 < 9; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_4 + 1])) + (2147483647))) << (((13368798414736864157ULL) - (13368798414736864157ULL)))))) ? (((/* implicit */int) max((arr_4 [i_4 + 2]), ((_Bool)1)))) : (((/* implicit */int) max((arr_4 [i_4 + 2]), (arr_4 [i_4 - 3]))))));
                    arr_21 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) var_5);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_6 - 2]), (((/* implicit */short) arr_4 [8U]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 - 2]))))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_15 [i_6 - 3]))))));
                }
            } 
        } 
        arr_22 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_4] [i_4 - 3])), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_8 [i_4] [i_4] [4U]))))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_4 [12])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19486))) & (-5019051681986727692LL))))))));
        arr_23 [i_4] = ((/* implicit */unsigned char) (~(-3637794391843598118LL)));
    }
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned long long int) max((((arr_25 [i_7]) & (arr_25 [i_7]))), (max((arr_25 [i_7]), (-8688802783789751403LL)))));
        arr_28 [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(0ULL)))) ? (((var_2) ? (((/* implicit */long long int) var_0)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16120)))))));
    }
}
