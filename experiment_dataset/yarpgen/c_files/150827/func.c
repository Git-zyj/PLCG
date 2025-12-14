/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150827
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
    var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((long long int) var_6)))) ? (max((((/* implicit */unsigned long long int) var_2)), (max((var_6), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1] [13] [i_2 + 1]))));
                    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (arr_8 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_4 [i_0]))))))));
                    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_0 [i_2] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                arr_13 [i_3] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))) : (((/* implicit */int) ((_Bool) (unsigned short)65535)))));
                arr_14 [(unsigned short)13] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (max((arr_11 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_4])))) : (arr_11 [i_3] [i_4]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? ((~(((/* implicit */int) ((short) var_10))))) : (max((var_7), (((/* implicit */int) ((short) var_2)))))));
}
