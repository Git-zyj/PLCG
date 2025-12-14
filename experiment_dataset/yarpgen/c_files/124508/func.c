/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124508
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_5 [i_0] [i_1 + 2]))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) 8387584U);
                arr_9 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) max((6625447149405600510ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0 - 1])))));
                var_21 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned short)65535)), ((-(((/* implicit */int) (unsigned short)65535)))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12)))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)65535)))))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)511), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))));
            }
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_14 [5U] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_4);
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1016)) >> (((((((/* implicit */_Bool) var_16)) ? (var_1) : (arr_5 [i_1 + 1] [i_1]))) - (8877413633713993636ULL)))));
                arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */long long int) arr_11 [i_0]);
            }
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_3 [i_1] [i_4]))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(arr_5 [i_4] [1LL]))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_24 = ((/* implicit */_Bool) var_17);
            var_25 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> ((((+(((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0])))) - (91)))))) : (((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> ((((((+(((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0])))) - (91))) - (77))))));
        }
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            arr_26 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0] [i_0])) ? ((~(9223372036854775807LL))) : (max((arr_19 [i_0] [i_0] [i_0] [12LL]), (((/* implicit */long long int) (unsigned short)65522))))))));
            arr_27 [i_0] = max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (arr_5 [i_0] [i_6]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2234207627640832LL))))));
        }
        arr_28 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_4) ? (-2852373809707417147LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)112)))))))) || (((/* implicit */_Bool) var_15))));
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534)))));
            arr_32 [i_0] = ((/* implicit */_Bool) min((max(((-(var_10))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5364965225782684966LL))))))), (max((((/* implicit */unsigned long long int) 9223372036854775799LL)), (18446744073709551615ULL)))));
            arr_33 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-8)), (var_2)))), ((unsigned short)0)))) ? (((/* implicit */int) (unsigned char)196)) : ((-(((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_7))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_7 + 3] [i_8] [i_9] [i_10 + 2] = ((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))) >= (((/* implicit */int) arr_8 [i_10] [i_10 + 2] [i_7 + 2] [i_0 - 1])))))));
                            arr_41 [i_0] [i_7] [i_8] [i_8] [i_0] [i_9] [i_10] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)66)))) * (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_39 [i_0] [14LL] [i_0] [i_0] [i_0]))))))) >= (((((/* implicit */_Bool) 7994902979694561887LL)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (unsigned char)17))))));
                        }
                    } 
                } 
                arr_42 [i_0 + 1] [i_7] [i_0] [i_0 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_12 [i_0] [i_7 + 3] [i_8] [i_0])))), (((_Bool) var_7))))), (var_16)));
                var_28 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)-1)) & (((/* implicit */int) arr_22 [10LL] [i_7] [i_0]))))));
            }
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                arr_45 [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_34 [i_0] [i_7] [i_7 + 3]))))));
                arr_46 [i_0 + 1] [i_7] [i_0] = ((/* implicit */unsigned char) var_11);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 3) /* same iter space */
        {
            var_30 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)49))));
            var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1099511627775ULL)) ? (((/* implicit */unsigned long long int) 2282836357U)) : (17379601918461784884ULL)));
            arr_49 [i_0] = ((/* implicit */unsigned long long int) (~(((((var_3) + (9223372036854775807LL))) << (((var_6) - (470772752632626026ULL)))))));
            arr_50 [i_0] = ((/* implicit */unsigned char) var_6);
        }
        arr_51 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)60))));
    }
    var_32 = ((/* implicit */unsigned long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) <= (16593071998016579275ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_7))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_7))));
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))));
}
