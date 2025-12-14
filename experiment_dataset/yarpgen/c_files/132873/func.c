/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132873
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
    var_14 = (-(((/* implicit */int) (signed char)-4)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = (signed char)-17;
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_1))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((arr_3 [i_1] [i_1]) / (min((((/* implicit */long long int) var_9)), (arr_3 [i_1] [i_1]))))) == (((((/* implicit */long long int) 2609624789U)) / ((~(arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)54560)) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_3) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
        arr_6 [i_1] [i_1] &= ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (-(((((/* implicit */long long int) var_11)) / (arr_3 [i_1] [i_2])))));
                    arr_12 [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_11 [11LL] [11LL] [i_2] [i_3]))))));
                    var_18 -= ((/* implicit */int) ((arr_9 [i_3] [i_2] [i_3] [i_3]) <= (((long long int) (-(var_4))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_17 [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (arr_7 [i_3] [i_2] [i_1]) : (arr_7 [i_2] [i_3] [i_4])))));
                        arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_3] [i_3] [i_2])))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)43227)))))) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
                        arr_19 [i_4] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_2] [i_1]))))) : (((var_6) + (4294967290U)))));
                        arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) var_1);
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_8 [i_1]))));
    }
    var_20 = ((/* implicit */int) min((var_20), (min(((~(((/* implicit */int) (!(((/* implicit */_Bool) 7729492116669661671LL))))))), (((((var_1) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (unsigned char)134)))) & (((((/* implicit */_Bool) (signed char)27)) ? (var_3) : (((/* implicit */int) (unsigned short)65529))))))))));
}
