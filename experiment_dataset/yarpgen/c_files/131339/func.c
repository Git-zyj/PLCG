/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131339
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
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((9609358310765179761ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)230), ((unsigned char)43))))) : (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (670479293U)))));
        var_16 -= ((/* implicit */signed char) ((unsigned int) min((((unsigned char) (short)512)), (((/* implicit */unsigned char) (signed char)119)))));
        var_17 += (short)512;
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_19 *= ((/* implicit */unsigned long long int) ((signed char) (-(max((((/* implicit */long long int) 2740375445U)), (1116892707587883008LL))))));
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL))))));
            }
            for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                arr_13 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (130872100U)));
                arr_14 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)158);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_17 [i_1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1476433223U))));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 144115188075724800ULL))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)225))))))));
                    arr_18 [i_1] [i_1] [(unsigned char)13] [i_1] = ((/* implicit */unsigned short) ((_Bool) 8357001865854154870ULL));
                    arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18302628885633826799ULL)));
                }
            }
        }
        arr_20 [i_1] [i_1] = ((/* implicit */long long int) 16777216);
        var_23 = ((/* implicit */long long int) ((unsigned int) 3363249678U));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 63LL))) ? (((unsigned long long int) ((((/* implicit */_Bool) 866643603U)) ? (1152921504606846960LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)56))))));
    }
    var_25 *= ((/* implicit */unsigned long long int) var_3);
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (3434373632229919846ULL)));
}
