/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137999
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
    var_13 = ((/* implicit */unsigned char) ((((((int) -1478249543)) > (((/* implicit */int) var_5)))) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) max((max((16453053915499070151ULL), (((/* implicit */unsigned long long int) (unsigned short)16095)))), (((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0] [i_0])))));
        var_15 = arr_1 [i_0] [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) arr_5 [i_2] [(signed char)12] [i_4]);
                        arr_14 [i_3] [i_2] = ((/* implicit */_Bool) var_10);
                        arr_15 [i_3] [8U] [(unsigned char)14] [(unsigned char)14] [i_3] [(short)1] = ((/* implicit */signed char) 1478249542);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) var_8);
        var_18 -= ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned long long int) var_10)), (13ULL))), (((/* implicit */unsigned long long int) arr_11 [16U] [(_Bool)1] [(_Bool)1] [i_1])))) << (((((((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_1])) ? (arr_1 [(short)10] [i_1]) : (arr_1 [10] [10]))) - (1251777704U)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 |= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5])))));
        arr_18 [(short)8] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_4 [i_5])) | (((/* implicit */int) arr_4 [i_5])))));
    }
    var_20 = ((/* implicit */unsigned char) ((unsigned short) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) != (var_8)))))));
}
