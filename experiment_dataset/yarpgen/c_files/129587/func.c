/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129587
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((short) var_2))))));
        var_21 = ((/* implicit */unsigned int) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)19);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 += ((/* implicit */int) ((_Bool) arr_6 [i_2 + 1] [i_3]));
                        var_23 = (!(((/* implicit */_Bool) arr_8 [i_2 - 1])));
                        arr_13 [i_1] [i_2 + 1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_10 [i_2 - 1] [i_2] [i_2 + 2] [i_1]) < (arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [(_Bool)1] [(unsigned short)10])) ? (arr_9 [(unsigned short)12] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((int) arr_7 [i_1]));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) arr_12 [i_1] [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_22 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)21] [i_6 + 2] [i_6 + 1] [i_7]))) <= (arr_9 [i_6] [i_6 + 2] [i_6 + 1] [i_6 - 1])));
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_4 [i_1])))));
                        var_27 = ((/* implicit */int) max((var_27), (((int) (-(arr_19 [i_6 - 1]))))));
                        var_28 = ((/* implicit */int) (signed char)1);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_15))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_12 [i_8] [(_Bool)1])) ? (((/* implicit */int) arr_11 [(unsigned short)11] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_32 [i_8] = ((/* implicit */unsigned short) ((_Bool) arr_27 [i_8] [i_9] [i_9]));
                    arr_33 [i_8] [6ULL] [i_8] [i_10] = arr_6 [i_8] [i_8];
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_23 [i_8]))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28734))) : (arr_23 [i_10])));
                }
            } 
        } 
    }
    for (signed char i_11 = 3; i_11 < 18; i_11 += 4) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_1)), (min((((unsigned short) arr_8 [i_11 - 1])), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) > (arr_9 [i_11] [i_11] [(signed char)12] [i_11 - 1]))))))));
        arr_38 [i_11] [i_11] = ((/* implicit */signed char) arr_19 [i_11 - 1]);
        var_32 = ((/* implicit */signed char) min((max((((arr_12 [(unsigned char)15] [i_11 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (unsigned char)235)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) ((_Bool) var_8)))));
    }
    var_33 = ((/* implicit */long long int) (~((((~(2147483647))) & (((/* implicit */int) var_1))))));
    var_34 = ((/* implicit */_Bool) max((max((var_15), (((/* implicit */unsigned int) (signed char)111)))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_17))), (var_0))))));
}
