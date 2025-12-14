/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104685
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 |= ((/* implicit */unsigned long long int) ((((4188126627U) + (arr_0 [i_0 - 1]))) != (4188126637U)));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)0)), (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (~(var_3))))) : ((+(arr_1 [i_0 - 1])))));
        arr_2 [i_0] = ((/* implicit */signed char) (-((-(arr_0 [i_0 - 1])))));
        var_18 = ((/* implicit */unsigned int) 18014329790005248LL);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) var_12);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8328))))) ? (4099191366U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 106840659U))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_15))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)8191)), (arr_3 [i_1]))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((/* implicit */signed char) (((-(arr_7 [i_0] [i_0] [i_2] [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3])))))), (((signed char) arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_3 - 2])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (106840660U)));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(195775949U)))) + (((((/* implicit */_Bool) var_10)) ? (-4993227816097777225LL) : (var_14)))))) ? ((-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) arr_16 [(short)11] [i_7])) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)512)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                        var_26 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_14 [i_4] [i_4] [i_4 - 2]))))));
                        arr_19 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */signed char) ((arr_16 [i_4 - 1] [i_7 + 1]) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-42)), (var_2))))));
                    }
                } 
            } 
        } 
        arr_20 [i_4] = ((/* implicit */long long int) (+(arr_18 [i_4 + 1] [6LL])));
        /* LoopNest 3 */
        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            for (unsigned short i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((min((var_14), (((/* implicit */long long int) var_9)))) != (((/* implicit */long long int) arr_23 [i_4 + 2] [i_8 + 1] [i_10])))) ? (((/* implicit */unsigned long long int) arr_17 [i_4] [4LL] [i_9] [i_10] [i_10])) : (min((((/* implicit */unsigned long long int) min((106840660U), (((/* implicit */unsigned int) (unsigned short)50556))))), (arr_16 [(unsigned short)9] [10LL]))))))));
                        var_28 = ((/* implicit */unsigned int) (-(((arr_29 [i_8 + 2] [i_9 + 1] [i_9]) / (((var_14) - (((/* implicit */long long int) var_7))))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (16158679145680794460ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (var_3)))))))))))));
}
