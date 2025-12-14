/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167693
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
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)141))) ? (max((min((var_8), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((long long int) 0ULL));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))))), (((long long int) (signed char)-7)))), (((long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)122))))));
            var_17 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((arr_4 [i_0]), (((/* implicit */long long int) arr_2 [(unsigned short)14])))))));
            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned char) max((((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0])), (var_7)))), (((unsigned char) 0LL))));
            var_19 &= ((/* implicit */int) max((((((_Bool) arr_4 [i_0])) ? (arr_0 [i_0]) : (((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))), (((/* implicit */unsigned int) ((unsigned short) 4593671619917905920LL)))));
        }
        for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            arr_7 [i_2] [6U] = ((/* implicit */unsigned int) ((unsigned char) max((arr_5 [9] [i_2 - 1]), (arr_5 [i_0] [i_2 - 1]))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) var_2))), (var_10)))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2 - 1] [i_2 - 1]))) : (((/* implicit */int) var_11))));
            var_21 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((int) arr_6 [i_0] [i_0] [(_Bool)1]))) : (max((arr_0 [i_2]), (((/* implicit */unsigned int) var_7)))))), (((((/* implicit */_Bool) -1202396405427360189LL)) ? (((/* implicit */unsigned int) -1195930803)) : (28U)))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_3)))) | (min((arr_2 [i_0]), (arr_2 [i_0])))));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_12 [(signed char)3] = ((/* implicit */unsigned char) ((short) arr_0 [i_0]));
            var_22 += min((((/* implicit */int) max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_3])))), (((int) arr_1 [i_0])));
            var_23 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_3]))) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_3]))))));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) ((unsigned short) (unsigned char)85))), (((((/* implicit */_Bool) (short)-17432)) ? (1202396405427360189LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))))))));
            var_25 -= ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) -2135387924)) ? (-1680533102) : (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((signed char) var_1)))))));
            arr_15 [i_0] [i_4] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 0U)), (13445372087482274661ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_4]) : (((/* implicit */int) arr_5 [i_0] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_2)))) : (((/* implicit */int) ((_Bool) var_3))))))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_0])), (min((arr_9 [i_4 - 2] [i_4 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4])) || (((/* implicit */_Bool) var_11))))))))))));
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_4])) ? (((/* implicit */unsigned long long int) arr_4 [i_4 + 3])) : (arr_9 [i_4 + 3] [i_4 + 2]))));
        }
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) (signed char)60))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0])), (arr_9 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5] [i_5]))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            arr_22 [i_5] [i_6] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_17 [i_5])) - (((/* implicit */int) var_7)))));
            arr_23 [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_6 [i_5] [i_5 - 1] [i_6]));
        }
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_27 [i_5 - 2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16869)) ? (0) : (((/* implicit */int) (unsigned char)0))));
            var_29 = ((/* implicit */signed char) ((unsigned char) ((signed char) arr_14 [i_5 + 1] [i_5] [i_7])));
        }
    }
    var_30 |= ((/* implicit */_Bool) var_6);
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1680533104)) ? (((((/* implicit */_Bool) -1680533102)) ? (((long long int) 121479325)) : (((long long int) 6456217248337459403ULL)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
    var_32 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) var_11))));
}
