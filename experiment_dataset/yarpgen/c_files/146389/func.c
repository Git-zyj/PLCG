/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146389
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
    var_14 |= ((/* implicit */signed char) min(((-(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)64))))) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0] [i_1]));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_0] [i_4] [i_0])))) | (((arr_14 [i_0] [i_1] [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_1]) ? (2899111669U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_4 - 1] [i_4] [i_1] [4] [i_4 - 1])))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)12] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_4 - 1])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1]))))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned short)44800)))) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) + (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_16 [(_Bool)0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) -366854220226611576LL);
                }
                for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((max((((/* implicit */int) arr_3 [i_5 - 1] [i_1] [(unsigned char)13])), ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_19 |= ((/* implicit */int) var_13);
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)38454)) - (((/* implicit */int) (unsigned char)191))));
                        var_21 -= ((/* implicit */int) ((unsigned short) max(((-(((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) var_1))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned short) ((signed char) arr_0 [6U] [i_5 - 2]))), (((unsigned short) arr_6 [i_1] [i_5 - 3] [i_7]))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_17 [(unsigned char)19] [16U]), (((/* implicit */short) var_8)))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1] [i_5] [i_7])) & (((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 3] [i_5 + 1] [i_5] [i_5 - 1]))))));
                        arr_26 [i_0] [(unsigned short)16] [i_0] [(unsigned char)5] [i_0] = ((/* implicit */unsigned char) var_9);
                    }
                    var_24 = ((/* implicit */_Bool) ((long long int) var_1));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_5 + 1])), (min((var_0), (((/* implicit */int) arr_20 [(unsigned short)7]))))))) ? (((/* implicit */int) ((unsigned char) max((arr_23 [i_1]), (((/* implicit */unsigned int) var_2)))))) : (max((((/* implicit */int) var_5)), (var_0)))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(6059526258598067877ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) arr_24 [18U] [i_8] [i_1] [i_0])) ? (-455797275) : (max((arr_4 [i_9] [i_1]), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) > (max((var_6), (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                arr_38 [i_0] [i_0] [i_10] [i_5] [i_10] [i_5] = ((/* implicit */signed char) var_7);
                                var_26 &= ((/* implicit */unsigned short) var_13);
                                var_27 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned short) ((short) min((1228268339U), (((/* implicit */unsigned int) (unsigned char)122)))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) (-((-(((int) var_10))))));
}
