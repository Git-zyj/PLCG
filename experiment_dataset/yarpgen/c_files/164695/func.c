/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164695
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_7))))))) ^ (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_12 *= (!(((/* implicit */_Bool) var_7)));
    }
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (_Bool)1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_14 |= ((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((arr_13 [i_1 - 4] [i_1] [i_1 - 4] [i_2] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))) ^ ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) arr_13 [i_1] [i_2] [i_3] [i_2] [i_2]))))));
                            var_17 = ((/* implicit */unsigned short) (!(arr_10 [i_1 + 3] [13LL])));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) var_7)))));
            }
            for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_21 [i_2] [i_2] [i_2] = ((/* implicit */short) (signed char)78);
                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1539130353U)))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) ((arr_10 [(_Bool)1] [i_2]) || (((/* implicit */_Bool) var_9)))))))));
                var_20 += ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1]))) ^ (arr_15 [i_1] [i_2] [i_2] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) max((var_4), (var_4)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1])))))))))));
            }
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
            var_22 -= ((/* implicit */signed char) ((_Bool) arr_17 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [(_Bool)1]));
            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17170)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_13 [15U] [(_Bool)1] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) arr_8 [i_1 - 4] [20LL] [i_1])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1]))))))), (((/* implicit */unsigned int) (signed char)103))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_1] [i_7] [(short)1]);
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_24 [i_1 + 1] [i_1 + 1]))) ^ (((/* implicit */int) arr_9 [i_1 - 2]))));
                var_25 = ((/* implicit */unsigned int) var_7);
                arr_31 [(short)20] [i_7] [i_8] = ((/* implicit */unsigned int) var_9);
            }
            for (unsigned int i_9 = 2; i_9 < 20; i_9 += 4) 
            {
                arr_34 [(signed char)1] [(signed char)1] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [i_1 - 3]))))) ? (((/* implicit */int) ((672804898U) <= (1637987418U)))) : (((((/* implicit */int) arr_24 [i_7] [i_9])) + (((/* implicit */int) arr_25 [i_1])))))) != (min((((((/* implicit */int) (_Bool)1)) ^ (arr_5 [i_1]))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)8))))))));
                var_26 += ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                arr_35 [i_7] [i_1 + 2] = ((/* implicit */_Bool) var_6);
                arr_36 [(_Bool)1] [(_Bool)1] [i_9] |= ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_23 [i_1] [i_7] [i_9 + 1])));
            }
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_6 [i_10]) ? (((var_3) ? (((/* implicit */int) var_5)) : (var_0))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 3] [i_1] [i_10]))) >= (var_8)))))))));
            var_28 = ((/* implicit */long long int) arr_13 [i_1] [i_1] [11U] [i_10] [(unsigned char)1]);
            arr_40 [i_10] = ((arr_6 [i_1 + 3]) || (((/* implicit */_Bool) var_2)));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    {
                        var_29 -= ((/* implicit */long long int) arr_7 [i_1 - 2]);
                        arr_48 [i_1 + 3] [i_10] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_17 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                            arr_51 [i_12] [i_10] [i_10] [i_10] [i_13 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_13 + 1])) > (((/* implicit */int) arr_12 [i_13 + 1]))));
                        }
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_1 - 3] [i_1]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_1 - 4] [i_1 - 4] [(unsigned char)10] [i_1] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_47 [i_1 - 2] [i_1 - 4] [i_1 + 2] [i_1 - 3])) : (((/* implicit */int) arr_16 [i_1] [i_1])))) <= (((((/* implicit */int) arr_42 [i_1 - 3] [i_1])) & (((/* implicit */int) arr_24 [i_1 + 3] [i_1]))))))) : (((/* implicit */int) ((_Bool) var_9)))));
    }
    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        var_32 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) / (((/* implicit */int) arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [(unsigned char)6]))))));
        arr_54 [i_14] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_14] [(signed char)4] [8] [i_14]))) != (var_1)))) >> (((((arr_7 [i_14]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_14] [(unsigned char)12]))))) + (56LL))))) + (((/* implicit */int) ((_Bool) arr_37 [i_14] [i_14])))));
    }
    var_33 |= ((/* implicit */int) ((short) var_8));
    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) <= (((((/* implicit */_Bool) (unsigned char)4)) ? (var_8) : (((/* implicit */long long int) var_0)))))))) : (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) / (var_1))))));
}
