/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115043
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [8U] |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (max((var_1), (((/* implicit */unsigned long long int) (unsigned short)53009))))))), ((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)53009)) : (((/* implicit */int) arr_0 [i_1]))))) : (arr_4 [i_1])))));
            arr_6 [(signed char)8] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned short) (signed char)0));
            arr_7 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_2 [i_1])))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) arr_9 [i_2 + 2]);
                    arr_12 [i_2 + 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)31164)), (((max((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_3] [(_Bool)1]))) - (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) min((var_13), (((/* implicit */short) ((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)26185)))))))));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((unsigned int) (unsigned short)40333)), (((/* implicit */unsigned int) var_12)))))));
    var_20 = ((/* implicit */int) ((var_9) ? (min((max((var_8), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((65535) / (25)))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) var_2)))))))));
}
