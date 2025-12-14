/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116149
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_13) ? (((((/* implicit */_Bool) var_17)) ? (281780551U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (4013186744U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_6)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (281780551U)))) % (var_0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_22 = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) min((-18LL), (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : ((~(arr_0 [i_0]))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) + (0LL)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) > (-1LL)))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (arr_3 [i_0])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_1 - 1]))))) ? (min((((((/* implicit */_Bool) 4064845506U)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0]))), ((~(arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) 4013186752U))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            var_25 &= ((/* implicit */long long int) max((max((((((/* implicit */_Bool) 6LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))), (((int) 0LL)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((arr_1 [i_1]) & (((/* implicit */unsigned long long int) 2265920521U))))))))));
                            arr_9 [i_3] [i_2] [7U] = ((/* implicit */signed char) ((-8910975825996691171LL) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_3 + 2] [i_3 - 1] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) var_6))), (1599094566U))))));
        var_27 = ((/* implicit */short) min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
    }
    for (int i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3498)) / (arr_5 [i_5 + 3] [i_5 + 3] [i_5 + 2])))) ? (((var_19) ? (4013186744U) : (((/* implicit */unsigned int) arr_5 [i_5 - 2] [i_5 - 1] [i_5 - 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5 + 2] [i_5 + 3] [i_5 - 2]))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)29753)))) ? (((int) 12772413962453571446ULL)) : (((/* implicit */int) (short)-30895))))) & (((((-3155697417062415798LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_15))) : (((unsigned long long int) arr_15 [i_5] [i_6] [i_5]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) ((790801146) == (790801151)))))))) < (((/* implicit */int) arr_3 [i_5 + 3]))));
                            arr_25 [i_5] [i_6] [i_7 + 1] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -790801136)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9]))) : (var_0)))))) ? (((/* implicit */unsigned long long int) 1537192200)) : ((~(5108553765110413945ULL))));
                        }
                        arr_26 [i_6] [i_8] [2U] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) max((min((arr_1 [i_5 + 1]), (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned long long int) -1)) : (arr_6 [(short)10] [i_7 + 1] [i_6] [i_5]))))), (((/* implicit */unsigned long long int) ((int) ((int) var_19))))));
                    }
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_5] [i_5 - 2] [i_5] [i_12] [11U]), (((/* implicit */unsigned int) arr_30 [i_12] [i_11 - 1] [i_5]))))) ? (((((/* implicit */_Bool) arr_20 [i_12] [i_12] [i_5] [i_12] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [(short)11]))))) : (((((/* implicit */_Bool) 3155697417062415793LL)) ? (131071LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) min((var_5), (var_5)))) ? (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned int) arr_21 [i_5 - 1] [i_12] [i_11 - 1] [i_12]))))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11501))) != (var_18))))));
                        arr_35 [i_12] [i_12] [i_10] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_10] [i_10] [i_12]))) | (((((/* implicit */_Bool) 1048575U)) ? (13022763232503491682ULL) : (((/* implicit */unsigned long long int) arr_0 [i_12])))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_12])) ? (((/* implicit */unsigned int) var_10)) : ((((~(1742574778U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-1), (var_15)))))))));
                    }
                } 
            } 
            arr_36 [i_5] [3LL] = ((/* implicit */unsigned char) 2946597092U);
            arr_37 [i_5] = ((long long int) ((((/* implicit */int) ((unsigned char) (short)30317))) % (((/* implicit */int) (unsigned short)47259))));
        }
        /* LoopNest 3 */
        for (signed char i_13 = 4; i_13 < 10; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    {
                        var_33 = -790801136;
                        var_34 = ((/* implicit */short) var_4);
                        var_35 ^= var_12;
                    }
                } 
            } 
        } 
        arr_48 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned long long int) 2041841795U)) : (10579813490592992589ULL))), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) arr_17 [i_5 + 2] [i_5 + 2] [i_5 - 3])) : (((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 + 2])) ? (18446744073709551615ULL) : (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    }
}
