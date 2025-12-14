/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165613
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((signed char) arr_3 [i_0 - 3]);
        arr_5 [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)191))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (((((/* implicit */int) arr_1 [(_Bool)1])) << (((var_13) - (891469227)))))));
            var_16 = ((/* implicit */long long int) var_6);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_17 |= ((/* implicit */signed char) arr_11 [i_1] [i_0 + 1] [i_2]);
                var_18 = ((/* implicit */signed char) arr_8 [3] [3] [i_2]);
                arr_12 [i_0] [(signed char)14] = ((/* implicit */unsigned int) arr_11 [i_2] [i_1] [i_0]);
                arr_13 [i_2] [i_2] [i_1] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)16756))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))));
                arr_14 [i_2] = ((/* implicit */int) (short)-29475);
            }
            arr_15 [2ULL] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)224)) <= (1157929108))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)69))));
            arr_16 [16U] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
        {
            arr_19 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 2068611985)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) : (((/* implicit */int) (short)-29475)))) : (((/* implicit */int) var_12))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)122))));
        }
    }
    var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_12)), (var_11))) > (((/* implicit */unsigned int) (+(((int) (signed char)69)))))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_21 [i_4])), (var_1))))))));
        arr_23 [i_4] [i_4] = ((/* implicit */int) max((arr_22 [i_4] [i_4]), (((/* implicit */unsigned int) var_3))));
    }
}
