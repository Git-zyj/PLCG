/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153725
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 16066957764777765266ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))) & (((max((((/* implicit */unsigned int) (unsigned short)20262)), (var_17))) ^ (var_0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [5U] [15U])), (arr_3 [i_1] [i_1] [i_0])))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (min((((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)3] [(unsigned char)3]))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) < (var_8))))))));
                arr_7 [i_1] [11U] [17] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)6] [(unsigned short)20] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (3489736275U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9069586905146760584LL))))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7163215579552794290ULL)) ? (((/* implicit */int) (unsigned short)20262)) : (((/* implicit */int) (unsigned char)99))));
                arr_9 [i_0] [i_1] = arr_1 [i_0] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            {
                arr_16 [i_2] [i_3] [i_3] = ((unsigned char) arr_5 [i_2] [9ULL] [i_3 - 1]);
                arr_17 [i_2] [(signed char)1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (2259084578U) : (((/* implicit */unsigned int) 618797145))));
                arr_18 [i_2] [i_2] [i_3] = ((/* implicit */int) min((var_12), (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_18)), (var_0))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_12))))));
}
