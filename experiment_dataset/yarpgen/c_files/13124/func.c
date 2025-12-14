/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13124
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) 8LL);
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(11LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (-2LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 939524096U)))) % (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [(short)4])) >> (((arr_0 [i_0] [i_0]) - (2245737195U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (0U)))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned short) ((long long int) (short)-13875));
            var_22 = ((/* implicit */short) max(((+(((/* implicit */int) arr_11 [i_2 + 1] [i_3] [i_2])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1976842182U)))) <= (-9LL))))));
            arr_13 [i_3] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_19), (var_19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18014397435740160LL))))) : ((~(((/* implicit */int) (short)-32459))))))));
            var_23 = ((/* implicit */unsigned char) 8LL);
            var_24 = ((/* implicit */unsigned long long int) var_9);
        }
        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            var_25 -= ((/* implicit */signed char) arr_14 [i_4] [i_2]);
            arr_16 [i_2] [i_4 + 2] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned char)249)) ? (8LL) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (signed char)-8))))))), (((/* implicit */long long int) 4177920U))));
            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) >> (((((((/* implicit */_Bool) (short)-4213)) ? (arr_15 [i_2 + 1] [i_4 + 2] [i_4]) : (arr_15 [i_2 - 1] [i_4 + 2] [i_2 - 1]))) - (565951192036624557ULL)))));
            var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) max(((signed char)0), ((signed char)-107)))), (((long long int) arr_0 [i_2 + 2] [i_2 + 3]))));
        }
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)36182), (((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2 + 2]))))) ? (max((-9LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1]))))))))));
            var_29 = ((/* implicit */unsigned short) ((long long int) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_7))))))));
        }
        var_30 = ((/* implicit */short) 2287828610704211968ULL);
    }
    for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
    {
        var_31 &= ((/* implicit */unsigned int) var_10);
        arr_24 [i_6] = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) var_5))))) < (((/* implicit */int) max((var_4), (var_8)))))), (var_11)));
        var_32 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6 - 2] [i_6 - 1] [i_6 - 2]))) | (max((((/* implicit */unsigned long long int) arr_2 [i_6] [i_6] [i_6])), (18083793240091640565ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (signed char)-7)))))));
        var_33 |= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))) | (arr_22 [i_6]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)16844)), (var_6))))))));
    }
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) ((short) (~((~(18446744073709551615ULL))))));
        arr_27 [i_7] [i_7 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((_Bool) (unsigned short)57647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4398046511104LL))))))))));
        var_35 ^= ((/* implicit */unsigned long long int) min(((-(6LL))), (((/* implicit */long long int) ((signed char) (_Bool)0)))));
        var_36 &= ((/* implicit */signed char) ((((long long int) (+(12357226225744967811ULL)))) - (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)17615)))), (((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_2)))))))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) 6155285716987327280LL);
    }
    var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((var_17) ? (1396725828U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3072))))) & (4294967295U)))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) | (15ULL)))) ? (((/* implicit */unsigned long long int) 1396725851U)) : (17655232327989954629ULL)))));
}
