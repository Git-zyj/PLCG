/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138155
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
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~(arr_1 [(short)13])));
        var_20 += ((/* implicit */signed char) ((arr_1 [i_0]) / (((arr_1 [i_0]) ^ (var_8)))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_0] [(_Bool)1] = (~(((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_0])));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(5960700133485618151ULL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_17))));
            arr_21 [i_5] [i_5] [i_5] = ((((/* implicit */int) (_Bool)1)) * (arr_18 [i_4] [(short)14]));
        }
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
        {
            arr_24 [i_6] [i_6] [i_4] &= ((/* implicit */_Bool) arr_15 [(_Bool)1]);
            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((1763815226) / (231425267))) == (((/* implicit */int) (!(((/* implicit */_Bool) 1763815226)))))));
            arr_26 [i_4] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_7))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5960700133485618151ULL)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned int) arr_18 [i_4] [0U])) : (44633596U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4])))))))))));
        }
        var_23 = ((/* implicit */unsigned char) var_16);
    }
}
