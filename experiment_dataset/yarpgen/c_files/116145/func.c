/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116145
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
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))) + (((var_0) - (max((var_0), (((/* implicit */unsigned long long int) (unsigned char)0))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))) - (18446744073709539614ULL)))))) : (var_0)));
    var_20 &= ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2 - 1] [i_0] = ((/* implicit */int) (+(((var_4) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    arr_9 [11LL] [i_2] [11LL] [i_1] = ((/* implicit */unsigned long long int) (-(arr_4 [i_2 + 1] [(signed char)9] [(signed char)9])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 4; i_3 < 13; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [(unsigned char)0] [(unsigned char)0]) % (-4575413186019691005LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))));
            arr_13 [i_0] [(signed char)10] = ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                var_23 = ((/* implicit */unsigned int) ((signed char) var_15));
                arr_18 [i_0] [i_0] [i_0] = var_5;
                arr_19 [(unsigned char)12] [i_3 - 3] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_4] [i_4]))));
                arr_20 [(unsigned short)6] [(unsigned short)6] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_3 + 1]));
            }
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) ((signed char) var_0));
        arr_22 [i_0] = ((/* implicit */short) var_15);
    }
}
