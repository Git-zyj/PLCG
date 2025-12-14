/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108547
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
    var_10 = var_3;
    var_11 -= ((/* implicit */unsigned char) var_2);
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */signed char) arr_0 [i_0 + 1]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        arr_6 [(unsigned char)3] = ((/* implicit */int) (-(arr_0 [13])));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) (+(arr_0 [i_2])));
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [(unsigned char)11] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4])))))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_9 [i_1] [(unsigned short)0] [(unsigned short)0]))));
                            var_16 = ((/* implicit */long long int) arr_7 [i_1]);
                            var_17 ^= ((/* implicit */unsigned int) (~(arr_10 [i_5])));
                        }
                        arr_18 [i_1] [1U] [i_1] [i_3] = ((/* implicit */short) (+(arr_4 [i_1] [i_1])));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_1] [12LL] [i_1] [i_1] [i_2] [i_2]))));
        }
        var_19 = ((/* implicit */short) (~((~(((/* implicit */int) arr_13 [i_1] [i_1 + 3] [(_Bool)1] [(signed char)0]))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))))));
        var_21 ^= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_1 [i_1]))))));
    }
}
