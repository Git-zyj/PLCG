/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128708
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) var_13)), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_15 [12ULL] [i_2] [i_3] [i_4] [(unsigned char)8] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)202)), (((arr_8 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (var_14)))));
                        arr_16 [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (~(max(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(var_15))))))));
                    }
                } 
            } 
        } 
        arr_17 [14LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned char)209))))) ? (max((((var_4) << (6ULL))), (((/* implicit */unsigned long long int) ((short) var_4))))) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [(unsigned short)11] [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_23 [i_6] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (!(var_3)))))), (((/* implicit */int) ((signed char) ((signed char) arr_3 [i_5]))))));
                    arr_24 [i_1] [i_1] [(short)1] = ((/* implicit */unsigned short) arr_14 [i_6] [i_5] [i_1] [i_1]);
                    arr_25 [i_5] [i_5] [10ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned short)41368))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned short)41368)), (14782499827815763910ULL))) ^ (min((var_4), (((/* implicit */unsigned long long int) var_12))))));
                                var_20 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned long long int) arr_21 [i_9] [i_9] [i_9])), (max((var_14), (arr_14 [i_9] [(unsigned short)13] [i_9] [i_9]))))));
        var_21 -= ((/* implicit */short) max((((/* implicit */long long int) arr_1 [i_9])), (max((max((((/* implicit */long long int) arr_31 [(_Bool)1])), (8104078050530788888LL))), (((/* implicit */long long int) ((short) arr_31 [i_9])))))));
        var_22 += (unsigned short)54354;
        var_23 = ((/* implicit */unsigned short) -8104078050530788892LL);
    }
    var_24 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_8)))), (((_Bool) max((var_8), (((/* implicit */int) (unsigned short)24167)))))));
    var_25 = ((/* implicit */signed char) (-(var_17)));
}
