/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172444
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37349)) || ((!(((/* implicit */_Bool) arr_2 [19LL])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) / (var_5))) - (((0U) << (((max((((/* implicit */long long int) arr_1 [i_0])), (-1181575913414447374LL))) - (4117613LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */long long int) 4294967280U))))) ? (18074952727155349995ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */int) (short)-32761)) : (995578477))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8196347087990974659ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)32767))))), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2])))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16U)) ? (arr_3 [i_0 + 1] [i_1]) : (((((/* implicit */int) ((((/* implicit */_Bool) 2403200412817892095LL)) || (((/* implicit */_Bool) 10419194317749907045ULL))))) + (-995578477)))));
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 4; i_5 < 7; i_5 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_13 [i_4]);
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9058360075524024980LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [i_5])))) < (((/* implicit */int) arr_0 [i_5] [i_5]))))), (16U)));
                /* LoopNest 3 */
                for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_26 [i_6] [i_5 - 1] [i_5 - 1] [4] [i_7] [i_5 - 1] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_6] [i_4])))) * (8196347087990974656ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned long long int) 1828440280U)) : (((((/* implicit */_Bool) arr_20 [i_5] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_16 [i_4] [i_5] [i_4]))))) : (((unsigned long long int) arr_3 [i_6] [i_4 + 1]))));
                                var_20 &= ((/* implicit */unsigned long long int) var_10);
                                var_21 = ((/* implicit */unsigned short) ((((8196347087990974683ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-23313)) : (((/* implicit */int) arr_4 [i_7]))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) arr_19 [i_4])) : (3417565335358304575LL)))) ? (((unsigned long long int) (unsigned short)27462)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_4] [i_6] [i_7] [i_8])) ? (arr_12 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (short i_10 = 1; i_10 < 7; i_10 += 1) 
                    {
                        {
                            var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (1749717520536147390ULL));
                            var_23 &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) 1023324873U))))) > ((+(((/* implicit */int) (signed char)-112)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6576)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((long long int) (unsigned short)33617))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 371791346554201621ULL)) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (16778365834162152325ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
                        arr_48 [i_12] = ((/* implicit */unsigned int) ((unsigned short) 2041159234U));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((3681046999U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) <= (18074952727155349995ULL)))))));
                                arr_54 [i_11] [i_11] [i_13] [i_12] [i_13] = arr_49 [i_11] [i_12] [i_13] [i_15];
                                var_27 += ((/* implicit */unsigned long long int) (unsigned short)8234);
                                arr_55 [i_12] [i_15] [i_13] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3848713912596129710LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) (unsigned short)13))))) : (min((arr_46 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) (signed char)-1))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11]))) : (((arr_41 [i_11] [i_15] [i_13] [i_15]) << (((371791346554201617ULL) - (371791346554201560ULL))))))) : (((/* implicit */unsigned long long int) min((min((613920302U), (1023324873U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_13] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_2 [i_12])) : (((/* implicit */int) var_4))))) >= (min((var_11), (2788943696944929215LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (arr_51 [i_11] [i_12] [i_12] [i_13]))))) : (max((3409832525U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 885134772U)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_17 = 2; i_17 < 19; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 3) 
        {
            {
                var_29 = ((/* implicit */unsigned long long int) (!((((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 7081662268154244858ULL)) || (((/* implicit */_Bool) 613920302U)))))))));
                arr_61 [i_18] [i_18] = ((/* implicit */signed char) ((var_0) <= (((((/* implicit */_Bool) ((var_11) << (((arr_10 [i_17] [i_17] [i_17] [i_17]) - (6921919130211708178ULL)))))) ? (-9223372036854775802LL) : (((/* implicit */long long int) 294305963U))))));
                arr_62 [i_17] [i_18] [i_17] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(-9223372036854775802LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2170205007245415936ULL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)27456))))) : (arr_56 [i_17] [i_18])))));
                arr_63 [i_18] = ((/* implicit */int) 8695849796825576595ULL);
            }
        } 
    } 
}
