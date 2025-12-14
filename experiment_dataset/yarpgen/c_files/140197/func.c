/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140197
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
    var_16 = ((/* implicit */long long int) ((max((max((var_4), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) var_8)) ? (12689937526178198394ULL) : (14445044965443087791ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 &= ((/* implicit */unsigned long long int) ((long long int) var_0));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) 11012757305789865201ULL);
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                            var_19 = ((/* implicit */unsigned char) ((long long int) arr_1 [i_0 + 1]));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_5] [i_5] [16LL] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [8LL] [i_3] [8LL] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_3] [i_1]))) : (-4020247757881562724LL)));
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 3] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) var_6))));
                            var_21 &= ((/* implicit */unsigned long long int) ((-4020247757881562729LL) - (((/* implicit */long long int) -332542026))));
                        }
                        var_22 = ((/* implicit */short) ((((7433986767919686415ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_2 - 3]))));
                        var_23 &= ((/* implicit */long long int) ((short) ((short) -4020247757881562742LL)));
                    }
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (7433986767919686444ULL));
    }
    for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_14)) - (121))))))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -4020247757881562759LL)) : (14247801169097572423ULL))) : (((((/* implicit */_Bool) arr_1 [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 - 1]))) : (17969844786144579427ULL)))));
            var_26 = arr_11 [i_6 - 1];
            arr_24 [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) var_8));
            var_27 &= ((/* implicit */unsigned long long int) (((-(((-7368234811591881287LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_7])) || (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) arr_19 [i_6]))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
        var_29 = ((/* implicit */unsigned short) arr_12 [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8] [8LL] [(short)0]);
    }
    var_30 = ((/* implicit */short) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */_Bool) 11012757305789865171ULL)) || (((/* implicit */_Bool) 4020247757881562742LL)))))));
    var_31 = ((/* implicit */unsigned short) 10618509616148217271ULL);
}
