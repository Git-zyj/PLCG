/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101496
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_2])), (arr_0 [i_0]))))))) ? (arr_2 [i_1] [i_1]) : ((+(arr_2 [i_0 + 1] [i_0 - 2])))));
                        var_17 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((0ULL) | (16179848675032308090ULL)))))) - (((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) % (arr_8 [i_0] [i_0] [0LL] [i_2] [i_3]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1] [i_0])))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_12 [i_0] [14ULL] [14ULL] = ((/* implicit */short) ((((int) max((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_1] [11LL])))) * (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_2]))) || (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1])))))));
                        arr_13 [i_0] [i_0] [(unsigned char)2] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_0 + 2] [i_4] [12U]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */int) arr_3 [i_0] [i_4] [i_2])) - (((/* implicit */int) (!(var_3)))))) : ((+(((/* implicit */int) var_7))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_1] [i_0 + 1])) : ((~(((/* implicit */int) arr_3 [i_0] [10LL] [i_2]))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)224)))) || ((!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_5 - 1])) <= (((/* implicit */int) arr_4 [i_0 - 3] [i_5 - 1])))))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_16 [i_4] [i_4] [i_2] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (max((424464201016339508LL), (((/* implicit */long long int) 2065732225U))))))) || ((!(((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 + 2] [i_5 - 1] [i_5] [i_5 - 1])))));
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) arr_7 [i_4] [i_0 - 3] [i_5 - 1]);
                        }
                        for (int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_21 [i_2])) * (((/* implicit */int) arr_5 [i_0] [i_2] [i_4] [i_6]))))))) ? ((+((~(((/* implicit */int) arr_4 [i_2] [(unsigned char)11])))))) : (((((/* implicit */_Bool) (-(arr_0 [i_0 + 3])))) ? (((/* implicit */int) (_Bool)0)) : (((arr_11 [i_0] [i_1] [i_2] [(short)0] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [8LL] [i_2])) : (((/* implicit */int) (unsigned char)224))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6] [6U] [i_6] [i_6])) * (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_6] [5ULL] [i_2] [13U] [i_0]))))))) : (min((arr_10 [i_0 + 1] [(short)5] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0])) <= (((/* implicit */int) (_Bool)1)))))))));
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-12272)) ? (((/* implicit */int) arr_14 [4U] [i_1] [i_4])) : (815535206)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))) : (((/* implicit */int) var_15))));
                        }
                    }
                    var_22 -= ((/* implicit */signed char) var_13);
                }
                for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    var_23 = (-((~(((/* implicit */int) arr_4 [i_7 + 3] [i_0 + 1])))));
                    var_24 = 1080061174344773316LL;
                    arr_25 [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) arr_11 [i_0] [i_7] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) * (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)94)))))));
                                arr_32 [i_0] [i_0 - 2] [i_7] [i_0] [9] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((2340931788094723178LL), (((/* implicit */long long int) var_2)))))))), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 2])));
                                var_26 = ((/* implicit */unsigned char) var_15);
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_14)))))) * (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_10])) ? (((/* implicit */int) arr_15 [i_1] [i_0 + 1] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))));
                    arr_35 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            for (int i_13 = 3; i_13 < 19; i_13 += 4) 
            {
                {
                    var_28 -= ((/* implicit */unsigned short) arr_44 [i_11] [i_12] [i_11] [i_12]);
                    arr_47 [i_11] [i_12] [i_11] = ((/* implicit */_Bool) arr_44 [i_11] [5LL] [i_11] [i_13 - 3]);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(signed char)4])) ? (arr_37 [i_13 - 2]) : (arr_37 [i_11])))) ? (min((arr_37 [7U]), (((/* implicit */unsigned int) arr_40 [i_11] [i_11])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_40 [i_11] [i_13 - 1])) : (((/* implicit */int) arr_40 [i_11] [i_12])))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) 1152921504606846976LL);
}
