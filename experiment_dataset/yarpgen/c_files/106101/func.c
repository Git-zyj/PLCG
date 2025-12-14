/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106101
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
    var_16 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52235))))) : (max((((/* implicit */unsigned int) var_4)), (var_8)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_14)) : (var_7)))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_6), ((~(((/* implicit */int) var_4))))))))))));
                        arr_13 [0U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (var_12)))) ? (((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_6)) : (var_5))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_13)))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) (-(((/* implicit */int) max((var_11), (var_11))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_3))))));
        arr_15 [i_0] = ((/* implicit */int) var_11);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_5))));
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_30 [i_4] [i_5] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) max((var_1), (((/* implicit */short) min((var_3), (var_15))))));
                        arr_31 [i_4] [(_Bool)1] [12U] [i_4] |= ((/* implicit */long long int) var_2);
                        arr_32 [i_4] [i_5 - 1] [i_5 - 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_14)) : (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_13)), (var_2))))) : (max((min((var_5), (var_10))), (((/* implicit */unsigned int) var_15))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */long long int) var_11)), (var_14))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) var_9))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned long long int) var_10)), (var_12)))))) ? (max((((/* implicit */long long int) var_10)), (var_14))) : (var_14)));
        arr_33 [i_4 - 1] [i_4 + 2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_6))), (((/* implicit */int) min((var_4), (var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1708309928U))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)13301)) ? (((/* implicit */int) (signed char)-49)) : (-433596346)))))) ? ((-(min((var_9), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13292))))))));
}
