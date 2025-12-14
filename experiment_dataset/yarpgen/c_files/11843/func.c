/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11843
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) max((var_0), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned int) min((6192706255237260523ULL), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_11)), (var_3))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) (short)(-32767 - 1));
    /* LoopSeq 2 */
    for (signed char i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        arr_6 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (min((((/* implicit */unsigned int) var_8)), (4294443008U))))), (((/* implicit */unsigned int) arr_5 [i_2 - 4]))));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_2 - 1]), (var_0)))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_2 + 1]))) : (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 3])))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned short)6])) ? ((~((-(((/* implicit */int) arr_5 [i_2 + 1])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19791))) < (((long long int) var_5)))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_11 [i_2] [i_3] [i_3] &= ((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_3] [i_2] [i_2])), ((~(((/* implicit */int) arr_5 [i_2 - 3]))))));
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) arr_10 [i_2 - 4] [i_2 - 2]))), ((-(1037861802U)))));
            var_22 = ((/* implicit */short) var_7);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(arr_10 [i_2 - 3] [i_2 + 1]))))));
            var_25 = ((/* implicit */_Bool) var_11);
            arr_14 [i_4] [i_4] [i_2] |= ((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4])) ? (arr_9 [i_2] [3U] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) 1340060680U)) || (((/* implicit */_Bool) arr_17 [i_2] [i_5])))))))))));
                        arr_25 [i_2] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_2 - 4])) ? (arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_6]) : (arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_2 + 3])))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_2 - 4] [i_2 - 4])) ? (arr_13 [i_5] [i_2 + 3] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2 - 4] [i_2 - 4])))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)47382)) + (((/* implicit */int) ((short) min((8679056683044285663ULL), (3597505380630483724ULL)))))));
            var_29 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) == (4294443008U))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_18 [i_2] [i_9] [i_2 + 2] [i_9])), (((((/* implicit */_Bool) (short)-30487)) ? (arr_13 [i_2 + 3] [i_2 - 4] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2 + 3] [i_2 - 4])))))));
                        var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4294443015U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 2]))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (3597505380630483724ULL))))), (max((((/* implicit */unsigned long long int) (signed char)50)), (arr_23 [i_8] [i_5])))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15653))))) : (((/* implicit */int) (short)11965))))) ? ((-(((/* implicit */int) arr_33 [i_9] [i_5] [i_5] [i_2 - 2] [i_2])))) : (((((/* implicit */int) (signed char)-127)) + (((((/* implicit */int) arr_19 [11ULL] [i_5] [i_5] [i_5])) + (((/* implicit */int) var_8))))))));
                            var_33 = ((/* implicit */unsigned int) arr_29 [i_5] [i_5] [i_5]);
                            var_34 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_2 - 2] [i_8] [i_10] [i_10])) ? (arr_24 [i_2 - 3] [i_2] [i_2] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2 + 2] [i_2 + 2] [2ULL] [i_8] [i_8])))))), (14849238693079067892ULL));
                            var_35 = min((((/* implicit */unsigned int) (unsigned short)7)), (1705757518U));
                        }
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 - 4] [i_2 - 4] [i_2]))))), (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17983)))))));
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [2ULL] [2ULL])) ? (min((((/* implicit */unsigned int) arr_37 [i_11])), (524288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9767687390665265930ULL)) && (((/* implicit */_Bool) arr_37 [i_11]))))))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (6898997170728718850ULL)))) ? ((-(17040559472020467128ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_11])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
        var_39 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_36 [i_11] [(unsigned short)13])) + (((/* implicit */int) (signed char)-88))))));
    }
    var_40 = var_14;
}
