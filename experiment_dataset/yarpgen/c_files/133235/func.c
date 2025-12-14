/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133235
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_10 = ((/* implicit */short) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_11 = var_6;
                    var_12 += ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [(unsigned char)11])) : (arr_8 [i_1] [i_1] [i_1] [i_3])))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_1 [i_1] [14]))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1])), (1927859269U)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), ((short)(-32767 - 1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    var_15 = ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_7)))) ? (((/* implicit */int) (unsigned short)43421)) : (((/* implicit */int) arr_0 [i_5])))) % (((/* implicit */int) var_3)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_4 [i_6 + 2]);
                                var_17 += ((/* implicit */unsigned short) arr_3 [10]);
                                var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) min((arr_6 [(signed char)5] [(signed char)5] [i_7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))))));
                                arr_22 [i_1] [i_1] [i_1] [i_6 + 1] [i_1] &= ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_4] [i_4])), ((unsigned short)22126))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) (_Bool)0);
}
