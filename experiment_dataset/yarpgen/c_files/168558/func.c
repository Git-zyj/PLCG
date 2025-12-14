/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168558
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) ((unsigned char) var_0))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_1])))) : (min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_8)))))));
                arr_6 [(unsigned char)0] = ((/* implicit */short) arr_0 [i_0] [15]);
                arr_7 [9] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) != (((/* implicit */int) arr_5 [i_0] [14] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))), (min((arr_16 [i_3] [i_3 + 2]), (arr_16 [(unsigned char)22] [i_3 + 3])))));
                    var_12 -= ((/* implicit */unsigned int) ((short) ((long long int) arr_17 [i_4 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_1)))))))), (min((((/* implicit */long long int) (+(var_9)))), (((((/* implicit */long long int) var_2)) / (var_7)))))));
    var_15 = ((/* implicit */unsigned char) (+(var_7)));
}
