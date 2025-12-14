/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114664
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 *= ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    var_13 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_1 + 2] [i_2]) : (-5509392416603445883LL)))) ? ((-(-1544789618374544760LL))) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_1))))))));
                    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 1] [i_2 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1] [i_2 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_2 + 1] [i_2 - 1])))))));
                }
            } 
        } 
        var_15 *= ((/* implicit */unsigned long long int) arr_5 [i_0]);
        var_16 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : (var_4)))), (min((((/* implicit */unsigned long long int) var_3)), (var_7)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (unsigned short)96)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((signed char) arr_9 [i_3]))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] [i_4] [2LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((+(arr_16 [i_4] [i_4] [i_3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) / (min((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (9136534342079089531ULL)))));
                    var_18 -= ((/* implicit */unsigned short) (+(min((9310209731630462072ULL), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_4] [i_3]))))));
                    var_19 = ((short) ((((/* implicit */_Bool) 5509392416603445882LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11434))) : (arr_16 [i_3] [i_4] [i_5]))) : ((-(arr_16 [i_3] [i_4] [i_5])))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_4] [2LL] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)10] [i_4] [i_5] [i_6]))) : (var_6)));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) min(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 62594966)) + (arr_23 [i_3] [i_4] [i_6] [i_7])))))))));
                            arr_25 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_24 [9LL] [i_6] [i_6] [i_5] [i_4] [i_4] [i_3])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5509392416603445882LL)) ? (((/* implicit */int) (short)17608)) : (((/* implicit */int) (signed char)21))))) ? ((((_Bool)1) ? (arr_20 [i_4] [i_4] [i_5] [i_6] [i_7]) : (1932631078876357271LL))) : (((long long int) arr_17 [(unsigned char)15] [(unsigned char)15] [i_5]))))));
                        }
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3] [14ULL] [i_3] [i_3]))));
                            arr_30 [i_8] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_12 [i_8] [i_4]))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [i_4]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_3] [i_4] [i_5] [i_3] [i_8] [i_8] [i_3]))))) : (-2150401011224427753LL)));
                        }
                        arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                        var_22 -= ((/* implicit */_Bool) (-((+((+(((/* implicit */int) arr_22 [i_3] [i_3]))))))));
                        var_23 -= ((/* implicit */signed char) ((unsigned long long int) min((0ULL), (((/* implicit */unsigned long long int) (signed char)82)))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [i_4] [i_5] [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_3])) % (422582654))) % (((/* implicit */int) ((unsigned char) arr_15 [i_3] [i_4] [i_5] [i_4])))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_38 [7LL] [i_4] = ((/* implicit */signed char) min((((long long int) arr_19 [i_9] [i_4] [i_5] [i_9])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_39 [i_4] [1ULL] [i_4] [i_9] [i_10 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_5] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (arr_23 [i_10] [5ULL] [i_5] [5ULL])))) ? (min((var_10), (arr_23 [i_3] [i_3] [i_3] [i_3]))) : (((unsigned long long int) arr_23 [i_9] [i_4] [i_10] [i_9]))));
                            var_24 = ((/* implicit */long long int) ((short) var_6));
                        }
                        var_25 = ((/* implicit */_Bool) ((unsigned long long int) 5509392416603445883LL));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 2; i_11 < 15; i_11 += 4) 
                        {
                            arr_43 [i_3] [i_4] [i_5] [i_3] [i_11] = ((/* implicit */signed char) ((var_4) + (arr_29 [i_3] [i_11 + 1] [i_5] [i_9] [(signed char)2])));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) (short)17608)) % (((/* implicit */int) arr_24 [i_11] [i_11] [i_11 - 2] [i_11] [i_11] [i_11] [i_11 + 1])))))));
                            var_27 = ((/* implicit */long long int) ((short) arr_33 [i_9] [i_9] [i_9] [i_9] [i_11 - 2] [i_11]));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) * (((/* implicit */int) arr_42 [i_3] [i_3] [i_4] [i_5] [i_12]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((1932631078876357280LL) % (-5509392416603445883LL))))))))));
                        var_29 = var_9;
                        var_30 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_44 [i_5])) == (((/* implicit */int) ((short) arr_37 [i_12] [i_4] [i_5] [i_12] [i_12]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_3))))) ? (arr_16 [(short)0] [i_4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_3] [i_4] [i_5] [i_5] [i_12])))))) : (((long long int) 5509392416603445883LL))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 15; i_14 += 1) 
            {
                {
                    arr_50 [i_3] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) / (var_0)))) ? (((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_14] [i_14 + 1] [(short)2])) ? (var_10) : (((/* implicit */unsigned long long int) arr_28 [i_3] [i_3] [(short)5] [i_14 + 1] [i_14 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_14 - 1] [i_14 - 2] [i_14])))));
                    var_31 = ((/* implicit */long long int) arr_22 [8LL] [i_3]);
                    arr_51 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_7);
                    var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_49 [i_14 - 1]))) ? (((arr_16 [i_14 + 1] [i_14] [i_14]) + (arr_16 [i_14 + 1] [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((var_0), (((/* implicit */int) arr_24 [4LL] [i_3] [i_3] [i_13] [i_13] [i_14 - 2] [i_13])))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) ((_Bool) var_2));
    var_34 -= ((/* implicit */int) (((((-(-5509392416603445883LL))) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) 6159056834816260187LL))))))));
}
