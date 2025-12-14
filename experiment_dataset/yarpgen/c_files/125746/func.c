/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125746
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
    var_12 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) var_6))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [(signed char)5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 8216403688840968325LL))))))))));
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) (-(var_7)))))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) var_11);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) (!(((/* implicit */_Bool) 268435455LL)))))));
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))));
                    arr_17 [i_3] [i_2] [(unsigned short)18] = ((/* implicit */long long int) (-(max((67106816), (((/* implicit */int) (unsigned short)0))))));
                    arr_18 [i_1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_3])))))));
                    arr_19 [i_3] [i_2] [i_2] [i_2] = min((var_6), (((/* implicit */short) ((((/* implicit */long long int) max((67106812), (((/* implicit */int) (signed char)100))))) == ((-(var_8)))))));
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */short) var_8);
        arr_21 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [(signed char)0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)13))))) ? (max((arr_7 [i_1]), (((/* implicit */long long int) var_9)))) : (var_1)));
        var_17 = ((/* implicit */short) 67106812);
    }
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        for (unsigned char i_7 = 1; i_7 < 7; i_7 += 3) 
        {
            {
                arr_28 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_18 |= ((/* implicit */unsigned long long int) arr_15 [(short)1] [21LL] [i_8] [i_6] [i_6] [i_7]);
                    arr_32 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_8);
                    arr_33 [i_7] [i_6] = ((/* implicit */signed char) var_1);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_38 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_6] [5U] [i_9])) : (((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    arr_39 [i_6] = ((/* implicit */unsigned int) ((arr_30 [i_6] [i_6] [i_6 - 2] [i_6]) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -67106816)) ? (-67106816) : (((/* implicit */int) (unsigned char)119))));
    var_20 = -67106803;
}
