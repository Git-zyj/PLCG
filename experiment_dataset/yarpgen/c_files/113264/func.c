/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113264
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_11 += ((short) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 1])) ? (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) (signed char)91))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) 18446744073709551615ULL);
                    var_12 += ((/* implicit */unsigned short) (+(34359476224LL)));
                    var_13 = ((/* implicit */unsigned char) 18446744073709551611ULL);
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (-(arr_3 [i_0] [i_1 - 1]))))))) << (((max((((arr_0 [i_2]) << (((1272518754U) - (1272518720U))))), (((/* implicit */unsigned long long int) min(((unsigned char)57), (((/* implicit */unsigned char) var_0))))))) - (306632180711292915ULL)))));
                }
                arr_8 [11LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -34359476213LL)) ? (((arr_0 [(unsigned short)8]) - (arr_3 [i_0] [i_1 - 2]))) : (((arr_3 [i_1] [i_0]) + (arr_3 [9] [i_1])))))) ? (max((((/* implicit */int) var_10)), (((int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) ((arr_1 [i_1] [i_1 + 1]) ? (var_7) : (((/* implicit */int) (unsigned short)1))))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (signed char)112))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_2);
}
