/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131266
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
    var_16 = ((/* implicit */unsigned int) (signed char)62);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (short)10021))));
                        var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (2653711188390788731ULL))), (((/* implicit */unsigned long long int) (unsigned char)64))));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */unsigned long long int) (signed char)-66);
        var_20 ^= ((/* implicit */unsigned short) max(((+(min((((/* implicit */long long int) (signed char)71)), (-8046746531897736659LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) -8500016116244163783LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)32640)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0 + 1] [i_0]))))))))));
        var_21 = ((/* implicit */unsigned short) var_7);
    }
    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_22 = ((/* implicit */short) arr_9 [i_4]);
        var_23 = (((-(((/* implicit */int) (signed char)56)))) % (((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 4; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)66)), (var_0)))) ? ((+(7005349564392626248ULL))) : (((((/* implicit */_Bool) (unsigned short)1135)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (11376647286792035857ULL))))), (((/* implicit */unsigned long long int) ((var_6) ? (((((/* implicit */long long int) arr_18 [(signed char)8] [14] [i_4] [i_4])) % (arr_16 [i_4] [i_5] [i_8]))) : (var_7))))));
                                arr_22 [i_4 - 1] [i_4 - 1] [i_4] = (-((+((-(-1144148571))))));
                                var_25 = ((/* implicit */unsigned short) arr_10 [i_8]);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5] [(unsigned short)8] [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_20 [i_4] [10])))) == (10729310477093893008ULL))))) : (max(((+(var_14))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned short) var_12)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_5] [i_6])) / (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) var_7)) + (max((7005349564392626248ULL), (((/* implicit */unsigned long long int) (unsigned char)49)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)7747)) + (((/* implicit */int) arr_9 [6LL]))))))))))));
        var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : ((-9223372036854775807LL - 1LL))));
    }
}
