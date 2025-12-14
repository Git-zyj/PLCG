/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124780
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
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (var_5))))))), (((((/* implicit */unsigned int) ((((var_5) + (2147483647))) >> (((var_13) - (1394116945606632777LL)))))) | (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((-725442810875158249LL), (((/* implicit */long long int) arr_6 [i_1] [i_3 + 1] [i_4 + 1])))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                                var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 108899864U)) ? (370026807U) : (((/* implicit */unsigned int) 783083451))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13)))))) == (((/* implicit */unsigned long long int) var_1)));
                                var_21 = (_Bool)1;
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) var_15);
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3924940499U)) ? (((/* implicit */unsigned int) 2147483647)) : (3128720204U))))))), (((((_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned int) arr_5 [i_1] [i_5])) << (((((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_0])) * (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5])) ? (var_15) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned int) var_5)) : (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_3) == (((/* implicit */long long int) arr_3 [i_0] [i_0]))))))))));
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [i_7])))), (((/* implicit */int) ((var_17) >= (var_16))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_8)))))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_7]))) : (var_10))))))))));
                        var_26 = ((/* implicit */unsigned int) (+(7144604560009391461LL)));
                        arr_25 [i_0] [i_1] [i_6] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3924940499U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)110))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_21 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) (!((!(arr_1 [i_7]))))))));
                    }
                    arr_26 [i_0] [i_0] [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(3924940476U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-101))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        var_27 = var_14;
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-65)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_4 [i_1])) >= (arr_18 [i_0]))))) : ((+(((int) arr_13 [i_0] [i_0] [i_6] [i_0]))))));
                        var_29 = ((/* implicit */unsigned char) ((unsigned short) min((var_4), (((/* implicit */long long int) ((unsigned int) var_14))))));
                        var_30 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) >= (arr_12 [i_0] [i_6] [i_1] [i_0] [i_8 + 1])))), (((unsigned long long int) var_10)))) << (((((/* implicit */int) ((unsigned short) (-(arr_19 [i_8 - 1] [i_6] [i_0] [i_0]))))) - (58068)))));
                    }
                    var_31 -= ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) var_7))))) ^ ((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))))));
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)84)))) ? (min((var_10), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)230)) << (((((/* implicit */int) (short)-12838)) + (12851)))))))))) : (var_3)));
                    var_33 = ((/* implicit */unsigned short) ((long long int) max((arr_29 [i_9] [i_0] [i_0] [i_0]), (arr_9 [i_9] [i_1] [i_0] [i_9]))));
                }
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-5171804217655805376LL), (-8891618732750923185LL)))) ? ((((+(var_4))) << ((((+(arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))) - (79333055654088713LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (min((var_7), (((/* implicit */unsigned int) var_5))))))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (-(var_17)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 6527102873239044297LL))))) >> ((((~(var_14))) - (1952992692U)))))));
    var_36 = ((/* implicit */short) 2761268428U);
    var_37 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_12))))))))));
}
