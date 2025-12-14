/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105521
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
    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 1588859751867963574LL)) ? (((int) -76058501)) : (-2044741782))) : (((int) min((2044741804), (-2044741782))))));
    var_17 = ((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned short) -2733903050670472497LL)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0]))));
        var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2044741793)) ? (((/* implicit */int) (_Bool)1)) : (-2044741793)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) <= (((/* implicit */int) ((((var_13) ? (arr_1 [i_0]) : (((/* implicit */long long int) -2044741804)))) >= (((/* implicit */long long int) ((((/* implicit */int) (signed char)-12)) * (((/* implicit */int) var_13))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 1764192604)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((min((((/* implicit */int) (short)32767)), (-2044741788))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -2044741803)) && (((/* implicit */_Bool) var_10))))))), ((+(((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0])) <= (var_1)))))))))));
            var_21 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (2044741787))) != (var_8))));
        }
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */_Bool) (signed char)64)) ? (1764192593) : (((/* implicit */int) (unsigned char)12))))) + (-2044741795)));
            arr_11 [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned long long int) (~((-(2044741782))))));
            var_23 -= ((/* implicit */unsigned char) arr_7 [i_0]);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_17 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (min((arr_16 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]), (((/* implicit */long long int) arr_8 [i_0] [i_4])))) : (min((-8861900614386336980LL), (-4744543300732650444LL)))))) ? (min((((/* implicit */unsigned long long int) ((-4744543300732650444LL) < (var_9)))), (arr_9 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_14 [i_0])))))));
                        arr_18 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((int) arr_5 [i_2])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 2044741791))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)127)) : (2044741781)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */long long int) (((-(-2044741782))) << ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-128))) == (4294967295U))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) 2044741781)), (arr_7 [i_5]))) - (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_5]) : (var_2))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 2044741803))) ? (arr_27 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (short)-32767))))))));
        arr_29 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_6] [i_6])) >= (var_4)));
        arr_30 [i_6] = ((/* implicit */short) arr_7 [i_6]);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9 + 1]))) : (arr_13 [i_9 + 1] [i_8] [i_8])));
                    arr_37 [i_7] [i_7] [i_8] [i_9] = ((((/* implicit */int) arr_8 [i_9 - 1] [i_9 - 1])) == (((((/* implicit */_Bool) 2044741760)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_7] [i_7])) * (((/* implicit */int) var_13)))))));
        var_27 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_7]))));
        arr_38 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32749))))) ? (((/* implicit */long long int) arr_7 [i_7])) : (arr_15 [i_7] [i_7] [i_7] [i_7])));
        arr_39 [i_7] [i_7] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) << (((arr_12 [i_7] [i_7] [i_7] [i_7]) - (1335602622U)))));
    }
    var_28 |= ((((/* implicit */int) (short)32729)) >= (((/* implicit */int) (short)4951)));
}
