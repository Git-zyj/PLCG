/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148925
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
    var_18 -= ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)71))))))) & (((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8162)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))), (max((arr_3 [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))))));
                        arr_14 [i_1] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) (signed char)-1);
                    }
                    arr_15 [i_0] [i_1 - 3] [i_2] = ((/* implicit */unsigned long long int) min((((unsigned int) var_4)), (((((/* implicit */_Bool) (unsigned char)244)) ? (arr_6 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (-10)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_20 = ((/* implicit */long long int) (short)-32755);
        var_21 = ((short) max((var_2), (arr_0 [i_4])));
    }
}
