/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132151
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
    var_10 = ((/* implicit */short) min((((/* implicit */long long int) max((var_2), (var_2)))), ((~((+(5713690474771567328LL)))))));
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) arr_2 [(_Bool)1]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [(unsigned char)12] &= ((/* implicit */signed char) (~(((long long int) var_3))));
                            arr_13 [(unsigned short)0] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 5713690474771567309LL))) ? (((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1])) << (((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1])) - (151))))) : (((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 5713690474771567309LL))) ? (((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1])) << (((((((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1])) - (151))) + (96))) - (15))))) : (((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 3] [i_1])))));
                            arr_14 [i_0] [i_0] [(signed char)8] &= ((/* implicit */unsigned char) ((-5713690474771567328LL) != (5713690474771567341LL)));
                            var_13 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_7 [i_1 + 1] [i_1 - 2] [i_1])), ((~(-5713690474771567310LL))))) >> (min((((/* implicit */unsigned int) ((_Bool) arr_6 [i_0] [i_0] [(unsigned short)8]))), (((0U) >> (((arr_8 [(_Bool)1] [i_1 - 2] [i_3]) - (228402362U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((unsigned int) var_0));
    var_15 = ((/* implicit */int) ((var_3) << (((((/* implicit */int) ((short) (+(var_6))))) - (19007)))));
}
