/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156395
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
    var_16 = ((/* implicit */_Bool) (short)-10013);
    var_17 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_1))))));
    var_18 = ((/* implicit */unsigned char) max(((+(min((var_8), (((/* implicit */unsigned long long int) var_14)))))), ((~((+(var_8)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 -= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))), ((~(((/* implicit */int) var_3))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) ^ (var_11))))))), (arr_0 [i_0])));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (var_10)));
        var_21 ^= ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((arr_6 [i_1]) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) var_4)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((arr_5 [i_1 - 1] [i_2 + 1]) ^ (2863241257U)));
            arr_10 [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) arr_9 [i_1])) : ((+(((/* implicit */int) arr_6 [i_1]))))));
            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2]))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))));
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_9))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) 2863241257U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
}
