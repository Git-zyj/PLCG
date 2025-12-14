/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187318
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)17))))));
                arr_6 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) ((signed char) arr_4 [i_1]))) - (((/* implicit */int) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */long long int) (((+(var_6))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)17), (((/* implicit */unsigned char) var_0))))))))));
    /* LoopSeq 3 */
    for (short i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_8 [i_2 - 2]);
        arr_10 [(_Bool)1] |= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1]))) * (arr_8 [i_2 + 1])))));
    }
    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) arr_9 [i_3]);
        var_19 = ((/* implicit */unsigned int) min((min((arr_2 [i_3 - 4]), (((/* implicit */int) arr_9 [i_3 - 3])))), (((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3 + 1])) : (((/* implicit */int) arr_9 [i_3 + 1]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned char)17))));
        arr_17 [i_4] [i_4] = ((/* implicit */short) arr_8 [i_4]);
    }
}
