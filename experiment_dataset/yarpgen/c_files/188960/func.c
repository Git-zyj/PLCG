/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188960
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) var_10))) : ((~(((/* implicit */int) (signed char)-13))))))) || (((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) 3928690031U)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)21]))))) > (((long long int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */long long int) var_5);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)0))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_10))), (891601340U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_6 [(_Bool)1] [5U])))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)-1))))))) : (((((_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))) : (min((((/* implicit */unsigned int) arr_1 [i_1])), (366277252U)))))));
    }
    for (long long int i_2 = 4; i_2 < 8; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_2 + 2] [i_2 - 2] [i_3 + 2]));
                        var_15 = ((/* implicit */long long int) (short)-1);
                        var_16 = ((/* implicit */unsigned int) (-(0LL)));
                        var_17 = ((/* implicit */unsigned long long int) (~(arr_5 [i_4])));
                    }
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 - 3] [i_3 - 3])) && (((/* implicit */_Bool) arr_12 [i_2 - 4] [i_3 - 1]))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)21910)), (-6LL)))), (min((((/* implicit */unsigned long long int) arr_3 [i_4])), (arr_16 [i_3] [i_3] [i_4])))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_19 = ((((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_2])) > (((/* implicit */int) arr_20 [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 2] [i_2]))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_2 - 3] [i_2 - 4] [i_6] [i_6])))))));
            var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 + 2] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2]))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) : (var_4))));
            var_21 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) & (-814662023097919386LL)))));
            arr_23 [i_6] [i_2 + 2] [i_2 + 2] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_11)))));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_28 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3318286240417014078LL)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_2 - 3] [i_2])), ((signed char)-76)))) : (((/* implicit */int) arr_10 [i_7] [i_2 + 2]))))) ? (min((((/* implicit */unsigned long long int) -854637487)), (((((/* implicit */_Bool) var_8)) ? (271658561212970851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 2])), (((((/* implicit */_Bool) arr_24 [i_7] [(short)4] [i_7])) ? (var_3) : (var_3))))))));
            arr_29 [i_2 - 4] [i_7] = min((((/* implicit */long long int) max((((/* implicit */unsigned int) -1874533865)), (1661406425U)))), (((-6LL) ^ (((/* implicit */long long int) arr_27 [i_2 - 2])))));
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 8; i_10 += 2) 
                {
                    var_22 = arr_16 [i_10] [i_9] [(short)7];
                    arr_38 [i_10] [i_10 - 1] = ((/* implicit */_Bool) ((arr_0 [i_2] [(signed char)13]) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10])))))) : (((((/* implicit */_Bool) -6LL)) ? (3967230171U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49198))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)89)))))));
                }
                arr_39 [i_2] [9U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_27 [i_2 + 2])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8])) ? (5316832549938646550LL) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (((((/* implicit */long long int) arr_26 [i_2] [i_9])) % (var_9)))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) ^ (((((/* implicit */_Bool) arr_34 [i_2] [i_2 - 1] [i_2 + 2] [i_8 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_8 + 1]))))));
            }
            var_24 *= (~(((-1479032675) + (((((/* implicit */int) (signed char)68)) - (var_4))))));
        }
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                arr_44 [(signed char)7] [i_11] [i_2 - 1] [i_2] |= max((((/* implicit */unsigned long long int) ((signed char) max((arr_40 [i_2] [i_11]), (((/* implicit */short) arr_1 [(short)9])))))), (((((/* implicit */unsigned long long int) ((arr_18 [i_2] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_12])))))) - (min((271658561212970851ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                var_25 *= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (unsigned char)196)) && (((/* implicit */_Bool) (short)5173)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_5))))), (((/* implicit */unsigned long long int) ((arr_0 [i_2 - 3] [(short)3]) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_0)))))))));
                var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_22 [i_2] [(unsigned char)5] [(unsigned char)5])), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2097398054U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))))))) : ((-(var_11))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_2 - 4] [(_Bool)1])) / (var_3))))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) (-2147483647 - 1))) : (arr_27 [i_12])));
            }
            for (short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                arr_47 [i_11] [i_11] [i_11] [i_2 + 2] = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) ((((/* implicit */long long int) 3945768201U)) / (-23LL)))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)62))))));
                            arr_52 [i_2] [i_2 - 1] [i_11] [i_13] [i_14] [i_15] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [9U] [i_14] [i_13]))) : (744466358537713595LL)))))) ? (arr_24 [i_14] [i_14] [i_13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_2 - 4] [i_2] [i_2 - 4] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_20 [i_2 - 4] [i_2 + 2] [i_2] [i_2 - 4] [i_2 + 1])) : (var_3)))));
                            var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) (short)3072)) : (((/* implicit */int) arr_1 [i_2 + 1]))))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned char) arr_40 [(_Bool)1] [(unsigned char)9]);
        }
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -4003782972425740334LL))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (var_5))))) + ((+(var_8)))))));
}
