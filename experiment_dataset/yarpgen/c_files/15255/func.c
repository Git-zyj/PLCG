/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15255
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
    var_10 &= ((/* implicit */unsigned long long int) var_8);
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)0)), (928074974985562871ULL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) ((((unsigned long long int) 0ULL)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_6)))) ? (((/* implicit */long long int) var_1)) : (arr_0 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            var_14 = -4725183669844423472LL;
                            arr_11 [i_0 - 1] [i_0] [i_1] [i_2 + 2] [(signed char)3] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((_Bool) -1521596717154452176LL))));
                            var_15 = ((/* implicit */long long int) ((signed char) ((unsigned short) arr_3 [i_0] [i_1])));
                            arr_12 [(signed char)14] [4LL] [6U] [(signed char)14] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) (short)-11572)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_2 + 3] [i_0 + 1])))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)42478))), (((unsigned int) 5570682632066969885ULL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_17 = ((min((var_9), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((unsigned int) (~(0U))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_7] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_6 [5] [i_6 - 1])), (134217727U))) != (((unsigned int) (_Bool)1))));
                    var_18 = ((/* implicit */_Bool) ((long long int) ((unsigned int) 4725183669844423481LL)));
                    var_19 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (short)-1)), (arr_19 [i_5] [(_Bool)1] [i_6 + 2]))) + (((((/* implicit */_Bool) max(((unsigned short)4266), (((/* implicit */unsigned short) (short)-11586))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 + 1] [i_7]))) : (((unsigned int) -7979394622317451689LL))))));
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned int) var_2);
                        var_21 = ((/* implicit */short) max((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_3)))))), (((((/* implicit */int) var_8)) << (((((((/* implicit */int) min(((short)-11586), (((/* implicit */short) (_Bool)1))))) + (11604))) - (3)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        arr_28 [(short)9] [i_7] = var_9;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            arr_31 [i_7] [i_6] [16U] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -194320031))));
                            arr_32 [i_5] [i_5] [i_6 - 2] [i_7] [13ULL] [i_9] [i_10 - 1] = ((/* implicit */_Bool) (~((-(var_1)))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
                        {
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) -7716318199293688513LL))) != (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_3)))))));
                            arr_35 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_4);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) arr_23 [i_6 + 2] [i_9 + 1])) << ((((~(((/* implicit */int) arr_3 [i_7] [i_5])))) + (4))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            arr_39 [i_7] [i_6 - 1] [i_6 - 3] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)0));
                            var_25 ^= (!((!(((/* implicit */_Bool) var_8)))));
                            arr_40 [(short)5] [i_6 + 2] [16U] [i_7] [i_9 - 2] [i_9 - 2] [(signed char)15] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) & (17518669098723988744ULL))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_46 [0ULL] [0ULL] [i_7] [i_7] [i_14] = ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) var_0)), (var_7))) | ((~(var_7))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))));
                            arr_47 [i_5] [i_6 + 2] [(signed char)2] [i_5] [12U] &= ((/* implicit */unsigned short) ((((min((4839008338494199157ULL), (((/* implicit */unsigned long long int) -1521596717154452176LL)))) / (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)1))) ? (((/* implicit */int) (unsigned short)11)) : ((+(((/* implicit */int) (unsigned short)65535)))))))));
                            arr_48 [12ULL] [i_7] [12ULL] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)27651), (max(((unsigned short)13), (((/* implicit */unsigned short) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) : (((((/* implicit */_Bool) var_7)) ? (max((var_2), (((/* implicit */long long int) 524287U)))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */int) ((signed char) min((4148781011U), (2937514891U))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) (~(-7716318199293688513LL)));
                            var_27 &= ((/* implicit */unsigned short) ((((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-19))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1U)))) : (arr_33 [(signed char)4] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_13] [i_15])));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_7)))))))));
                        }
                        arr_54 [i_7] [i_6] [i_6] = ((/* implicit */short) ((((long long int) (_Bool)1)) + (max((arr_33 [i_6 + 2] [(short)4] [i_6 - 1] [(short)4] [i_6 - 2] [i_6 + 1] [i_6 + 2]), (16383LL)))));
                        var_29 = ((/* implicit */unsigned long long int) (signed char)-42);
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned long long int) var_1)))));
    var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((short)11585), (((/* implicit */short) (unsigned char)0)))))) & (var_4)));
}
