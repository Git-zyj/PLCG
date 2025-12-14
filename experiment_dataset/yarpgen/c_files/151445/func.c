/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151445
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) 7613978258520174394ULL)) ? (10832765815189377222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2082521162U)) == (7613978258520174394ULL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4030))) == (14721924024410227105ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10832765815189377222ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)24))))) ? (((((/* implicit */_Bool) (unsigned short)31066)) ? (((/* implicit */long long int) 3129359953U)) : (1194557327650536044LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))))));
                    var_16 = arr_2 [i_0 - 1];
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4030)) && (((/* implicit */_Bool) 7613978258520174394ULL))));
            var_18 = ((/* implicit */unsigned int) arr_7 [i_0] [i_3]);
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0U)) ? (-9068798044443001597LL) : (((/* implicit */long long int) 2843019370U)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_20 += ((/* implicit */unsigned int) (_Bool)1);
                    var_21 = ((/* implicit */short) arr_2 [i_4]);
                    var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) -4404626131012798378LL)) && (((/* implicit */_Bool) (unsigned char)246))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 ^= ((526985637U) < (1844871443U));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_24 ^= ((/* implicit */int) ((10832765815189377222ULL) | (((/* implicit */unsigned long long int) 1501726263U))));
                    var_25 -= 0U;
                    var_26 += ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)9592)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_3 - 1] [i_3 - 1]))));
                }
                arr_20 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) 127);
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((255U) >= (2895365687U)))) : (((/* implicit */int) arr_0 [i_3 - 1] [i_0 - 1]))));
            }
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) -970986742);
                            arr_31 [i_0] [i_3] [i_8] [i_9] [i_9] [i_3] [i_10] = ((/* implicit */short) (+((+(1970833350U)))));
                            var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        arr_32 [i_0] = ((/* implicit */unsigned int) ((((((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0]))))) ? (max((arr_26 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0)))) & (((((/* implicit */int) ((((/* implicit */_Bool) 4073165309U)) && (((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])))))))));
        var_30 ^= ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned long long int) 4208895942U)) / (10832765815189377222ULL))), (((/* implicit */unsigned long long int) max(((short)-7468), (((/* implicit */short) (unsigned char)117))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((4294967278U), (((/* implicit */unsigned int) (_Bool)1))))), (9223372036854775807LL))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_11 = 4; i_11 < 8; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */int) ((((((-9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 4070139234U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))))))) ? (max((max((3458764513820540928LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (short)-20463)))) : (((/* implicit */long long int) 2147483647))));
                    var_32 ^= ((/* implicit */long long int) max((((arr_29 [i_11 - 2] [i_13] [i_13] [i_11] [i_13]) ? (8192U) : (2450095853U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_11] [i_11 - 2] [i_11 - 4] [i_13])) < (((/* implicit */int) arr_15 [i_11] [i_11 - 1] [i_11 + 2] [i_12])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_33 ^= ((((/* implicit */_Bool) 6114674146805834164LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24522))) : (3759599561U));
                                var_34 |= ((/* implicit */long long int) ((max((((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10892))))), (min((234125909U), (4070139224U))))) / (((4070139205U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
