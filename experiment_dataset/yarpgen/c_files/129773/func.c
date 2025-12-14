/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129773
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
    var_17 = ((/* implicit */unsigned char) var_6);
    var_18 = ((/* implicit */signed char) ((var_9) ^ (((/* implicit */long long int) ((((((/* implicit */int) var_12)) > (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_0))))) : ((-(((/* implicit */int) (unsigned char)0)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_15))))) ? (((((/* implicit */_Bool) var_3)) ? (8203425662923327161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10243318410786224470ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))))))))) | ((~(min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_2)))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_3] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_0] [i_2 - 1] [i_3 - 1] [i_3] [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) -1402757901)) - (arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_20 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */int) var_5)))))) + (((/* implicit */int) var_12))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) 1142043192U);
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) var_16);
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_23 [i_4] [i_5] [(_Bool)1] [i_7] [i_5] [i_4] [6U] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_13 [i_4] [i_5] [i_8 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (arr_12 [i_4] [i_5]))))))) << (((var_3) - (71212965)))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37984))))) ? (((/* implicit */int) arr_16 [i_4] [i_5] [i_6])) : (((((/* implicit */_Bool) 3091415836U)) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_5])) : (var_10))))), (((/* implicit */int) var_0)))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_17 [i_4] [12U] [i_6])) ? (arr_2 [(unsigned short)10]) : (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (min((10243318410786224470ULL), (((/* implicit */unsigned long long int) var_13)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_9 = 1; i_9 < 21; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            arr_28 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9] [i_9 - 1] [i_10 - 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9] [i_9 + 1] [i_10 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) min(((unsigned char)197), (var_2))))));
            var_25 = ((/* implicit */int) ((((var_10) != (((/* implicit */int) arr_9 [i_9 + 1] [i_10] [i_10 + 1] [i_10 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_25 [i_9])))) ? (((((/* implicit */_Bool) arr_1 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_10 - 1]))) : (8203425662923327161ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [5] [i_10]))))))) : (((/* implicit */unsigned long long int) var_3))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9] [i_10 + 1])) ? (((/* implicit */int) arr_4 [i_9] [i_10] [i_9])) : (((/* implicit */int) (unsigned short)37971))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 - 1]))) : (min((((/* implicit */unsigned int) -454012780)), (1142043197U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_13)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_24 [i_10])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_9] [i_10 - 1])) ? (-6721064948965256444LL) : (((/* implicit */long long int) -960370688))))))))))));
        }
        var_27 = ((/* implicit */unsigned int) var_3);
    }
}
