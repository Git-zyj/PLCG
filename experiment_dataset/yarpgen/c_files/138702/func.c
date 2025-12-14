/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138702
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        arr_10 [i_0] [(_Bool)1] [i_2] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)213))))) ? ((-(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) arr_8 [i_3 + 3] [i_2 - 1] [i_2 - 2] [i_2] [i_3 + 2] [i_1]))))));
                        arr_11 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) arr_4 [i_2 - 1] [(unsigned short)7] [i_2 - 2])) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        var_11 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((_Bool) (unsigned char)8)))));
                    }
                    arr_14 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    } 
    var_12 = (_Bool)1;
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)32748)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)3)))))) : (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned char) var_7);
}
