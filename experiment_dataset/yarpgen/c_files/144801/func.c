/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144801
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
    var_15 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) var_14)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) (signed char)-103);
        var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = arr_0 [i_0] [i_0];
            var_19 = ((/* implicit */signed char) (-(arr_1 [i_0])));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_4 [i_1]))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned char)246), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13937606511209215929ULL)))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 7; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_2] [(signed char)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 3]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_17 [i_2])))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) ((arr_17 [i_3]) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) arr_17 [i_3]))));
        }
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_6])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2]))))))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6]))) : (arr_8 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 8712398309622263874LL)) ? (((/* implicit */long long int) -1433378615)) : (arr_8 [i_2] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))))))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_2] [i_7]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_29 [i_7] [i_2] [i_2] [i_8] [(_Bool)1] [i_9 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_9 - 1]))));
                    arr_30 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_7] = arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1] [(unsigned char)2] [i_9];
                }
                var_26 += ((/* implicit */unsigned char) ((signed char) arr_18 [(unsigned short)3] [i_2] [i_2] [i_7] [i_2]));
            }
            arr_31 [(signed char)3] [(signed char)3] [i_7] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_1 [i_2])), (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_7)))))));
            var_27 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)5))))));
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) max(((+(arr_12 [i_10]))), (((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) var_6))))))));
            var_29 = ((/* implicit */unsigned int) (-((+(arr_2 [i_2] [(unsigned char)4])))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_30 = (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_34 [i_11]))))))));
        arr_38 [i_11] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_34 [i_11])), (arr_36 [i_11] [i_11]))) << ((((~(arr_36 [i_11] [i_11]))) + (325484432)))));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(arr_34 [i_11]))))));
        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_37 [i_11]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11] [i_11]))))) : (((/* implicit */int) arr_35 [i_11] [(unsigned char)9]))))) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(arr_35 [i_11] [i_11])))), (((unsigned char) (unsigned char)253)))))));
    }
}
