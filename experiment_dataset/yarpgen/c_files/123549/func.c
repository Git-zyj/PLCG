/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123549
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
    var_11 ^= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)251))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */unsigned int) (short)-38)), (min((((/* implicit */unsigned int) (short)32758)), (1073741822U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(var_7)))))))))));
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)20)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9))))))))));
                }
            } 
        } 
        var_14 |= (+(((/* implicit */int) ((signed char) (short)32753))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30))) : (var_8))))) - (((arr_3 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (arr_1 [i_0])))))))))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (((((-(arr_1 [i_0]))) <= (max((((/* implicit */long long int) var_4)), (var_3))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) 2147483647))));
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-33)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_4 - 2]))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(17075753959022511436ULL)))));
                    var_16 *= ((/* implicit */_Bool) ((((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) min((((long long int) var_3)), (((/* implicit */long long int) arr_10 [i_4] [i_4])))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)35)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) : ((+(max((((/* implicit */unsigned long long int) (short)32739)), (8121862539055916587ULL)))))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
        var_19 = ((/* implicit */unsigned short) arr_18 [i_5]);
        /* LoopSeq 3 */
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            var_20 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_5 - 1])) ? (arr_17 [i_6 - 1] [i_5 - 1]) : (arr_17 [i_6 + 1] [i_5 - 2])))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_21 ^= min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (max((var_0), (var_10))))), (((/* implicit */long long int) min((arr_23 [i_5 - 2] [i_9] [i_5]), (var_4)))));
                            arr_28 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))), (((/* implicit */unsigned long long int) ((long long int) max((var_0), (((/* implicit */long long int) var_7))))))));
                            arr_29 [i_5] [i_6] [i_7] [i_5] [i_9] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_0)) - (arr_17 [i_6] [i_9]))), (((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5]))))) ? (((/* implicit */unsigned int) arr_20 [i_5] [i_6] [i_9])) : ((+(4294967295U)))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max(((+(arr_24 [i_5] [i_5] [i_9] [i_5 - 2] [i_5 - 2] [i_7 - 1]))), (((/* implicit */unsigned int) ((_Bool) ((_Bool) var_6)))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_19 [i_5])), (var_8))) == (arr_18 [i_5 - 1])))) : (((/* implicit */int) ((_Bool) arr_21 [i_6] [i_5 - 1] [i_6 - 2])))));
        }
        for (long long int i_10 = 4; i_10 < 10; i_10 += 3) 
        {
            arr_32 [i_10] [i_10] [i_10] = ((/* implicit */short) arr_25 [i_5 - 2] [i_5] [i_5] [i_5] [i_5 + 1]);
            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | ((~(arr_30 [i_5 - 1])))));
        }
        for (short i_11 = 2; i_11 < 10; i_11 += 3) 
        {
            arr_35 [i_11] [i_11] = ((/* implicit */short) var_1);
            var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) var_2))))))) != (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))), (arr_16 [i_5 - 1] [i_11 - 2]))))));
        }
    }
    for (long long int i_12 = 1; i_12 < 12; i_12 += 4) 
    {
        var_26 -= ((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) max(((short)32746), (((/* implicit */short) (unsigned char)171)))))));
        var_27 ^= min((((/* implicit */long long int) ((_Bool) arr_36 [i_12 - 1]))), ((+(max((var_10), (((/* implicit */long long int) var_7)))))));
        var_28 ^= ((/* implicit */short) var_1);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        arr_40 [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)2090)), (var_1)))) ? (((int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_38 [i_13])) == (var_8)))))))));
        var_29 += ((/* implicit */unsigned long long int) var_6);
        var_30 = ((/* implicit */unsigned int) max((var_30), (((((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1984)) : (((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)99)))))))) : (min((((/* implicit */unsigned int) ((var_8) >= (var_8)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) - (var_7)))))))));
    }
}
