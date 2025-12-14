/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161957
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) (short)-17150)))))));
                    arr_7 [i_2] [i_1] [i_2] [(signed char)0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_2] [i_1]);
                }
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_5 [i_1 - 3] [i_0] [(unsigned short)9] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) -3420056636245709161LL)) : (arr_5 [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) ((((/* implicit */_Bool) 5613826766175855811ULL)) || (var_7)))))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)1)) ? (4088651609967025423ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) - (4088651609967025423ULL)))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) < ((+(((/* implicit */int) var_2))))))), (var_12)));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) var_0)) << (((var_4) - (16536575880218247616ULL))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) <= (var_9))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) != (var_10)))))));
}
