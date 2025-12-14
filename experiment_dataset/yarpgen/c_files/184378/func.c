/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184378
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
    var_17 = (((~(((/* implicit */int) (!(var_12)))))) % ((+(((/* implicit */int) var_9)))));
    var_18 = ((/* implicit */_Bool) (unsigned short)32654);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_2)));
                arr_7 [i_0] [16] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)32864));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1 - 1] [i_0]) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (-(868234666))))))) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_18 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) var_15);
                    arr_19 [i_4] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4] [i_3] [i_3])) & (((/* implicit */int) ((signed char) arr_3 [i_4] [i_4] [i_4])))));
                }
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8)))))))));
        arr_21 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2]))) > (((unsigned int) arr_13 [i_2]))));
    }
}
