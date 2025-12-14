/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172503
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
    var_13 = ((/* implicit */short) max((var_11), (((/* implicit */unsigned int) var_8))));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_15 = ((/* implicit */long long int) (~(arr_0 [i_0])));
        var_16 = ((/* implicit */short) (signed char)-50);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((signed char) arr_3 [i_1] [i_1 + 2]));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (((((/* implicit */_Bool) 6079210007737648306LL)) ? (((/* implicit */long long int) -1817577245)) : (arr_3 [i_1] [i_1]))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)50033))))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)4))));
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_8 [i_2] [i_2]);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6079210007737648306LL)) ? (-6079210007737648307LL) : (((/* implicit */long long int) 3705872951U))));
                    arr_16 [i_3] [3U] = ((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2]);
                    var_19 = ((/* implicit */short) ((long long int) arr_5 [i_2]));
                }
            } 
        } 
        arr_17 [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_15 [i_2] [i_2] [(unsigned short)14])))) ? ((-(((/* implicit */int) arr_8 [i_2] [i_2])))) : (((/* implicit */int) arr_4 [i_2]))));
    }
    var_20 = ((/* implicit */unsigned short) var_10);
}
