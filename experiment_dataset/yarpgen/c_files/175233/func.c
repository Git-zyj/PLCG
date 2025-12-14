/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175233
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
    var_14 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))))))));
    var_15 = ((/* implicit */signed char) ((((((var_10) - (var_7))) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned short) max(((unsigned char)112), ((unsigned char)131))));
                    arr_8 [i_2] [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_4) && (((/* implicit */_Bool) ((unsigned long long int) var_3)))))) != (((int) var_4))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((long long int) var_11)))) >= (max((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) var_0))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)59))))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */long long int) ((((int) ((unsigned char) var_0))) >= (var_0)));
                            var_18 = ((/* implicit */unsigned char) var_6);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29852)) >= (((/* implicit */int) (_Bool)1))));
                            arr_15 [i_2] [i_1] [i_2 + 1] [i_2] [i_3] [i_2 + 1] = ((/* implicit */unsigned short) ((unsigned int) (~(var_0))));
                            var_20 = ((/* implicit */_Bool) var_11);
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) ((int) min((max((var_10), (((/* implicit */long long int) var_12)))), (max((((/* implicit */long long int) var_12)), (68719345664LL))))));
                            var_22 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((273071706U), (((/* implicit */unsigned int) (unsigned char)204)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(var_4))))))))));
                            arr_18 [i_2] [i_2] [i_2] [i_1] [i_2] = (!(((/* implicit */_Bool) ((unsigned int) var_13))));
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((((long long int) var_12)) ^ (max((var_10), (((/* implicit */long long int) var_12))))));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_3] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) var_4))))))))) & (((var_5) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_10))))))));
                            var_23 = ((/* implicit */long long int) min((min((var_9), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                            arr_25 [i_0] [i_2] [i_2] [i_3] [19ULL] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_4))) ^ (((/* implicit */int) max(((short)32764), (((/* implicit */short) (signed char)8)))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_3)) >> (((var_8) - (2876253134694906398LL)))))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_9) - (((/* implicit */unsigned long long int) var_10)))))) >= (((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((unsigned int) var_13))))))));
                    }
                    for (signed char i_7 = 1; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_10)))));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29069))) >= (1380526286410711325ULL)))), (((unsigned int) ((unsigned char) var_5)))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_8))));
                            var_29 = ((/* implicit */unsigned int) var_1);
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */short) ((signed char) var_1));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_30 = ((short) ((signed char) var_3));
                            arr_36 [i_0] [2ULL] [i_2] [i_2] [i_7] [i_7] [i_2] = ((/* implicit */unsigned short) ((signed char) var_7));
                            var_31 *= ((/* implicit */unsigned int) ((int) ((unsigned int) var_5)));
                        }
                        arr_37 [i_2] [3] [i_1] [i_2] = ((/* implicit */unsigned int) min((((max((var_8), (((/* implicit */long long int) var_1)))) & (var_10))), (((/* implicit */long long int) var_13))));
                    }
                    for (signed char i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        arr_41 [i_2] [i_0] [i_1] [i_0] [i_2] [i_10] = ((/* implicit */unsigned short) var_7);
                        var_32 = ((/* implicit */unsigned char) ((_Bool) 6105141404623582105LL));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_13))) != (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_2)))))));
                        var_34 *= ((/* implicit */long long int) ((((unsigned long long int) ((unsigned char) var_12))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                        var_35 = ((/* implicit */_Bool) (~(((var_9) >> (((max((var_10), (((/* implicit */long long int) var_12)))) - (8870055623876919484LL)))))));
                    }
                }
            } 
        } 
    } 
}
