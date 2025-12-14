/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128009
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = (unsigned char)19;
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) arr_1 [(_Bool)1] [i_0])));
        var_15 = ((/* implicit */_Bool) ((unsigned short) arr_1 [(unsigned short)19] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_2] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
                arr_15 [i_2] [i_3] = ((/* implicit */long long int) arr_13 [13] [5ULL] [(_Bool)1] [i_2]);
                arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_3 - 1] [i_3])));
            }
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                arr_19 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3423025687839876330ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232)))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)33)))) : (((/* implicit */int) ((unsigned short) (unsigned short)34604)))));
                arr_20 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_2] = ((/* implicit */short) ((signed char) arr_6 [i_1 + 1] [i_1 + 1]));
            }
            arr_21 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)34614))));
        }
        arr_22 [(unsigned short)20] = ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]);
        arr_23 [i_1] = ((/* implicit */long long int) var_1);
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18273)) <= (((/* implicit */int) (signed char)-64))));
}
