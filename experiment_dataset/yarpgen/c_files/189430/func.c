/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189430
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [(signed char)5] [i_2 - 2] [i_2] [i_2 - 1] [i_0] [i_2] [i_2 - 3] = ((/* implicit */signed char) var_6);
                                arr_14 [i_0] [(signed char)10] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_15 = ((/* implicit */signed char) (~(((max((var_11), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_5] [i_0 - 4] [(unsigned char)5])))) ^ (((/* implicit */unsigned long long int) var_4))))));
                    arr_17 [i_0] [i_0] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) var_12)))))) < (((/* implicit */int) var_13))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (short)5870)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((var_4) % (((/* implicit */int) var_3)))))));
                        var_16 = ((/* implicit */long long int) (+(arr_4 [i_1] [i_1] [i_0])));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) var_12);
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1 - 4] [i_0]))));
                        arr_24 [i_0] [i_0] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(-744416469391193264LL)));
                        var_19 &= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-23232))))));
                        var_20 = ((/* implicit */unsigned long long int) ((var_11) < (((/* implicit */unsigned long long int) 1111933426))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */short) arr_5 [i_0]);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(var_13)))) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((var_11) - (13835309961757848486ULL)))))));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    arr_30 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_11)));
                    arr_31 [i_0] [9U] [i_0] = (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [(_Bool)1] [i_9] [i_9] [i_9]))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    var_24 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (unsigned int i_12 = 3; i_12 < 16; i_12 += 3) 
            {
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) arr_2 [i_12]);
                    arr_41 [i_11] = ((/* implicit */signed char) (+(var_11)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_6))))) + (((long long int) var_2))));
                                arr_48 [i_10] [i_11] [2ULL] [i_11] [i_11] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2898553795908490573LL)))))));
                                var_27 = ((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_13))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_17 = 3; i_17 < 18; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_6);
                        var_29 = (+(min((((/* implicit */long long int) (unsigned char)0)), (6017371852022307370LL))));
                        var_30 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 3 */
                        for (short i_18 = 2; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) (_Bool)1);
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8)))) ? (var_7) : (((var_7) >> (((/* implicit */int) var_2)))))))));
                        }
                        for (short i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
                        {
                            arr_63 [i_19] [i_11] [i_11] [i_11] = ((/* implicit */short) (!((_Bool)0)));
                            var_33 = ((/* implicit */unsigned char) (~(8586514829634829429LL)));
                            arr_64 [i_10] [i_11] [i_12] [i_17 + 1] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_25 [i_11]))))))));
                            arr_65 [i_10] [i_11] [i_10] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) ((short) min((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (-2898553795908490589LL))), (((/* implicit */long long int) (short)8128)))));
                        }
                        for (short i_20 = 2; i_20 < 16; i_20 += 4) /* same iter space */
                        {
                            arr_69 [i_11] [i_11] [13] [13] [i_20] = ((/* implicit */_Bool) (+(((var_5) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13)))))))));
                            arr_70 [i_10] [i_11] [i_12] [i_10] [14ULL] [i_11] = var_1;
                        }
                    }
                    for (int i_21 = 4; i_21 < 17; i_21 += 2) 
                    {
                        arr_73 [(signed char)15] [i_11] [i_21] [i_11] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [14ULL] [i_21 - 3] [i_12 + 1]))))) || ((!(((/* implicit */_Bool) var_14)))));
                        arr_74 [i_10] [i_11] [i_11] [i_21 + 1] [i_21] [i_21] = ((((/* implicit */int) (!(((/* implicit */_Bool) 7596636421489358389LL))))) ^ (((/* implicit */int) var_12)));
                        var_35 = (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)64)) ? (var_4) : (((/* implicit */int) var_10)))))));
                    }
                }
            } 
        } 
    } 
}
