/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184345
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) arr_3 [i_0 - 2]);
        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2]))))));
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) arr_1 [i_1 + 2]);
        arr_7 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        var_21 += ((/* implicit */short) var_13);
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) (unsigned short)0))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_1 - 2] [i_2] [i_1 - 1]);
            var_22 += ((/* implicit */unsigned short) arr_0 [16LL]);
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                var_23 += ((/* implicit */unsigned short) var_12);
                arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((-1813709156) | (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (signed char)16))))))) <= (((/* implicit */int) (_Bool)1))));
                arr_17 [i_3] [i_2] = ((/* implicit */_Bool) (+((-(469762048U)))));
                arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_14)))) & (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (max((((/* implicit */int) (signed char)72)), (var_7))) : (((/* implicit */int) ((short) arr_15 [i_2] [(short)11])))))));
            }
            arr_19 [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((int) var_12)) : (((/* implicit */int) min((var_13), ((unsigned char)99)))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_24 += ((/* implicit */signed char) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_14 [10] [i_1 - 2] [i_1 - 2])));
            arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 1])) ? ((-(-6762175023170460456LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1])))));
        }
    }
    for (short i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        arr_26 [i_5] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22140)) < (((/* implicit */int) (short)8290))))), ((signed char)-35)));
        var_25 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (6762175023170460455LL)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-547319245993010751LL))))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_5 + 1])) : (((/* implicit */int) var_4))))));
    }
    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) max((((short) var_3)), (((/* implicit */short) ((signed char) (_Bool)1))))))));
    var_27 += ((/* implicit */_Bool) (signed char)-1);
    var_28 = ((/* implicit */int) ((var_7) != (((/* implicit */int) var_4))));
}
