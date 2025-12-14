/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182542
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                var_16 = ((/* implicit */unsigned short) max((min((((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)0] [i_0] [i_0]))) != (((long long int) (short)-1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)(-32767 - 1)))))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                arr_10 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_2] [11U])), (var_3)))) & (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) & (arr_8 [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_6 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_3])) & (((/* implicit */int) arr_5 [i_2]))))) : (17233143675322310898ULL)))));
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
                var_19 |= ((/* implicit */long long int) ((short) ((arr_8 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) > (((/* implicit */int) arr_5 [i_2])))))) : ((-(((((/* implicit */_Bool) (unsigned char)117)) ? (arr_8 [i_3]) : (((/* implicit */long long int) var_5))))))));
            }
        } 
    } 
}
