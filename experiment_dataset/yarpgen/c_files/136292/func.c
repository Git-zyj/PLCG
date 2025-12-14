/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136292
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [17U] [3LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((-93414569) & (((/* implicit */int) (unsigned short)4089))))) != (-9223372036854775805LL))))));
                    arr_8 [i_2] [i_1] [i_0] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_6)), (336098695))))))), (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))));
                }
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_3]), (arr_1 [i_0])))) <= ((-(((/* implicit */int) (short)-16984)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-63)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) * (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)20] [i_3])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_9 [i_3] [i_1] [(unsigned short)15] [i_3])))))) : (((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (signed char)99)) : (1062282283))))));
                    arr_12 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)16986)) : (((/* implicit */int) (signed char)111))));
                }
                arr_13 [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */int) min((arr_9 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_0 [i_0]))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16974))) <= (8408093433080564964ULL))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-118)) >= (arr_6 [i_4] [i_4] [i_4] [i_4])));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) arr_14 [i_4]);
    }
}
