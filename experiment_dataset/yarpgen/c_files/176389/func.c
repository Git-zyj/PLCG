/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176389
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
    var_14 = ((min((var_10), (((/* implicit */long long int) var_7)))) & (((/* implicit */long long int) ((int) ((unsigned long long int) var_11)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0] = (_Bool)1;
                    var_15 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (min((((/* implicit */unsigned long long int) (unsigned short)0)), (5733209286593014203ULL)))))));
                    var_16 ^= ((((/* implicit */_Bool) min((max((12713534787116537398ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)25)))))))) ? ((+((+(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0 - 3] [i_0])), (arr_2 [i_0] [i_1] [i_2])))) <= (arr_1 [i_1]))))));
                    arr_7 [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned short) max((18446744073709551596ULL), ((+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))))));
                    arr_8 [i_0] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))))) ? (min((arr_2 [i_0 + 1] [i_0] [i_1 + 2]), (arr_2 [i_0 - 2] [8U] [i_1 + 4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
