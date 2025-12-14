/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158577
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_6 [(unsigned short)4] = ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [i_1] [i_1]));
        var_20 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 4; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)70))))), (((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 4] [i_3 + 1]))) : ((~(1159757203U)))))));
                        arr_13 [10LL] [10LL] [10LL] [10LL] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) ^ (arr_2 [i_4] [i_2])))) ? (((((/* implicit */_Bool) -1002736665)) ? (5702001493728907626LL) : (((/* implicit */long long int) arr_2 [i_1] [i_1])))) : (arr_7 [i_3 + 1] [i_3 - 4] [i_3 - 4]))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_4] [i_2])), (arr_0 [i_1] [i_2])))) ? (max((((/* implicit */unsigned long long int) 5702001493728907626LL)), (arr_9 [i_1] [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
    }
}
