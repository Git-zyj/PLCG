/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14361
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
    var_13 = var_12;
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 2582924400U)) - (var_1))) == (((/* implicit */unsigned long long int) 2582924405U))))), (((((/* implicit */_Bool) ((var_5) - (var_0)))) ? ((+(var_9))) : (((((/* implicit */unsigned long long int) var_12)) - (var_10)))))));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), ((~(var_1)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (-(3017883157U)));
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) ((arr_8 [i_0] [i_0]) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) 2582924393U);
        arr_14 [i_0] = arr_8 [i_0] [i_0];
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 6; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        arr_25 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1665331138U)) ? (262136U) : (262136U)));
                        arr_26 [i_5] [i_0] [i_0] [i_5] [i_0] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14356998652110149940ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (11735600610146232267ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_6])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_24 [i_0] [i_0] [i_0] [i_6])))) ? (var_9) : (((((/* implicit */_Bool) arr_12 [i_6] [i_6 + 1] [i_0] [i_6 + 1])) ? (arr_7 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (arr_7 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                        arr_27 [i_0] [i_6] [i_5] [i_0] [i_6] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (~(4294705177U)))), (((unsigned long long int) var_4))))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] |= ((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((/* implicit */int) ((3U) >= (((((/* implicit */_Bool) 1U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), ((~(max((arr_29 [i_7] [i_7]), (506400699U)))))));
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((max((arr_29 [i_7] [i_7]), (arr_29 [i_7] [i_7]))) * (((arr_29 [i_7] [i_7]) - (arr_29 [i_7] [i_7])))));
    }
}
