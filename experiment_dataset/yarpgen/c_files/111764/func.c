/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111764
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)65512)), (2202213701U))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_1 + 1] [i_1 + 1])))));
                arr_5 [i_0 + 4] [4] [i_1] |= ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-34))))), (arr_3 [i_1 + 1] [i_0 + 2])))) == ((+(((2806901780466218539LL) + (((/* implicit */long long int) 3316295638U))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) (short)13675);
        arr_10 [i_2] [i_2 - 1] = ((/* implicit */short) max((((/* implicit */long long int) ((2111934457U) * ((-(2183032839U)))))), (-1LL)));
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2111934457U), (2111934457U)))) ? (((/* implicit */long long int) ((unsigned int) arr_6 [i_3]))) : (max((arr_6 [i_3]), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_0 [i_3 - 1] [i_3]))))))) : (((long long int) ((arr_8 [i_3 + 1] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (short)25442))))))));
        arr_14 [i_3] = ((/* implicit */int) (unsigned short)65535);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((_Bool) (unsigned short)65533))), (min((((/* implicit */short) var_2)), (arr_0 [i_3] [i_3 - 1])))))) >> (((((unsigned long long int) 2111934457U)) - (2111934433ULL)))));
    }
}
