/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184506
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= var_6;
        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_16))))) ? (((/* implicit */int) max((var_16), ((unsigned char)222)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) var_12)))))))) ^ (((arr_1 [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8893939239511940197LL)) ? (((/* implicit */int) arr_0 [(signed char)10])) : (((/* implicit */int) var_16)))))))));
        var_19 = var_14;
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) 8893939239511940209LL)) ? (((/* implicit */int) (unsigned char)34)) : (2017512953))) : (((/* implicit */int) ((_Bool) ((unsigned long long int) arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                {
                    var_21 += ((/* implicit */_Bool) ((unsigned long long int) var_9));
                    arr_12 [6ULL] [i_2] [7] = ((/* implicit */unsigned long long int) var_14);
                    var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_17) + (var_17)))) ? (((/* implicit */int) ((_Bool) arr_5 [i_2] [i_1]))) : (((/* implicit */int) ((_Bool) (unsigned char)222))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)18083)) : (var_3))) & (((/* implicit */int) var_13))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (-8893939239511940197LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) % ((+(((((/* implicit */_Bool) (unsigned char)216)) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                        arr_26 [i_7] [i_6] &= ((/* implicit */signed char) min((((((/* implicit */int) (unsigned char)36)) * (((/* implicit */int) arr_20 [i_7] [i_7])))), (((((/* implicit */_Bool) arr_19 [i_7] [i_5 + 1] [(_Bool)1])) ? (var_3) : (var_3)))));
                        arr_27 [i_4] [8ULL] [i_5] [(signed char)20] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (unsigned short)29094)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((int) max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (_Bool)1)), (var_6))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 20; i_11 += 3) 
                        {
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((1372127249U) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (var_6) : ((~(((/* implicit */int) var_15))))));
                            var_27 += ((/* implicit */unsigned int) var_10);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 2) 
                        {
                            arr_42 [(unsigned char)3] [(unsigned char)3] [i_9] [i_10 - 1] [i_12] = ((/* implicit */unsigned long long int) ((((var_7) < (((/* implicit */unsigned long long int) arr_36 [i_10 - 1] [i_12 + 3] [i_12] [i_12] [i_12] [i_12])))) || (((/* implicit */_Bool) max((((unsigned long long int) (signed char)59)), (((/* implicit */unsigned long long int) arr_15 [13ULL])))))));
                            arr_43 [i_12] [i_10 + 1] [i_10 - 1] [15] [i_8] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)222)), (-8893939239511940199LL)))) ? (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)254)) : (1015985268))) : (-1982294298)));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            arr_48 [i_4] [i_4] [i_4] [i_10] [i_9] [i_8] = ((/* implicit */unsigned int) (-(var_3)));
                            var_28 = ((/* implicit */unsigned long long int) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 821375744)) : (var_7))));
                            var_29 = ((/* implicit */unsigned long long int) var_10);
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            var_30 = var_2;
                            var_31 = ((/* implicit */_Bool) min((var_31), (((_Bool) ((arr_9 [i_8] [i_9] [i_14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        }
                        arr_52 [i_10 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)99)))), ((+(((/* implicit */int) arr_6 [2ULL] [i_10 + 1] [i_10 + 1]))))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) var_7);
    var_33 = ((/* implicit */unsigned char) ((unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (min((((/* implicit */unsigned int) (unsigned short)50081)), (var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_59 [i_15] [2] &= ((((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)33), (((/* implicit */unsigned char) var_15)))))))) - (var_17));
                var_34 = ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_15])))) : (((((/* implicit */_Bool) arr_14 [(short)5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) - (var_5)));
                            var_36 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)99)))) ? (((((/* implicit */int) var_8)) & (((-1015985238) - (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)244)), (-8893939239511940205LL)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) -1015985285)) ? (-1015985272) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
