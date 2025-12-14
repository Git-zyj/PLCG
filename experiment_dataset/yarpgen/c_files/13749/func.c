/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13749
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_15)) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_20 += ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -112564658061491394LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_3] [i_2 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)9)) ? (507904) : (((/* implicit */int) var_11))))) : (arr_6 [1] [i_2] [i_0])));
                        var_22 = ((/* implicit */signed char) (+(arr_3 [i_0] [i_0] [i_0])));
                        arr_11 [i_0] [(_Bool)1] [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8895)) ? (((/* implicit */int) arr_8 [i_3] [i_2 - 2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_3 - 2]))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25)))))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_3 + 1])) ? (arr_3 [i_2 + 1] [i_2 - 2] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_0])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((arr_6 [i_0] [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)8]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) ((unsigned short) arr_8 [i_4 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 1]));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_4))));
                            var_27 *= (~(((((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 1] [i_5])) >> (((((/* implicit */int) arr_20 [8U] [i_4] [i_5] [i_6])) + (64))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (signed char)27))));
                            arr_23 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -507905)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) arr_7 [i_6] [i_1] [11LL] [i_5]))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_0]);
        }
        var_30 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_0] [4U] [4LL] [i_0]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        var_31 = (~(((/* implicit */int) ((unsigned char) arr_35 [i_7] [7LL] [i_9 + 1] [i_10] [i_10]))));
                        var_32 = ((/* implicit */_Bool) (signed char)15);
                        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        arr_36 [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (arr_28 [i_7] [i_7])))));
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) 
        {
            for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                {
                    arr_44 [i_11] = ((/* implicit */unsigned int) var_4);
                    arr_45 [i_7] [i_11 - 1] [i_12] = ((/* implicit */short) (~(((((/* implicit */_Bool) 25U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [2U] [i_11 + 1]))) : (var_16)))));
                }
            } 
        } 
    }
}
