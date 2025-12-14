/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15925
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (-1855686600) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((((var_16) + (1735808861))) - (61)))))) ? (((var_17) << (((var_18) - (8218217700507576081LL))))) : (((/* implicit */long long int) var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) == ((~(arr_5 [(unsigned char)19] [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) ((arr_5 [i_0] [18LL] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_1])))))) - (83)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_2]) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                    arr_10 [i_1] [i_2] [i_2] [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [13ULL] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_0]))) : (arr_5 [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [i_1]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((signed char) var_5));
                    var_23 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))));
                    arr_11 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) arr_1 [i_1]);
                }
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (((+(var_17))) % (max(((-(var_8))), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3]))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_3 [i_3])))) ? (arr_5 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)175)))))));
        arr_15 [i_3] = ((/* implicit */signed char) (+(arr_4 [i_3] [i_3])));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) arr_16 [(signed char)7] [i_4] [(unsigned char)17]);
            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3]))))) << (((arr_13 [i_3] [i_4]) - (8401484434181060479ULL)))));
            var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [(signed char)14])) ? (var_18) : (var_8)))));
            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_4] [i_4] [i_3] [i_3]))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) ((arr_21 [i_5 - 2] [i_5 - 1] [i_4] [i_5 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 1855686583)) || (((/* implicit */_Bool) 1205214997))))));
            }
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                arr_26 [i_4] [i_6] [i_6 - 2] [i_6 - 2] = ((/* implicit */unsigned char) arr_20 [i_3] [i_4] [i_6] [i_6]);
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */int) arr_25 [i_6] [i_4] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_6] [i_6 - 1] [i_4]))) : (((((/* implicit */long long int) arr_20 [i_3] [i_4] [i_3] [i_6])) / (var_6)))));
                var_33 = (!((!(((/* implicit */_Bool) var_8)))));
                arr_27 [i_4] [i_3] [11ULL] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_4 [i_3] [i_3]) >> (((/* implicit */int) arr_16 [i_6 + 1] [i_4] [i_3]))))) + (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) var_2)) : (var_4)))));
            }
        }
        for (int i_7 = 1; i_7 < 22; i_7 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) arr_30 [i_7]);
            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_3]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
    {
        var_36 = ((/* implicit */int) (!(var_19)));
        /* LoopNest 3 */
        for (signed char i_9 = 1; i_9 < 21; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_37 = (+(((((/* implicit */_Bool) arr_21 [i_8] [i_9] [i_9] [i_11])) ? (((/* implicit */int) arr_24 [i_8] [i_8] [i_10] [i_11])) : (((/* implicit */int) arr_37 [i_8] [i_9] [i_9] [i_11])))));
                        arr_41 [i_8] [i_9] [i_10] [i_8 - 1] = ((/* implicit */long long int) ((((arr_31 [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_38 = ((/* implicit */unsigned char) (-(((arr_20 [(signed char)19] [i_9 + 1] [i_9 + 1] [i_11]) >> (((/* implicit */int) arr_22 [i_8] [i_8] [9LL] [i_8]))))));
                        var_39 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
    }
}
