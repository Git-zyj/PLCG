/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100941
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) || (((/* implicit */_Bool) (unsigned short)8184)))))) : (min((var_11), (3935864754U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned char)147)))))))) : (((/* implicit */int) ((unsigned short) 3935864754U)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2257341145U))))) % (((/* implicit */int) ((var_3) <= (3935864766U)))))))));
            arr_5 [21U] = ((/* implicit */unsigned long long int) ((unsigned int) (-9223372036854775807LL - 1LL)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min(((unsigned short)47560), (((/* implicit */unsigned short) (_Bool)0))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_3 = 4; i_3 < 18; i_3 += 4) 
            {
                arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-(arr_3 [i_0] [i_3 + 3] [i_3])));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 359102530U))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) : (8755288231084967483LL)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((short) (unsigned char)14));
                    var_20 = ((/* implicit */unsigned char) ((long long int) var_13));
                    var_21 *= ((/* implicit */unsigned char) (-(var_11)));
                }
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (signed char)15))));
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                arr_27 [i_0] [i_2] [i_7] = (+(359102542U));
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (unsigned char)16)), (var_5))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (5563198166999392857LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 18446744073709551615ULL)))))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) max((min((3935864754U), (((/* implicit */unsigned int) (signed char)49)))), (((/* implicit */unsigned int) arr_15 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 3])))))))));
                            var_24 = ((/* implicit */short) (~(8016370554811870848ULL)));
                            var_25 = ((/* implicit */_Bool) var_4);
                            var_26 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_33 [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_10 = 3; i_10 < 21; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    arr_39 [i_10] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_9)))));
                    var_27 = var_13;
                }
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [1LL]))))) > (1227345452)));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (1941715014) : (((/* implicit */int) (short)20402))))) ? (8755288231084967486LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47560))))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_0] [i_0] [i_0] [(unsigned short)15] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) max((((/* implicit */long long int) (unsigned short)1598)), (-8755288231084967483LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3935864765U)) ? (((/* implicit */unsigned long long int) 2251799813685184LL)) : (144115188075855872ULL)))) ? (((unsigned int) 5076783000282319867ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26962))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1LL)))))));
                    var_31 = ((/* implicit */unsigned char) max((18302628885633695744ULL), (((/* implicit */unsigned long long int) (short)-21816))));
                }
                arr_47 [(unsigned short)12] [(unsigned short)16] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) ^ (max((var_2), (((/* implicit */unsigned long long int) (signed char)-43))))));
            }
            var_32 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned int) (signed char)-58)), (((((/* implicit */_Bool) (unsigned short)55342)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1288220561U))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_43 [i_0] [i_0] [i_0] [i_0] [(short)20]))));
            arr_48 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)46067)) < (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_2])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1539403479U)), (144115188075855878ULL)))))))));
        }
    }
    var_34 = ((/* implicit */unsigned long long int) var_7);
}
