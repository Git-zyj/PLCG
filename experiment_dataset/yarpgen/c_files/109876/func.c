/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109876
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 7771237215653177557LL)), (562949953421311ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        arr_8 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 11496996748248609480ULL))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (2672171218733534211LL))))));
                        arr_9 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0]);
                        var_14 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) 7771237215653177568LL)) + (arr_7 [i_0]))), (((((/* implicit */_Bool) 7771237215653177557LL)) ? (288230367561777152ULL) : (((/* implicit */unsigned long long int) ((7771237215653177557LL) - (2150255166117540377LL))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) arr_3 [8ULL] [3ULL] [i_2]);
                        var_16 = ((/* implicit */unsigned long long int) ((signed char) 18158513706147774474ULL));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) 7771237215653177557LL);
                                arr_19 [i_0] [3ULL] [3ULL] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (signed char)-1)), (-7771237215653177557LL)))))) && (((/* implicit */_Bool) (+(var_0))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 288230367561777142ULL)) ? (288230367561777149ULL) : (((/* implicit */unsigned long long int) -7891791249283246772LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)63)))))))), (((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18158513706147774482ULL)))))));
                                var_19 ^= arr_18 [i_1] [i_2] [i_1] [9LL];
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) % (-7178141874813242576LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) (signed char)5)))))));
        arr_21 [i_0] = ((/* implicit */long long int) min(((~(max((288230367561777152ULL), (18158513706147774488ULL))))), (var_3)));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (signed char)-1))));
                        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 18158513706147774451ULL)))))))));
                        var_22 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (-(arr_18 [i_0] [i_7] [i_8] [i_7])))), (max((((/* implicit */unsigned long long int) 7771237215653177557LL)), (var_1)))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (288230367561777137ULL)));
}
