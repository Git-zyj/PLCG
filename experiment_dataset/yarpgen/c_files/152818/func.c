/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152818
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), ((-(min((((long long int) arr_3 [i_1])), (((/* implicit */long long int) (!(((/* implicit */_Bool) -6987713496257365820LL)))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((arr_0 [i_0]) / (var_11)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) ^ (9223372036854775807LL))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(-9223372036854775807LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_9)))) || ((!(((/* implicit */_Bool) 9223372036854775807LL)))))) ? (-4090193192238210980LL) : ((+(min((-17592186044416LL), (var_8)))))));
    var_17 = max((0LL), (-7141356147082384078LL));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(1465598752268229630LL)))) ? (min((8901906092669496993LL), (var_8))) : (((9223372036854775806LL) & (-1LL))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3]))))))));
                arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -6898207590088268685LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(-7310217877517461067LL)))) && (((/* implicit */_Bool) arr_5 [i_3 + 1])))))) : (max((((-9223372036854775806LL) / (-4090193192238210980LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3])) <= (((/* implicit */int) var_10)))))))));
                var_19 = max((max((arr_9 [i_3 + 2] [i_3 + 1]), (-4090193192238210980LL))), (max(((-(arr_10 [i_2] [i_3]))), (((/* implicit */long long int) arr_7 [i_3 + 1] [i_3 + 1])))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_2] [i_3])) / (arr_6 [i_2])))) ? (((/* implicit */int) ((((/* implicit */long long int) 363233924)) > (9223372036854775807LL)))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (arr_7 [i_2] [i_2])))))) ? (min(((~(-6375969411059763777LL))), (((/* implicit */long long int) max((arr_4 [i_3 - 1]), (((/* implicit */unsigned short) (unsigned char)105))))))) : (-5299883102592409469LL)));
            }
        } 
    } 
}
