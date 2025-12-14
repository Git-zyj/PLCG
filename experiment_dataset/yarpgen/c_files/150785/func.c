/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150785
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 = arr_6 [i_0] [1LL] [1LL] [i_0];
                    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */long long int) var_3)))))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-16)))))))));
                    var_12 = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_13 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_4])) : (((/* implicit */int) var_5))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
                arr_11 [11LL] [i_4] [i_4] = min((((/* implicit */long long int) (signed char)0)), (((long long int) arr_3 [i_4] [i_3])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_15 = ((/* implicit */long long int) max(((!(((arr_13 [i_5] [i_5]) > (arr_13 [i_5] [i_5]))))), ((!(((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5]))))));
        var_16 ^= ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (((signed char) max((arr_13 [i_5] [18LL]), (arr_13 [6LL] [6LL]))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (signed char i_7 = 3; i_7 < 7; i_7 += 1) 
        {
            {
                var_17 = ((long long int) max(((signed char)-26), ((signed char)-13)));
                var_18 |= ((/* implicit */signed char) ((((/* implicit */int) var_8)) << ((((~(((((/* implicit */_Bool) (signed char)-110)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) - (3569123027173893314LL)))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_7 - 3] [i_7 - 3])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_13 [i_6] [i_7])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) > (1314037152776057195LL)))) : (((/* implicit */int) arr_4 [i_7 - 2] [i_7 - 2] [i_7 + 3]))))));
            }
        } 
    } 
}
