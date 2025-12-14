/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133527
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((+(arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) var_6))))) ? ((+((-(((/* implicit */int) var_10)))))) : ((-(((/* implicit */int) var_2))))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (((arr_5 [i_0]) ^ (arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) (unsigned char)173))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1912535455U)) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_10))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned int) (short)31273);
                var_14 *= ((((/* implicit */_Bool) 11314548787659315217ULL)) ? (min((arr_8 [i_3]), (((/* implicit */unsigned long long int) ((signed char) arr_5 [i_2]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61743))))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))));
                var_15 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3] [i_2])) ^ (((/* implicit */int) (unsigned char)198))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_2]))) | (-4454497353538312478LL)))))));
                var_16 -= ((/* implicit */long long int) arr_1 [i_2] [i_3]);
            }
        } 
    } 
}
