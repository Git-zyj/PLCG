/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145624
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (((496209806U) << (((-4176779820868058709LL) + (4176779820868058728LL)))))))), (min(((~(22LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [(_Bool)1])), ((unsigned char)0)))) >> (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]);
        var_20 = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_0 [i_1]))))));
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (3798757481U))) >> (((/* implicit */int) arr_2 [i_1]))));
        arr_8 [i_1] [(unsigned char)16] |= ((/* implicit */unsigned short) -23LL);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) -4);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 1879048192))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])), (arr_12 [i_1] [i_1] [(_Bool)1] [i_1])));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((unsigned short) arr_12 [i_1] [i_1] [i_1] [i_4]))));
                                arr_20 [i_1] [i_4 + 2] [i_3 + 1] [i_4] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned int) -22LL);
                                var_26 ^= ((/* implicit */int) var_3);
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (unsigned short)49821))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(min((arr_17 [i_3 + 1] [i_2] [i_3] [i_2 + 1] [i_3 - 3] [(signed char)14]), (((/* implicit */unsigned long long int) ((496209806U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)14])))))))))))));
                }
            } 
        } 
        arr_21 [2LL] [14U] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)254)) << (((9007199253692416LL) - (9007199253692400LL)))));
    }
    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            arr_26 [i_6 - 1] [i_6] [i_6 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [4LL] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6])) ? (arr_17 [i_6] [i_6] [5U] [0LL] [i_6 + 2] [i_6 - 1]) : (arr_17 [11LL] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 1])));
            var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_6])) != (((/* implicit */int) arr_10 [i_7 - 1]))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_30 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)0)))), (arr_29 [i_6])))) >= (max((((/* implicit */unsigned int) min(((unsigned short)12172), (((/* implicit */unsigned short) arr_1 [i_6 + 2] [i_6 + 2]))))), (arr_27 [i_6])))));
            var_30 -= ((/* implicit */_Bool) 496209806U);
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_33 [i_9] = ((/* implicit */_Bool) (short)366);
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                arr_38 [i_6] = ((((arr_37 [i_10] [i_9] [i_10] [i_6 + 1]) << (((/* implicit */int) arr_34 [i_6 + 1] [i_9] [(_Bool)1])))) % (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)248))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((signed char) arr_12 [i_10] [i_9] [i_9] [i_10])))));
                arr_39 [i_6] [5U] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_10] [i_9] [(_Bool)1] [(unsigned char)1] [(unsigned char)1] [i_9]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_0 [i_6])) : (-4))) == ((+(((/* implicit */int) var_5)))))))) : (arr_16 [i_9] [i_9])));
                var_32 = ((((/* implicit */long long int) ((/* implicit */int) ((short) -23LL)))) > (((((long long int) -23LL)) | (((/* implicit */long long int) 3798757510U)))));
            }
            var_33 += ((/* implicit */_Bool) ((short) var_10));
        }
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    {
                        arr_47 [i_11] = ((/* implicit */unsigned char) 12LL);
                        arr_48 [i_12] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((7438498333848360614LL) > (((/* implicit */long long int) ((/* implicit */int) var_13)))))) <= (((/* implicit */int) ((unsigned short) (short)349))))))) : (var_12)));
                    }
                } 
            } 
            var_34 = max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)180)) ? (var_9) : (((/* implicit */int) (short)366))))))), (((((/* implicit */_Bool) ((arr_12 [i_6] [i_11] [i_6] [i_6]) << (((((-18) + (49))) - (31)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)106))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_6 + 2])), (var_15))))));
            arr_49 [i_11] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)138)), ((unsigned short)53363)))) ? (arr_29 [i_6 + 1]) : ((-(((/* implicit */int) var_11)))))), (((/* implicit */int) var_13)));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_35 = arr_5 [i_6 + 2];
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((arr_11 [i_6 + 1]) == (arr_11 [i_6 - 1]))))));
        }
    }
    for (unsigned char i_15 = 1; i_15 < 9; i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) & (arr_54 [i_15 + 1] [i_15]))) == (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
        arr_57 [i_15] = ((/* implicit */short) arr_5 [i_15]);
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 475056872))) == (((/* implicit */int) (((-(((/* implicit */int) var_16)))) <= (((((/* implicit */int) arr_25 [i_15])) + (((/* implicit */int) arr_19 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28850)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (short)0))))) ? (max((((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-969)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_2)))))) : (((/* implicit */int) (signed char)-116)))))));
}
