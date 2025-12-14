/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141918
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((int) (~(var_15))));
                var_21 = ((/* implicit */unsigned int) arr_5 [i_1] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) (((-(((13663828406967508221ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                    arr_10 [i_0] [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((unsigned int) var_0)))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)66))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))));
                    arr_15 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1962193603U)) ? (((/* implicit */int) (short)0)) : (max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned short) (signed char)-15)))))));
                    var_23 = ((/* implicit */unsigned int) (+(34359476224ULL)));
                }
                arr_16 [i_1] = ((/* implicit */unsigned short) 2366642661236756616ULL);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)90))));
}
