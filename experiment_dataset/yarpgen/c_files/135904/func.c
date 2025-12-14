/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135904
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-27559)) ? (10112099494624825982ULL) : (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))))))))));
                arr_8 [i_0] [(signed char)8] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 3])) : (((/* implicit */int) arr_6 [i_2 - 3]))))), (arr_3 [i_2])));
        var_17 = ((/* implicit */unsigned int) arr_0 [i_2 - 1]);
        var_18 *= ((/* implicit */unsigned long long int) (+(((max((arr_1 [i_2 - 3]), (((/* implicit */unsigned int) arr_6 [i_2])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))));
        var_19 = ((/* implicit */short) arr_1 [i_2]);
        var_20 = ((/* implicit */unsigned short) arr_3 [i_2]);
    }
}
