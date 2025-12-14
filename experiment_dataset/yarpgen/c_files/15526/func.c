/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15526
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
    var_19 |= ((/* implicit */unsigned char) (((~(((long long int) 3353725146U)))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) (unsigned char)87);
                var_20 *= ((unsigned int) min(((unsigned short)16671), ((unsigned short)32768)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2 - 2] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) > (var_15)));
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] [i_3 + 1] = ((/* implicit */signed char) (unsigned char)169);
        var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_3])))));
        arr_12 [7ULL] |= ((/* implicit */long long int) (unsigned char)71);
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_18 [i_5 - 1] [i_4] [i_4] [i_5] = (-(((/* implicit */int) (unsigned char)169)));
                    var_23 -= ((/* implicit */signed char) (unsigned char)83);
                    arr_19 [i_5] [i_5] = ((/* implicit */signed char) arr_16 [i_3] [i_3 - 2]);
                }
            } 
        } 
    }
}
