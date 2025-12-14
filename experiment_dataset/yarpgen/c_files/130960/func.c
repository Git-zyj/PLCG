/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130960
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
    var_11 = ((/* implicit */unsigned char) 134217728U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)3] [(signed char)13]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((arr_1 [i_0]), (arr_1 [i_0])));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (min((var_0), (var_0)))))) ? (max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_3] [i_2])) - (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))))))) ? ((+((+(var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-69)) <= (((/* implicit */int) arr_4 [i_2] [i_3] [i_2]))))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_3] [i_3])), (max((((/* implicit */int) arr_4 [i_2] [i_3] [i_3])), (arr_10 [i_2])))))) ? (((arr_9 [i_2] [i_2]) ^ (arr_9 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
}
