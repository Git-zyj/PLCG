/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163808
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 1587698524U)) >= (min((((/* implicit */long long int) (unsigned short)26993)), (var_8))))))) <= (1909085425U)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_9))))));
        var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_17 |= ((max((min((0U), (((/* implicit */unsigned int) (unsigned char)46)))), (((((/* implicit */_Bool) (signed char)117)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)41)) == (((/* implicit */int) arr_5 [i_1])))))));
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)210))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_19 = ((/* implicit */long long int) 2251731094208512ULL);
    }
    for (int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned short)0);
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((var_5) << (((((/* implicit */int) arr_7 [i_2 + 1] [i_2])) + (63)))))) % ((-(min((var_8), (((/* implicit */long long int) arr_8 [i_2]))))))));
        var_22 = ((/* implicit */unsigned int) var_12);
        var_23 = ((/* implicit */unsigned short) var_10);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_8 [i_2])))) ? ((-(arr_8 [i_2]))) : (((arr_8 [i_2]) - (arr_8 [i_2])))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_4 [i_3]))));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 3; i_5 < 12; i_5 += 3) 
            {
                var_26 = ((/* implicit */int) (unsigned short)38543);
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 1168453307))));
            }
            for (long long int i_6 = 3; i_6 < 12; i_6 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) var_4);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_2 + 1] [i_2] [i_4] [i_6 + 3]) * (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_4])) ? (var_6) : (arr_19 [i_4 - 1] [i_4] [15U] [i_4]))) : (((/* implicit */unsigned long long int) 8323072))));
                var_30 = ((/* implicit */long long int) ((((-1168453307) <= (((/* implicit */int) (unsigned char)128)))) ? (((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (18444492342615343104ULL))) : (((/* implicit */unsigned long long int) var_2))));
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned int) ((arr_18 [i_2 - 1]) / (arr_18 [i_2 + 2])));
                var_32 &= ((/* implicit */unsigned int) ((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_4 - 1] [i_2 + 1]))));
                var_33 |= ((/* implicit */int) ((((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_7]))))) ? (((((/* implicit */_Bool) 75741716U)) ? (((/* implicit */unsigned long long int) -2082085866)) : (arr_14 [i_2] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_4] [i_2]))) : (var_2))))));
                var_34 = (unsigned char)23;
                var_35 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (2298334017U))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55198))) : (var_5)))));
            }
            for (signed char i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-8548895785775196820LL) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (arr_15 [i_2] [i_2]) : (((/* implicit */long long int) 2385881870U))));
                            var_37 = ((/* implicit */unsigned int) arr_20 [i_2] [i_2] [i_2] [i_10]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_11 = 4; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_18 [12ULL])) & (arr_34 [i_2] [i_2] [i_2] [i_2])))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_8])) <= (((/* implicit */int) (short)1536))))))));
                    var_39 = ((/* implicit */unsigned int) ((arr_15 [i_2 - 1] [i_2]) - (arr_15 [i_2 + 2] [i_2])));
                }
                for (unsigned short i_12 = 4; i_12 < 13; i_12 += 3) /* same iter space */
                {
                    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)27011)) ? (((/* implicit */int) (unsigned short)5610)) : (((/* implicit */int) (signed char)-67)))))))));
                    var_41 += (~(((var_8) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))));
                }
                var_42 &= ((/* implicit */unsigned long long int) arr_25 [i_4 - 2] [i_8]);
                var_43 = ((/* implicit */int) min((var_43), (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-117)) != (1168453307))))))));
            }
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_2] [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) arr_26 [i_2] [i_4 - 2] [i_4])) : (((/* implicit */int) arr_26 [i_2] [i_4 - 2] [i_4 - 2]))));
        }
    }
}
