/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173513
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((long long int) 6720328664277634429LL)) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) + (((/* implicit */int) (signed char)-75)))))));
        var_11 = ((/* implicit */unsigned char) (!(arr_0 [i_0 - 2])));
        var_12 = ((/* implicit */unsigned char) ((unsigned long long int) -288004381));
    }
    /* LoopNest 2 */
    for (short i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            {
                arr_7 [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) (short)2048)) ^ (((/* implicit */int) arr_2 [i_1 - 2]))))));
                arr_8 [i_2] = ((/* implicit */unsigned char) ((((long long int) 4069791209U)) >> (((((/* implicit */int) (unsigned char)249)) - (201)))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1])))))))));
                arr_9 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), ((short)12288)))) ? (((/* implicit */int) (short)-2048)) : (((/* implicit */int) arr_15 [i_4] [i_3] [i_1])))))));
                            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_3 [i_1]))))))));
                            arr_17 [10] [i_2] [i_2 - 1] [10] [i_3] = (~((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)20)))))));
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)104)) ? (1888052122) : (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
            }
        } 
    } 
}
