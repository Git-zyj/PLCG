/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188289
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_5)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)12))))))) ? (((((/* implicit */_Bool) ((1099494850560LL) - (((/* implicit */long long int) -1073741824))))) ? (var_15) : (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_5)), (var_0))) >= (((/* implicit */long long int) ((unsigned int) var_4)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_2 + 1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)243))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_2))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0 - 1] &= ((((/* implicit */int) arr_10 [i_2 + 1] [i_4] [i_4])) >= (arr_0 [i_0 + 3]));
                            var_17 ^= ((/* implicit */unsigned int) ((int) 16744448));
                            arr_14 [i_0] [i_0] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_0 + 3] [i_2 - 1] [i_2 - 1] [i_4])) - (((((/* implicit */_Bool) (short)-2482)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (var_6)))));
                            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1411528438)) || (((/* implicit */_Bool) -1584883673))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_19 [i_5] [i_5] [i_3] [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                            arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1 - 1]);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(var_14))))));
                        }
                        var_19 = ((/* implicit */unsigned char) 126100789566373888ULL);
                        arr_21 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */int) (unsigned char)12)) : (-790461088)));
                        var_20 &= ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) 1073741848)));
                    }
                    arr_22 [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_1] [i_1]))))) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_26 [i_6] [i_6] [i_6 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) 1584883672)) ? (arr_1 [i_6 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_14) : (-1073741824))))));
            /* LoopNest 2 */
            for (long long int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        arr_32 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 + 3]))) : (var_6)));
                        arr_33 [i_7] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)29));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-1073741799)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1073741809)) : (var_0)))) : (var_10)));
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    for (int i_11 = 4; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_41 [i_11] [i_9] [i_9 - 1] [i_9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (var_14) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_38 [i_9] [i_6] [i_9]))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (unsigned char)214)) ? (arr_34 [i_10] [i_6] [i_0]) : (((((/* implicit */_Bool) 15111669201056208713ULL)) ? (arr_34 [i_6] [i_9 + 1] [i_9 + 1]) : (((/* implicit */long long int) 1073741829))))))));
                            arr_42 [i_9] [i_9] [i_9] [i_10] [i_9] = ((unsigned long long int) (-(-1099494850561LL)));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                var_23 = ((/* implicit */_Bool) var_12);
                arr_45 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                arr_46 [i_0] [i_6 + 1] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26718)) ? (var_14) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) var_11))));
            }
        }
        for (unsigned char i_13 = 2; i_13 < 11; i_13 += 4) /* same iter space */
        {
            arr_49 [i_13] [i_13] = (unsigned char)245;
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_13 - 1] [i_13] [i_13])))))));
            arr_50 [i_13] = ((/* implicit */unsigned long long int) ((int) arr_39 [i_0] [i_13] [i_0 + 1] [i_0] [i_13 + 3]));
        }
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_0))))) || (((/* implicit */_Bool) ((unsigned long long int) var_2)))));
}
