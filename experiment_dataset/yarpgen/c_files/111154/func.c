/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111154
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((arr_12 [i_2 - 4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (((((/* implicit */_Bool) var_14)) ? (arr_12 [i_2 - 3]) : (arr_12 [i_2 - 2])))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0])) && (((/* implicit */_Bool) arr_12 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0])))))) : (max((var_4), (((/* implicit */long long int) arr_12 [i_0])))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))))) <= (min((((/* implicit */long long int) var_8)), (var_9))))));
                arr_15 [i_0] [i_0] [(signed char)5] = ((/* implicit */short) ((((1990026557) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))) ? ((+(((/* implicit */int) arr_8 [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                arr_21 [i_4] [i_4] [i_5] = ((/* implicit */long long int) (~(((int) arr_16 [i_4]))));
                arr_22 [i_5] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_18 [i_4]) : (((/* implicit */unsigned long long int) -1453072935)))) * (((unsigned long long int) arr_20 [i_5])))) ^ (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -3220168851235832636LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (var_4))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)111)), (-1990026554)))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 0U)))), ((!(arr_28 [i_5] [i_6])))));
                            arr_30 [i_4] [8LL] [6LL] [i_5] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [9U] [i_4]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 4; i_8 < 9; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_36 [i_9] = ((/* implicit */short) (-(8683227231278988857LL)));
                var_21 -= ((/* implicit */long long int) arr_19 [i_8] [i_8]);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((long long int) (unsigned short)39353));
}
