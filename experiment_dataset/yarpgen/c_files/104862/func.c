/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104862
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
    var_14 |= ((/* implicit */_Bool) (~(-5860358360236285331LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (signed char)127);
                    var_16 = ((/* implicit */unsigned short) max((arr_1 [i_2] [i_1 - 2]), (((((/* implicit */_Bool) 7179297714173317865LL)) ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_2] [i_0])))));
                    arr_7 [10U] [i_2] = ((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2]);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) arr_3 [i_0]))))), (((long long int) (signed char)-127))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6092323930836779235LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2168728109U)));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                            {
                                var_18 -= ((/* implicit */_Bool) ((((long long int) (!(((/* implicit */_Bool) var_11))))) >> (((((/* implicit */int) ((unsigned char) (signed char)-116))) - (107)))));
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) (short)18494)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27107)))))))));
                            }
                            /* vectorizable */
                            for (long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 2916479768253782697LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_28 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [(_Bool)1] [i_3 - 1])) - (((/* implicit */int) (signed char)(-127 - 1)))));
                            }
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max(((signed char)1), ((signed char)-1))))));
                            arr_29 [i_4 + 1] = ((/* implicit */_Bool) min((((long long int) ((arr_11 [i_3 - 1] [i_4 + 1]) / (((/* implicit */int) (unsigned char)217))))), (((/* implicit */long long int) ((short) arr_1 [i_3] [i_4 + 2])))));
                        }
                    } 
                } 
                arr_30 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)90)) && (((/* implicit */_Bool) arr_0 [(unsigned short)0])))) && (((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4]))))), (((unsigned int) (+(8388096LL))))));
                arr_31 [i_4] = ((/* implicit */int) (~(max((min((arr_25 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */long long int) (unsigned char)97)))), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_3 - 1] [i_4] [(_Bool)1] [i_4] [(_Bool)0])) & (((/* implicit */int) var_5)))))))));
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3] [i_4] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1649267441664LL), (((/* implicit */long long int) (signed char)-116))))))))) : (((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_9])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
                                var_23 += ((/* implicit */long long int) max(((signed char)115), (((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_14 [i_3 - 1] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) 1532359732U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 + 2]))) : (1514006400368329734LL)))));
                }
                for (long long int i_12 = 2; i_12 < 15; i_12 += 4) /* same iter space */
                {
                    arr_41 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) arr_19 [6] [(unsigned char)13]);
                    var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((_Bool) (_Bool)1)), (((((/* implicit */_Bool) 6092323930836779235LL)) || (((/* implicit */_Bool) var_9))))))), ((+(arr_2 [1] [1])))));
                }
                for (long long int i_13 = 2; i_13 < 15; i_13 += 4) /* same iter space */
                {
                    var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_4 + 1] [i_13] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_13 - 2] [i_4 + 2]))) : (arr_20 [4] [i_4 + 2] [i_13] [i_4 - 1])))) || (((/* implicit */_Bool) arr_19 [i_13 - 2] [i_4 - 1]))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) (short)(-32767 - 1)))) ? (var_2) : (((/* implicit */int) ((short) (_Bool)1))))), ((~(((/* implicit */int) (short)-22151)))))))));
                    arr_44 [i_3] [i_3] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) % (5728891684431248302LL));
                }
            }
        } 
    } 
}
