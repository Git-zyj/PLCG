/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107606
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
    var_10 = ((/* implicit */_Bool) ((int) var_5));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 4] = ((/* implicit */short) (-(arr_0 [i_0] [i_0 - 1])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [4LL] = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]);
                    arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_1 [7U]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) (((+(arr_0 [(unsigned char)8] [i_4]))) & ((~(arr_6 [i_2])))));
                                var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [(unsigned char)5] [i_1] [i_0 + 3] [i_3] [(_Bool)1] [i_4])) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0 - 1])))))) : (arr_14 [10] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])));
                                arr_17 [6LL] [6LL] |= ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_1 [i_2]))) == (((arr_3 [i_3] [i_2]) / (arr_5 [i_0] [i_1] [i_3] [(unsigned short)3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((arr_1 [(short)2]) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [10U]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [13U] [i_0 - 2] [i_0 + 4] [7U] [3U] [i_0 + 4])))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 + 1] [i_5] = ((/* implicit */unsigned short) arr_14 [i_5] [(unsigned short)2] [14U] [14U] [i_5] [4]);
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5] [i_5 - 2] [(_Bool)1] [(signed char)5])) && (((/* implicit */_Bool) (~(arr_14 [i_5 + 2] [i_5] [(_Bool)1] [i_5] [i_5] [i_5 - 3]))))));
    }
    var_15 = ((/* implicit */long long int) min((var_15), (((((long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_9))))) | (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_5))))))))));
    var_16 = ((/* implicit */signed char) ((long long int) var_0));
}
