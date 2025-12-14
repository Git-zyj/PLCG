/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141317
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((arr_1 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4794775142760530448LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (max((arr_1 [i_0 + 4]), (arr_1 [i_0])))))));
        var_14 = ((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [0LL]))) < (var_10))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) (short)4967))))))) ^ ((~(1542193989514252779LL))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_3 [i_1]))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_2 [i_1 - 1]))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) var_6);
                        var_18 = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)32704)) << (((/* implicit */int) arr_10 [i_1])))) < (((/* implicit */int) arr_0 [i_1 - 1])))) ? (((/* implicit */long long int) 1663060091U)) : (-4794775142760530474LL)));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) % (var_3)))))) && (((/* implicit */_Bool) arr_6 [13ULL])))))));
        }
        for (signed char i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
        {
            arr_17 [i_1] = ((/* implicit */_Bool) (unsigned char)198);
            arr_18 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) (signed char)108))))));
            var_20 |= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_4 [8ULL])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_0 [8ULL])))))))));
        }
        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (max((min((((/* implicit */unsigned int) 800974569)), (arr_13 [i_1 + 1] [i_1] [i_6 + 2] [i_6]))), (((/* implicit */unsigned int) (~(-1789486808)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_6] [i_6] [i_6])) >> (((var_9) - (562853756U)))))) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1])) : (((((/* implicit */int) arr_20 [i_1] [i_6])) << (((((/* implicit */int) arr_11 [i_1] [i_1] [10LL])) - (10162))))))))));
            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)66))))))) ? ((((-(((/* implicit */int) arr_16 [i_1] [i_1])))) + (((arr_7 [i_1] [i_1] [i_6]) - (((/* implicit */int) arr_0 [i_6])))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 21LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_6])))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_6] [i_6 + 2] [i_6])) ? (((/* implicit */int) (short)-5724)) : (arr_7 [i_1] [i_1] [i_1 - 1])))))));
            var_22 = ((/* implicit */unsigned long long int) min(((-(arr_19 [i_1]))), (((/* implicit */long long int) min((arr_9 [(unsigned char)10] [(unsigned char)11] [(unsigned char)10]), (((/* implicit */unsigned short) var_0)))))));
        }
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (~((+(((long long int) arr_22 [i_7]))))));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_22 [i_7])))))))));
        var_25 = ((((/* implicit */_Bool) (~(var_8)))) ? (((((((/* implicit */_Bool) arr_24 [i_7])) || (((/* implicit */_Bool) arr_22 [i_7])))) ? (((/* implicit */int) ((unsigned short) -1281249595238393408LL))) : (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_7])))))) : ((-(((/* implicit */int) arr_22 [i_7])))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 4) 
            {
                {
                    var_26 *= ((/* implicit */unsigned long long int) (short)31802);
                    var_27 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_9]))) : (arr_25 [i_8])))) ? (((((/* implicit */_Bool) 1874549873U)) ? (var_8) : (((/* implicit */unsigned int) -1158517677)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_10 = 2; i_10 < 23; i_10 += 3) 
    {
        var_28 &= ((((((((/* implicit */_Bool) arr_34 [(_Bool)1])) ? (arr_34 [6LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_10 + 2]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [8U] [i_10] [i_10 + 2]))))) % (min((min((((/* implicit */long long int) var_9)), (arr_25 [0LL]))), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10 - 2])) / (((/* implicit */int) arr_33 [20LL] [i_10]))))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_10]))) >= (arr_34 [(_Bool)1]))))))), (arr_24 [i_10 - 2]))))));
    }
}
