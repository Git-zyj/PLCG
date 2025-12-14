/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132163
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
    var_11 = (+(max((min((((/* implicit */long long int) var_10)), (-4038957280895285633LL))), (((/* implicit */long long int) max((var_6), (var_10)))))));
    var_12 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) - (((/* implicit */int) var_1))))) + ((~(3646026738U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) ((unsigned int) arr_3 [i_3] [i_1 - 1] [i_1 + 3]));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((((long long int) var_8)) + (((/* implicit */long long int) arr_8 [i_0] [i_1 + 2] [i_2] [i_5]))))));
                        var_17 *= ((/* implicit */unsigned long long int) var_0);
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1011755126)) ? (((/* implicit */int) arr_15 [18] [18] [i_2] [i_1 + 3] [i_5])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (unsigned char)146)))))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_2])))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_0] [i_6] [i_0] [i_6])))));
                            var_21 &= ((/* implicit */unsigned long long int) ((4144758501U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [6LL] [i_1 + 2] [i_2] [6LL] [i_1 + 2] [i_1 + 2] [i_2])))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((((/* implicit */int) arr_24 [i_1] [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) % (((/* implicit */int) arr_24 [i_1] [i_0] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 3])));
                            var_23 += ((/* implicit */unsigned char) (+(arr_8 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_2] [i_2] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_2] [i_0] [i_0] [i_8] [i_2]))) : (1306388979554475801LL)));
                            arr_29 [i_0] [6ULL] [i_1] [i_1] [i_2] [(unsigned char)12] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */long long int) 531925411U))))) ? (((/* implicit */int) arr_26 [i_5] [i_1 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)244)))))));
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */long long int) var_6)) % (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_8])) ? (3528338872U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */int) (~(((long long int) var_0))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_5))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned long long int) (-(145226368U)));
                }
                var_29 += ((/* implicit */short) (((~(((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [(unsigned char)8] [i_1] [(unsigned char)8])) : (((((/* implicit */int) (unsigned char)109)) & (((/* implicit */int) arr_4 [4ULL] [i_1]))))))));
                arr_32 [i_0] [i_0] = ((max((((/* implicit */long long int) 546257128U)), (((((/* implicit */long long int) 2851158693U)) / (-4192460753016494106LL))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0])) && (((/* implicit */_Bool) var_6)))))));
            }
        } 
    } 
    var_30 *= ((/* implicit */short) min(((+(((/* implicit */int) ((unsigned short) var_0))))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (1376084301U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0LL]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_22 [i_10 - 1] [i_10]))))));
        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 189760709U)))));
    }
}
