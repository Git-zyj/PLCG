/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16524
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (unsigned short)34265);
                    arr_7 [6U] [6ULL] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (+(((((arr_4 [7LL] [i_1]) / (var_0))) & (arr_1 [i_0] [9LL])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)31275))))), (var_6)));
                                arr_13 [i_0] [i_1] [0] [i_3] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)177))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_2 [i_2] [(unsigned char)2]))))));
                                var_16 *= var_1;
                                var_17 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 3])) > (((/* implicit */int) min((arr_8 [i_0] [i_3 - 3] [(_Bool)1] [i_3 + 1]), (arr_8 [i_3] [i_3 - 2] [(unsigned char)15] [i_3 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)5] [2] [(signed char)10]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_18 = var_12;
                    arr_20 [i_0] [i_5] [i_6] = ((/* implicit */int) ((long long int) ((arr_15 [14LL] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_12)))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [13LL])))))) ? (((/* implicit */unsigned int) arr_18 [i_0] [i_5])) : (1501359597U)));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) ((min((min((5184453199062187482LL), (var_0))), (((/* implicit */long long int) ((arr_6 [i_6] [i_6] [i_6] [i_8]) ? (((/* implicit */int) (signed char)-49)) : (arr_16 [i_0] [i_0] [i_0])))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_5] [(_Bool)1] [i_6]))) : (-2600165078319939291LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (arr_21 [i_8] [i_6] [(signed char)14]))))));
                        arr_27 [i_0] [15LL] [(_Bool)1] [i_6] [(signed char)15] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_6])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                    }
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (signed char)49))));
                        arr_31 [i_0] [(signed char)5] [(_Bool)1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)34265), (((/* implicit */unsigned short) var_1))))) || (((/* implicit */_Bool) arr_0 [i_6]))));
                        arr_32 [i_6] [(_Bool)1] [i_6] [11] [i_9] = ((/* implicit */long long int) var_13);
                    }
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_12)), (var_6)))))) && (arr_6 [i_6] [i_6] [0LL] [(unsigned char)12])));
                    arr_33 [11] [(unsigned short)11] [(_Bool)1] [4LL] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_8 [(unsigned short)3] [i_5] [16U] [(_Bool)1]))))) + (((((((/* implicit */_Bool) arr_10 [(signed char)9] [(unsigned short)15] [(_Bool)1] [(_Bool)1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_0] [i_5] [i_5] [i_5] [i_6] [6LL] [i_6]))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                }
            } 
        } 
        arr_34 [9ULL] = arr_26 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 *= ((/* implicit */unsigned int) var_10);
}
