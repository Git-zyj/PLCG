/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122819
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    var_11 += ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)102)) * (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)94)))))), (((/* implicit */int) min(((unsigned char)95), ((unsigned char)168))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)15746)) : (((/* implicit */int) ((short) (+(((/* implicit */int) var_0))))))));
                    var_13 ^= arr_3 [i_0 + 1] [i_1] [i_2];
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = arr_6 [i_1] [i_2] [i_4];
                                var_15 = ((/* implicit */_Bool) (-(min((min((var_1), (((/* implicit */unsigned long long int) 791250599U)))), (((/* implicit */unsigned long long int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_19 [i_5] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5])) || (((/* implicit */_Bool) var_5))));
            var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (unsigned char)102))))));
        }
        var_17 = ((/* implicit */signed char) var_3);
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)55475))));
        var_19 = ((/* implicit */unsigned int) var_1);
    }
}
