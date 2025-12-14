/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171503
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) == (((/* implicit */int) var_3))));
        arr_4 [i_0] = arr_2 [i_0 + 1];
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = arr_5 [i_1 - 1];
        var_14 -= ((arr_2 [i_1]) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10714))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1])))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1]))))));
    }
    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (0U)))) || (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */long long int) arr_9 [i_2]);
        var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (var_2)));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                {
                    var_18 -= (_Bool)1;
                    var_19 ^= ((/* implicit */int) 4294967295U);
                }
            } 
        } 
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min(((~(-3836386964305244399LL))), (arr_11 [i_3]))))));
        var_21 += ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) (short)-17003))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_12 [i_3]) << (((((/* implicit */int) min(((short)4380), ((short)4380)))) - (4380)))));
                        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20132))) : (8646911284551352320LL)));
                        /* LoopSeq 1 */
                        for (short i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            var_23 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_18 [(unsigned char)7] [i_8] [i_9])));
                            var_24 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned short)9] [i_3] [i_7] [i_7])) || (((/* implicit */_Bool) arr_15 [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1])))))) != ((+(3997376563U)))));
                            arr_29 [i_9] [i_6] = ((/* implicit */unsigned short) var_3);
                            arr_30 [i_3] [i_6] [i_7 + 3] [i_8] [i_6] [i_9] [i_8] = ((/* implicit */_Bool) var_1);
                        }
                    }
                } 
            } 
        } 
    }
}
