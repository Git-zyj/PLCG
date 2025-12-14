/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122565
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) arr_2 [i_0 + 1] [(unsigned short)2]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) min((((1125899904745472ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) ((8186900041604429548LL) - (5597783251485275469LL)));
                arr_8 [0] [i_0 + 2] [4LL] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))) : (arr_5 [i_0] [i_1] [i_0])))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((536608768U), (((/* implicit */unsigned int) var_15))))) <= (((((/* implicit */_Bool) 2693621629306758265LL)) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) var_14))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 3] [i_2])) ? (((/* implicit */unsigned long long int) 536608762U)) : (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (var_3))))) : (var_2))))))));
            }
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
            {
                arr_11 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) var_10)), (arr_6 [7LL] [6LL] [i_3] [0LL]))) : (((/* implicit */long long int) var_6))))));
                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) var_3))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))))) << ((((((+(var_13))) + ((+(var_14))))) - (1360021620818375499LL)))));
                arr_12 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */short) var_10);
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                arr_15 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((long long int) arr_14 [i_0] [(short)5] [4LL])) : (((/* implicit */long long int) var_12))))) ? (((long long int) ((7263645943059518282ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [(short)5])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 11183098130650033333ULL)) ? (7263645943059518272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))))));
                arr_16 [i_0] [i_0] [i_1 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_6)))) ^ (var_17)))) || (((/* implicit */_Bool) ((-6870745896207775200LL) / (((/* implicit */long long int) var_2)))))));
            }
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)240))))))), (var_9))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 8; i_5 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 7646457009512153036ULL)) ? (var_0) : (((/* implicit */unsigned long long int) var_12))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(var_1))))));
            var_25 = ((/* implicit */long long int) ((unsigned char) var_5));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-6870745896207775200LL) | (arr_4 [8ULL] [8LL])))) ? (((((/* implicit */_Bool) -5597783251485275476LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) (+(-5597783251485275469LL)))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_27 -= ((/* implicit */unsigned char) ((arr_21 [i_0 + 1] [i_0 - 1] [(unsigned char)0]) >> (((var_6) - (1708249639)))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536608776U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [10LL])))))) ? (((-5597783251485275487LL) & (var_14))) : (((((/* implicit */_Bool) arr_19 [(unsigned char)10])) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        }
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 13; i_7 += 1) 
    {
        arr_26 [3ULL] |= var_14;
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_29 = (+(((/* implicit */int) var_15)));
            arr_29 [i_7] [i_7] [13ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) & (var_0)))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6219916224671685195ULL)) ? (var_1) : (((/* implicit */unsigned int) var_6)))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (((~(var_14))) - (var_3))))));
        }
        arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (11183098130650033342ULL)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41547)) || (((/* implicit */_Bool) 11183098130650033307ULL)))))));
    }
    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 4) 
    {
        var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((7406485135065559136LL) >= (((/* implicit */long long int) var_8))))))) | (((((/* implicit */_Bool) arr_28 [i_9 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
        {
            var_32 = (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))))) : (arr_34 [i_10] [i_10] [i_10 + 1]))));
            var_33 -= min((((long long int) ((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_10])) ? (((/* implicit */long long int) var_10)) : (5597783251485275486LL)))), (max((((((/* implicit */long long int) ((/* implicit */int) var_5))) + (-641063568477293744LL))), (((/* implicit */long long int) ((((var_10) + (2147483647))) >> (((var_9) - (2855946905579580874LL)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        arr_44 [i_9] [i_11] [13LL] [i_13] = ((((/* implicit */_Bool) arr_42 [i_9])) ? (var_16) : (arr_24 [i_11 + 2]));
                        var_34 |= ((/* implicit */long long int) ((((-24LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32546))))) ? (((/* implicit */unsigned int) 2147483647)) : (var_2)));
                        arr_45 [i_13] [2ULL] [i_12] [(unsigned short)0] [i_9] |= ((/* implicit */unsigned short) (~(var_10)));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) (unsigned short)5367))) ^ (var_16)));
            arr_46 [i_9] = ((arr_38 [i_11 + 1] [i_11 + 2] [i_9]) - (((/* implicit */long long int) arr_43 [i_9])));
        }
        for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_15 = 2; i_15 < 12; i_15 += 3) 
            {
                arr_51 [0U] [0U] [2ULL] |= ((/* implicit */unsigned long long int) 9223372036854775807LL);
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_8)) : (var_14)))) ? ((+(8855860022929001450ULL))) : (((/* implicit */unsigned long long int) (+(var_6)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_16))))), (min((7263645943059518272ULL), (((/* implicit */unsigned long long int) 26LL))))))));
                arr_52 [i_9] = (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 9590884050780550166ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)57093))))) + (((((/* implicit */_Bool) 641063568477293730LL)) ? (arr_28 [2U]) : (((/* implicit */long long int) var_8)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 1) 
            {
                arr_55 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_31 [i_14 - 2]))) >> (((((/* implicit */int) var_15)) - (57786)))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_15))));
            }
            var_38 = ((/* implicit */unsigned int) ((signed char) var_8));
        }
    }
    var_39 = ((/* implicit */signed char) ((max((((long long int) var_2)), (((/* implicit */long long int) var_5)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_2) >> (((var_17) - (2184814048371961307ULL)))))) != ((~(var_16)))))))));
}
