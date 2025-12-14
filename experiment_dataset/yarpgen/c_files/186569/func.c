/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186569
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) max((var_7), (var_6)))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4))))))) : (min((((/* implicit */int) ((signed char) var_9))), ((~(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0]))) ? (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_9)))) ^ ((-(((/* implicit */int) var_8)))))) : (((((((/* implicit */int) (signed char)-122)) & (((/* implicit */int) var_5)))) | (((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)-98))))))));
                var_13 = ((/* implicit */signed char) max((var_13), (arr_4 [i_1])));
                var_14 += var_7;
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_15 = var_1;
                    arr_15 [i_2] [(signed char)4] [(signed char)4] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_2] [(signed char)7] [i_4])))) != ((-(((/* implicit */int) arr_11 [i_2 - 3] [i_3 + 1] [i_4] [i_4]))))))) * (((/* implicit */int) (signed char)55))));
                }
            } 
        } 
    } 
}
