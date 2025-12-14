/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127307
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
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_0 - 1]);
                    arr_8 [i_0] [(unsigned short)7] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -7125409591038893003LL)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])))) ? (max((arr_2 [i_0] [i_0 + 1] [i_1 - 3]), (arr_2 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) arr_0 [i_2])) : (((long long int) (unsigned char)76))))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) (+((-(min((((/* implicit */unsigned long long int) (unsigned char)189)), (4872222192657816091ULL)))))));
        arr_9 [i_0] = ((/* implicit */unsigned short) (-(((arr_5 [i_0 - 2] [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (1256711507U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179)))))) : ((-(137438953471ULL)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) ((_Bool) 568128758U));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3]))))) : (((((/* implicit */int) arr_4 [i_3] [i_3])) * (((/* implicit */int) arr_4 [i_3] [i_3]))))));
        var_14 &= ((/* implicit */signed char) ((var_6) % (((/* implicit */long long int) 645528119U))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_15 = (+(((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)77))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) & (3726838537U))))));
        arr_15 [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (!(arr_5 [i_4] [i_4] [i_4] [i_4])))))))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((arr_18 [i_5] [6U]) * (arr_3 [i_5] [21U]))) / (2001070719U)))) / ((-(arr_2 [i_5 + 2] [i_5 - 1] [i_5 + 1])))));
        var_17 = ((/* implicit */short) (+(255U)));
        arr_21 [i_5 + 3] [i_5] = ((/* implicit */_Bool) (~(arr_6 [i_5 + 3] [i_5 + 3] [i_5])));
    }
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            arr_27 [i_6] [(_Bool)1] = (-(var_9));
            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((((/* implicit */unsigned int) arr_23 [i_7])), (2293896604U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))))))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_4 [i_6] [22U]);
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */long long int) 2293896588U)), ((+((-(var_7))))))))));
                var_21 = ((/* implicit */int) ((signed char) min(((+(((/* implicit */int) (unsigned char)77)))), (((/* implicit */int) arr_10 [i_8] [i_9])))));
                arr_33 [i_6] [i_8] [i_9] = (short)(-32767 - 1);
                var_22 -= ((/* implicit */_Bool) 4294967295U);
                var_23 ^= ((/* implicit */signed char) max((((/* implicit */long long int) arr_0 [i_6])), (((((/* implicit */_Bool) arr_4 [i_6] [i_9])) ? (arr_2 [i_6] [i_8] [i_9]) : (arr_2 [i_6] [i_8] [i_9])))));
            }
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
        }
        arr_34 [i_6] [i_6] = ((/* implicit */int) min((max((arr_14 [i_6]), (((/* implicit */long long int) arr_29 [4U])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6])) || (((/* implicit */_Bool) (unsigned char)78)))))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3649439177U))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 1; i_10 < 9; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                        {
                            arr_47 [i_6] [10U] [i_11] [10U] [10U] = ((/* implicit */unsigned char) ((int) (+((+(((/* implicit */int) (_Bool)1)))))));
                            var_26 = ((/* implicit */int) (-(max((arr_16 [0ULL]), (((/* implicit */unsigned long long int) arr_32 [i_6] [i_10] [10U]))))));
                        }
                        for (int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_14 [i_10 + 2]))) : (((/* implicit */long long int) (~((-2147483647 - 1)))))))) || (((/* implicit */_Bool) ((unsigned int) arr_4 [i_10 - 1] [i_12 - 1])))));
                            var_28 = ((/* implicit */int) ((_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                        {
                            arr_55 [i_6] [i_6] [i_10 + 2] [i_10] [i_11] [i_12 + 1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 3003395995U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_10 - 1] [20U]))))) : (((/* implicit */int) ((signed char) arr_53 [i_12 - 1] [i_10] [i_11] [i_10 + 1])))));
                            arr_56 [0U] [i_11] [i_12 - 1] [6U] = ((/* implicit */short) ((unsigned short) ((unsigned char) (_Bool)0)));
                            var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (3689112182U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10 - 1] [i_10 + 1] [i_11] [i_10 - 1] [i_12 + 1])))))));
                        }
                        var_30 |= ((/* implicit */unsigned char) arr_35 [i_10] [i_11]);
                        var_31 = ((/* implicit */unsigned int) arr_30 [(signed char)6] [i_10]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */_Bool) arr_18 [i_16] [i_17])) ? (2293896588U) : (2001070703U)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        var_33 -= 4294967286U;
                        var_34 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) % (min((arr_6 [i_16] [i_17] [i_16]), (((/* implicit */unsigned long long int) 4230797311U)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((9U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_16])))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_20 = 4; i_20 < 17; i_20 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) (-(var_6)));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        for (unsigned int i_21 = 1; i_21 < 16; i_21 += 1) 
                        {
                            var_37 += ((/* implicit */long long int) 4096832107U);
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_18 - 1] [i_19 + 3] [i_21 + 1])) ? (arr_63 [i_18 - 1] [i_19 + 1] [i_21 - 1]) : (arr_63 [i_18 - 1] [i_19 + 2] [i_21 + 3])))))))));
                            arr_71 [i_16] [i_17] [i_18] [i_19] [i_16] [i_16] [i_21 + 1] = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        var_39 = ((/* implicit */unsigned int) min((var_39), (var_11)));
                    }
                    for (unsigned int i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        arr_76 [i_16] [i_16] [i_17] [i_17] [i_16] [i_17] = ((/* implicit */_Bool) arr_70 [i_16] [i_17] [i_18 - 1] [i_16] [i_18] [i_18]);
                        var_40 = ((/* implicit */signed char) -1);
                        var_41 &= var_2;
                        arr_77 [i_16] [i_17] [i_17] |= ((/* implicit */signed char) ((((unsigned long long int) arr_59 [i_18 - 1] [i_18 - 1] [i_18 - 1])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2293896604U))))))));
                    }
                    for (long long int i_23 = 0; i_23 < 19; i_23 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) (_Bool)0);
                        var_43 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_13 [i_16])))), (((arr_16 [i_17]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_17] [i_17] [i_17] [i_17])))));
                    }
                    var_44 |= (((-(min((2001070698U), (((/* implicit */unsigned int) (-2147483647 - 1))))))) > (((arr_70 [7U] [i_17] [i_17] [i_18 - 1] [i_16] [i_17]) ^ (var_11))));
                }
            } 
        } 
        var_45 -= min((((min((0U), (64169984U))) + (max((((/* implicit */unsigned int) arr_19 [i_16])), (var_11))))), (((/* implicit */unsigned int) ((short) arr_75 [i_16] [i_16] [i_16] [i_16]))));
        arr_80 [i_16] |= ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_16] [13U] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) <= (((long long int) (~(((/* implicit */int) var_1))))));
    }
}
