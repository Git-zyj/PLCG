/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160440
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_18)))))), ((+((~(var_8))))))))));
                    var_21 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))) < ((~(9223372036854775797LL)))))), (9223372036854775797LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_3] [i_5] = ((/* implicit */int) ((short) arr_4 [i_3] [i_3] [i_3]));
                    var_22 = ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1]))) : (9223372036854775797LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_10 [(unsigned short)7]), (((/* implicit */short) arr_2 [i_5]))))) && (((/* implicit */_Bool) arr_3 [i_3]))))))));
                    arr_18 [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned int) (unsigned char)111);
                }
            } 
        } 
    } 
}
