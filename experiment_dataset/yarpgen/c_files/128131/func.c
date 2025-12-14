/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128131
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
    var_18 = ((/* implicit */short) var_15);
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-125)), (var_13)))) == (((/* implicit */int) ((unsigned char) var_4)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (min((((/* implicit */int) (unsigned char)131)), (2147483647))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_2] [(signed char)4] [(signed char)10] [5LL] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_0 [i_2 - 1]))) == (((((/* implicit */_Bool) arr_6 [i_1] [13] [i_2 + 1] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 1] [i_2]))))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) var_14);
                        arr_11 [i_2] = (_Bool)0;
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        arr_15 [i_4 - 1] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_11))))))) > (((((/* implicit */unsigned long long int) var_4)) & ((-(arr_7 [i_4] [12U] [14U] [(_Bool)1] [(_Bool)1])))))));
        arr_16 [i_4] = arr_6 [i_4] [i_4] [(signed char)1] [i_4];
        arr_17 [i_4] |= ((/* implicit */unsigned long long int) var_15);
        arr_18 [i_4] [(short)5] &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_8 [(_Bool)1] [i_4 - 3] [i_4 + 1] [i_4 - 1])))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4]))))));
    }
    var_22 = ((/* implicit */int) var_5);
}
