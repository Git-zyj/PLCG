/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10504
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
    var_14 ^= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [2] [2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-19786)))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) max((arr_1 [(unsigned char)7]), (((/* implicit */signed char) ((var_7) > (var_7))))))), (((short) arr_2 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_11 [(short)12] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)177))));
                    arr_12 [i_0] = (unsigned char)177;
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_7))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */signed char) (~(var_9)));
                }
                var_16 = max((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [(unsigned char)5]))))), (((/* implicit */unsigned long long int) var_1)));
            }
        } 
    } 
    var_17 = min(((-(((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) var_9)) : (var_11))))), (((/* implicit */long long int) ((((/* implicit */int) (short)389)) ^ (((/* implicit */int) (signed char)70))))));
}
