/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117744
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
    var_17 *= ((/* implicit */unsigned int) (!((_Bool)1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-61);
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_4)))) - (((/* implicit */int) (unsigned char)0))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
        var_19 -= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_9)), (arr_6 [i_1] [i_1]))) >> (((((arr_6 [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (6468810944330458004LL)))));
        var_20 = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            arr_10 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_0 [i_1] [i_2 + 2]), (((/* implicit */unsigned short) (signed char)119))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2]))))) + (((10328863255304391497ULL) * (var_16)))));
            arr_11 [i_2 + 1] [i_2 - 1] = ((/* implicit */signed char) (unsigned char)128);
            arr_12 [i_1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_5 [i_2 + 3])))), (((/* implicit */int) var_11))));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_3] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */long long int) arr_24 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            arr_26 [i_6] [i_4] [i_4] [i_4] [i_1] = ((long long int) ((((/* implicit */_Bool) 1125899906711552LL)) ? (arr_22 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_15))));
                        }
                    } 
                } 
            } 
            arr_27 [i_1] [i_3] = ((/* implicit */long long int) ((arr_9 [i_3 - 2] [i_3 - 1]) << (((arr_9 [i_3 + 2] [i_3 + 2]) - (1861829262685808821ULL)))));
            var_23 = ((/* implicit */unsigned short) ((signed char) arr_9 [i_3] [i_3 + 2]));
        }
    }
}
