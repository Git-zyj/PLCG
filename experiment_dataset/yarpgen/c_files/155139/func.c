/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155139
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
    var_12 = var_9;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_14 = ((/* implicit */unsigned short) ((unsigned int) 0ULL));
        var_15 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (17293822569102704640ULL))) - (max((((/* implicit */unsigned long long int) (short)32761)), (var_10)))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                            var_17 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_7)) ? (arr_10 [i_1] [i_2] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (unsigned short)27219)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_1 [i_3] [i_1])))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) 402653184U))))))));
                            arr_12 [i_1] [i_2] [(unsigned short)20] [i_4] [i_5] = ((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_3]);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (((-(var_1))) <= (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (11113670616255184824ULL))))))));
                            var_19 = ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (signed char)-94)), (3U)))))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028797018947584ULL)) || (((/* implicit */_Bool) var_3))))), (((unsigned long long int) var_2)))));
                        }
                    } 
                } 
            } 
            var_20 *= var_0;
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) (unsigned short)9)), (7333073457454366782ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [16ULL] [12ULL] [i_6] [i_7 - 2])), (402653165U)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (8793945538560ULL)))) ? (((/* implicit */int) min((var_0), ((signed char)56)))) : (((((/* implicit */_Bool) 2919767182U)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) arr_13 [i_2] [20U] [(signed char)10])))))))));
                        arr_18 [i_6 - 1] [i_1] = ((/* implicit */unsigned short) var_1);
                        var_22 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [(unsigned short)22]))) + (4294967275U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (18082740417457138454ULL)))))) ? (((((/* implicit */unsigned long long int) 766293067U)) ^ (380003406466655501ULL))) : (((/* implicit */unsigned long long int) 3528674229U))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) (unsigned short)57603))))), ((-(var_1)))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (max((min((20U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_8))))));
    }
}
