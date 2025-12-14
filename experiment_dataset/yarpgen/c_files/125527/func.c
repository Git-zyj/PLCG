/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125527
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1])), (arr_1 [i_0] [i_1]))))) / (((arr_2 [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12122))) : (var_8)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((min((-4044880357235277787LL), (((/* implicit */long long int) (unsigned short)896)))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((((/* implicit */unsigned long long int) -1392410524404949242LL)) <= (arr_5 [i_2] [i_0] [i_0] [i_3 + 2])))) & (((/* implicit */int) var_6))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) ^ (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 + 2]) : (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((signed char) var_0));
    var_23 &= ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)37326)))) <= (min((((/* implicit */unsigned long long int) arr_13 [i_4])), (var_5))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_12)))));
                        arr_21 [(signed char)1] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_7] [i_7 - 1])) ? (arr_16 [i_4] [i_4] [i_4] [i_7 - 1]) : (arr_16 [i_4] [i_5] [i_7] [i_7 - 1])))) ? (min((arr_16 [i_4] [i_4] [i_4] [i_7 - 1]), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_12 [i_4]))))))));
                            arr_25 [i_4] [i_4] [(unsigned char)1] [(unsigned char)1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((204570222U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53413)))))) - ((~(4044880357235277786LL))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_4] [i_4])))))));
                            var_25 = ((/* implicit */unsigned long long int) 2947396979302041912LL);
                            arr_26 [i_4] [i_8] [i_6] [i_4] [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_7 + 2] [i_7 - 1] [i_4] [17LL])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_13 [i_5])))) : (((/* implicit */int) var_11))))));
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) (unsigned short)59903)) ? (((/* implicit */long long int) 4090397061U)) : (-2947396979302041912LL)))));
                        arr_27 [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_13 [i_7])) : (((/* implicit */int) var_12))))), (var_16)))) ? (2947396979302041896LL) : (((/* implicit */long long int) arr_18 [i_4]))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_5]))));
                        arr_31 [i_4] [i_4] [i_4] [(_Bool)1] [9LL] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) 4090397055U)) ? (((/* implicit */long long int) arr_18 [i_4])) : (arr_17 [i_4] [i_4] [i_6] [2ULL]))), (((/* implicit */long long int) ((arr_16 [i_4] [i_6] [i_5] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))))), (min((arr_17 [i_5] [i_9 - 1] [i_5] [i_9 - 1]), (var_15)))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (5722607057409030215ULL) : (0ULL)))) ? (((/* implicit */int) (unsigned short)894)) : ((+(((/* implicit */int) var_0))))))));
                        var_29 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4090397074U)))) : (min((((/* implicit */unsigned long long int) var_9)), (arr_33 [i_5]))))));
                        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_6] [i_10 + 1] [12ULL] [i_10 - 1] [i_10 - 1])) ? (arr_16 [i_6] [i_10 + 1] [i_10 + 2] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6] [i_10 + 1] [i_6] [i_10 + 2] [i_10 + 1])))))) ? ((~(arr_16 [i_6] [i_10 + 2] [(unsigned char)16] [i_10 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_32 [i_6] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 1]), (arr_32 [i_6] [i_10 + 2] [i_10] [i_10 + 1] [i_10 - 1]))))));
                    }
                    var_31 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_5] [(unsigned char)9])) && (var_9))))) | (((long long int) var_9)))));
                }
            } 
        } 
    } 
}
