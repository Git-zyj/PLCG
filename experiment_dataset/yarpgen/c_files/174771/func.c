/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174771
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (min((1LL), (((/* implicit */long long int) 1873001259U)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((18446744073709551588ULL) != (((/* implicit */unsigned long long int) 1742907183)))) ? (arr_2 [i_0] [(_Bool)1]) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_0])))));
                arr_6 [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_7)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [18ULL] [i_0]))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((var_6), (var_12)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (min((min((0U), (((/* implicit */unsigned int) 469197871)))), (((/* implicit */unsigned int) min(((unsigned char)0), ((unsigned char)53))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 10; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max(((-(((/* implicit */int) min(((short)13320), (((/* implicit */short) arr_8 [i_4]))))))), (((/* implicit */int) ((min((arr_10 [i_2] [(unsigned short)3] [i_2]), (((/* implicit */unsigned int) var_4)))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_4])) * (((/* implicit */int) var_12))))))))));
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((unsigned int) var_7)) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_4])) : (arr_2 [i_2] [(short)1])))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_7 [8U] [i_2 + 1]))));
                }
            } 
        } 
    } 
}
