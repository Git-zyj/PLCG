/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124374
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    arr_10 [i_1] |= ((/* implicit */_Bool) var_9);
                    var_12 = (~(min((arr_5 [i_0 - 1] [i_2 + 1] [i_0 - 1]), (arr_5 [i_3] [i_2 - 2] [i_0 - 1]))));
                    arr_11 [i_0] [i_1] [i_0] [i_2 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2483446947500548268LL)) ? (var_4) : (arr_5 [i_0] [i_3] [i_2 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) <= (arr_5 [i_3] [i_1] [i_2 + 1]))))) : (arr_5 [i_0] [i_1] [i_2 + 1])));
                }
                var_13 = arr_3 [i_0];
                arr_12 [i_0] [i_0] [(short)9] = ((/* implicit */int) arr_3 [i_2]);
                var_14 = ((/* implicit */short) (((_Bool)1) ? ((+(arr_5 [i_0 + 1] [i_2 - 1] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 - 2] [i_2 + 1])) ? (arr_5 [i_0 - 1] [i_2 - 1] [i_2 - 1]) : (arr_5 [i_0 - 1] [i_2 - 2] [i_2 - 2])))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_5])) ? (min((((/* implicit */unsigned int) arr_14 [i_0] [21LL] [i_0 - 1] [i_0 - 1] [i_2 - 1])), (min((((/* implicit */unsigned int) var_8)), (arr_8 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_4])) && (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 + 1] [i_4]))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_1]))) ? (min((((/* implicit */unsigned int) (unsigned char)183)), (arr_8 [i_0 - 1] [i_5]))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_1])) ? (arr_8 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) -5961303872165508181LL))));
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) (unsigned char)113));
                    var_18 = ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))) ? (917004873U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_6] [i_6]))));
                    arr_22 [i_7 + 2] [i_0] [i_0] [(unsigned char)9] = ((/* implicit */signed char) ((_Bool) arr_18 [i_0 + 1]));
                }
                for (short i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [20U] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) ^ (917004873U))));
                    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_1])) > (((/* implicit */int) var_11))));
                    var_20 = 1609598776U;
                    var_21 = ((((/* implicit */_Bool) var_11)) ? (arr_8 [i_0 - 1] [i_1]) : (arr_8 [i_0 + 1] [i_6]));
                }
                arr_27 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1])))))));
            }
            for (long long int i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                var_22 = ((/* implicit */short) (signed char)-77);
                var_23 = ((/* implicit */signed char) min(((+(((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-77)) / (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [i_9])))))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) arr_29 [i_0] [i_0] [i_0])), (var_7))) : ((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_9] [i_9 + 1] [i_9]))))));
            }
            arr_31 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_0 + 1])))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) : (var_3)))));
        }
        for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
        {
            var_25 = ((/* implicit */long long int) min((min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -1628855385))))), (min(((unsigned char)250), (((/* implicit */unsigned char) (signed char)-16)))))), ((unsigned char)241)));
            var_26 = ((/* implicit */int) ((arr_32 [i_0] [i_0]) * (min((arr_32 [i_0] [i_0]), (var_4)))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_2))));
        }
        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) 8755578311683571999LL))))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -4330464606107958095LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_5 [i_0] [(unsigned short)3] [i_11])))))));
            var_28 = ((/* implicit */_Bool) var_1);
            arr_39 [i_0] [i_0] = min((((arr_35 [i_11] [i_11]) & (((/* implicit */long long int) ((/* implicit */int) ((short) 917004873U)))))), (((/* implicit */long long int) (~(3906701562U)))));
        }
        /* LoopNest 3 */
        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 20; i_13 += 1) 
            {
                for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) min((((min((var_3), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 11861496644278434922ULL)))))))), (((/* implicit */unsigned long long int) 1628855384))));
                        var_30 = ((/* implicit */int) arr_6 [i_14] [(unsigned char)3] [i_14]);
                    }
                } 
            } 
        } 
        arr_49 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [15U] [i_0]))) : (arr_5 [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */long long int) arr_7 [i_0] [19ULL] [i_0])) : (((6875683326750831124LL) ^ (((/* implicit */long long int) 1942742930U))))))) || (((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 2) 
        {
            arr_52 [i_0] [i_15] = ((/* implicit */unsigned int) var_10);
            var_31 = 3772592236U;
        }
    }
    var_32 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_16 = 3; i_16 < 11; i_16 += 2) 
    {
        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            {
                var_33 = ((/* implicit */signed char) arr_54 [i_16] [i_16]);
                var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), (min((arr_53 [i_16]), (arr_53 [i_16])))));
            }
        } 
    } 
}
