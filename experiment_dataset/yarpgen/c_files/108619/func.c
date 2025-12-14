/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108619
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_10 += ((/* implicit */signed char) arr_0 [4ULL] [6U]);
        arr_2 [(unsigned char)6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? ((-(((/* implicit */int) (unsigned short)49645)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((long long int) arr_0 [i_0 + 2] [i_0 - 2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                var_11 = ((/* implicit */signed char) ((unsigned char) arr_0 [(_Bool)1] [i_1]));
                var_12 = var_3;
            }
            var_13 += ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_11 [i_3] |= ((/* implicit */long long int) arr_10 [i_3] [(unsigned char)16]);
        arr_12 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3]);
        var_14 = ((/* implicit */long long int) ((unsigned char) arr_9 [i_3]));
        var_15 = ((/* implicit */unsigned int) arr_8 [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 7; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */unsigned short) (((-(arr_16 [(_Bool)1] [(_Bool)1] [i_6]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_5] [10U] [i_7])) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) arr_7 [(short)18] [i_5])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(arr_23 [i_4 + 2] [i_4] [i_4] [i_4 - 2]))))));
    }
    var_19 *= ((/* implicit */unsigned short) var_4);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(var_6)))))) ? (((((/* implicit */_Bool) (unsigned short)49645)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))));
}
