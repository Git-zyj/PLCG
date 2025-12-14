/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133661
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) arr_1 [17ULL]);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (var_16) : (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) <= (809593115302301522LL)))))));
                    var_20 = min((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0] [(short)13]));
                    var_21 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0]);
                    var_22 *= ((/* implicit */short) var_12);
                }
                /* vectorizable */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    arr_15 [i_0] [15LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_4 - 1]))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned short)15] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_3);
    var_25 = ((/* implicit */short) var_13);
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7708))) / (var_3)))) : (max((16561960066599903805ULL), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((unsigned long long int) min((((/* implicit */long long int) (unsigned char)229)), (var_3)))), (((/* implicit */unsigned long long int) var_9)))))));
                var_28 += ((/* implicit */signed char) ((unsigned int) arr_17 [i_5]));
            }
        } 
    } 
}
