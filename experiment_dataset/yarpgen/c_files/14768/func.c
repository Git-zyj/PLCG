/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14768
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
    var_19 = ((/* implicit */int) (unsigned char)0);
    var_20 *= ((/* implicit */unsigned char) var_1);
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((~(2078142715))) | (((/* implicit */int) ((unsigned short) 0U))))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((max((var_0), (((/* implicit */int) var_15)))) * (((/* implicit */int) ((15400877752407060587ULL) <= (((/* implicit */unsigned long long int) var_18)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned short) var_3);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)161);
            var_24 += ((/* implicit */unsigned short) (((+(3045866321302491054ULL))) >> (((-2078142702) + (2078142709)))));
            var_25 -= ((/* implicit */unsigned short) var_0);
            arr_7 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) ((arr_11 [i_3 - 1] [i_3 - 2]) << (((((unsigned long long int) (unsigned short)38220)) - (38199ULL)))));
                var_27 |= ((/* implicit */short) (+(3045866321302491028ULL)));
            }
            arr_12 [i_2] = (((!(((/* implicit */_Bool) -1779269379)))) && (((/* implicit */_Bool) 15400877752407060603ULL)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_15 [18ULL] [i_4] [i_4] = ((/* implicit */int) ((var_18) % (((/* implicit */long long int) -780217662))));
            arr_16 [i_4] [i_0] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((4503324749463552ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4] [i_0])))));
            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)4] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (9U)))) : (((/* implicit */int) var_8))));
        }
    }
}
