/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124317
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
    var_14 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 ^= ((((/* implicit */_Bool) arr_3 [(short)18])) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) arr_2 [(unsigned short)17]))))) ? (arr_3 [i_1]) : (((unsigned int) arr_2 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                arr_9 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_9))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (short)21))));
            }
            for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2]), (arr_7 [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_1] [i_4 - 1]), (arr_10 [i_2] [i_4] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_1])))));
                var_19 = ((/* implicit */_Bool) 6U);
            }
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_17 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_4 [i_1] [i_1] [i_5]))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
            }
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) var_1);
                    arr_25 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))) <= (max((var_2), (((/* implicit */unsigned long long int) 2147483647))))))), ((~(arr_15 [i_7 + 2] [i_7 + 1] [i_7] [i_7 - 1])))));
                }
                for (unsigned short i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_22 = arr_10 [i_2] [i_6] [i_2] [i_2];
                    var_23 = ((/* implicit */signed char) max((arr_16 [i_1] [i_2]), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_13)))))))));
                }
                for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    arr_32 [9U] [i_1] [i_6] [i_2] [i_9] = ((/* implicit */unsigned short) (short)-22);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (-3159405566729726524LL)))) ? (((/* implicit */unsigned int) (-(2147483647)))) : (1373420912U)))))))));
                    arr_33 [(unsigned short)0] [(unsigned short)7] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1]))) | (3159405566729726524LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_2] [i_1] [i_6] [(unsigned short)17])) ? (((/* implicit */int) arr_12 [i_9] [i_6] [i_2] [(unsigned short)8])) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_4 [i_1] [i_2] [i_9 + 1]))))));
                    var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((1637386600U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9 - 1] [i_9] [i_9] [i_9])))))), (((long long int) arr_10 [i_2] [i_2] [i_6] [i_9 - 1]))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    arr_38 [i_2] [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_6] [i_6] [(short)13] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_6] [(unsigned short)5] [i_10] [i_1])) ? (arr_30 [(short)0] [i_2] [i_2] [i_6] [i_6] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    arr_39 [i_1] [i_2] [i_1] [i_2] [i_6] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
                for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) ((6549711929945213410LL) != (((/* implicit */long long int) var_6)))))))), (((((-3159405566729726524LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)67))))) | (((/* implicit */long long int) ((/* implicit */int) (short)21)))))));
                    var_27 = ((/* implicit */unsigned short) (-(-1LL)));
                }
                arr_42 [i_1] [i_2] [i_2] = 822882211U;
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    arr_46 [i_1] [i_2] [(unsigned short)0] [i_12] = ((/* implicit */short) min((((/* implicit */unsigned short) min((var_7), (((/* implicit */short) arr_20 [i_6] [0U] [0U] [i_12]))))), (min((arr_24 [i_1] [i_12]), (((/* implicit */unsigned short) min((((/* implicit */short) var_10)), ((short)32417))))))));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (var_0))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [13LL] [i_2] [(signed char)7] [i_12])))))))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    arr_51 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-11277)) : (((/* implicit */int) arr_18 [i_1] [i_2] [i_6] [i_13])))) / (((/* implicit */int) ((short) arr_18 [i_2] [i_6] [i_6] [i_13 + 2])))));
                    arr_52 [i_13] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((max(((-(arr_43 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_1] [i_2] [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (short)7336)))))));
                }
            }
            arr_53 [i_2] = ((/* implicit */unsigned char) 1U);
        }
        for (short i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
        {
            arr_56 [i_14] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) min((3472085085U), (((/* implicit */unsigned int) (signed char)63))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_30 [i_1] [(unsigned short)4] [i_1] [8U] [i_1] [(signed char)10]))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1]))))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((signed char) (signed char)96))) - (64)))));
            var_29 ^= ((/* implicit */unsigned short) (signed char)-55);
            arr_57 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_14])) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))) : (((/* implicit */int) arr_18 [i_14] [i_14] [i_1] [i_1]))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) : (((long long int) (signed char)-46))))));
        }
        var_30 = (+(min((((/* implicit */unsigned int) ((signed char) 372869458U))), (((arr_48 [i_1] [8ULL]) * (((/* implicit */unsigned int) var_12)))))));
    }
    var_31 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) max(((signed char)-63), ((signed char)108)))))) && (((/* implicit */_Bool) -5023076623677949846LL))));
}
