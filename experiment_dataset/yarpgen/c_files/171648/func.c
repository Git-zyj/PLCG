/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171648
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1919759706U)))));
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) var_7)) : (588348770154443248ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0] [i_2 + 1] [i_2 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_2 + 1] [i_2 - 1])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)15);
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) & (2375207590U)))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (arr_10 [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */int) (!(var_12))))))) : (((((/* implicit */_Bool) 2375207590U)) ? (1919759705U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11789)))))));
                                arr_21 [i_6] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0 + 1] [i_5 + 1] [i_0 - 1] [i_0 + 1])) * (((/* implicit */int) arr_7 [i_0]))))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5 - 1] [i_5 + 4] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_5 + 3] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))));
                                arr_22 [i_0 - 2] [i_0 - 2] [i_1] [i_0] [i_5] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2375207590U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) 2375207590U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26373))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_8))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)46)))))));
                                arr_23 [16LL] [i_5] [i_4] [i_1] [i_0 - 2] [i_0] [16LL] &= ((/* implicit */signed char) (((-(5606916676735899300LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61613)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_4 + 1] [i_4 + 1] [i_5 + 1] [i_5 + 4] [i_6])) : (((/* implicit */int) arr_3 [(short)24] [(short)24])))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [24U] [i_0 - 2] [i_4 + 1] [i_4 + 1])))) ? (max((144115050636902400ULL), (((/* implicit */unsigned long long int) 182669977)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7650818436684534938LL)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (signed char)9)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_4] [i_4] [i_7 + 4] = (((+(min((((/* implicit */long long int) var_9)), (arr_17 [i_7] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_1] [i_4 - 1] [i_7 + 2] [i_7 + 2]))))));
                        arr_27 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned short) (~(max((1919759706U), (((/* implicit */unsigned int) (short)28452))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)39)) >> (((2147483647) - (2147483626)))));
                    }
                    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_33 [i_9] [8] [i_1] [8] [i_0] |= ((/* implicit */int) (unsigned short)23230);
                        arr_34 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_4] [i_0])))));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_40 [i_0] [i_0] [8LL] |= ((/* implicit */_Bool) min((max((arr_17 [i_4 - 1] [i_1] [(short)22] [i_1] [(short)22] [i_0] [i_0]), (arr_17 [i_4 - 1] [i_1] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0]))), (((/* implicit */long long int) var_0))));
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_18 [i_10] [i_10] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) max((-4575725129065939961LL), (((/* implicit */long long int) arr_24 [i_10] [i_4 + 1] [i_1] [i_0]))))) : (arr_2 [i_0])));
                    }
                    arr_41 [i_0] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_5))))))));
                }
                for (long long int i_11 = 2; i_11 < 23; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                arr_50 [i_0] [i_0] [i_11 - 1] [i_13] = ((/* implicit */unsigned char) arr_10 [i_11 + 1] [i_1] [i_1] [i_1]);
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((arr_30 [(short)0]) / (arr_30 [(signed char)14]))))))));
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) > (((0LL) - (((/* implicit */long long int) 1919759706U))))));
                                var_22 = ((((2478482956613678497LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24687))))) << (((826737277U) - (826737274U))));
                            }
                        } 
                    } 
                    arr_51 [(unsigned short)12] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) arr_20 [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */int) arr_20 [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 1])) ^ ((-2147483647 - 1))))));
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) 4095U)), (-5606916676735899301LL)));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11 + 1] [i_11 - 1] [i_11 - 2] [i_0 - 1])) ? (arr_10 [i_11 + 1] [i_11] [i_11 - 2] [i_0 - 1]) : (((/* implicit */int) var_10))))) ? ((~(1919759705U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_11] [i_11] [i_1] [i_0])))));
                }
                arr_52 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) var_8);
                    var_26 = ((/* implicit */short) var_12);
                    var_27 -= ((/* implicit */long long int) var_12);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) var_1);
    var_29 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (744184928U)));
}
