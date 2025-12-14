/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159891
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */int) ((unsigned char) ((unsigned int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                                arr_13 [i_1] [1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)0)), (6856201211786767751LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_4 + 3])) != (((/* implicit */int) arr_9 [i_4 - 2]))))) : (((arr_0 [i_2 + 1]) ? (((/* implicit */int) arr_0 [i_2 - 3])) : (((/* implicit */int) arr_9 [i_4 - 1])))));
                                var_11 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_2 + 2])) ? (arr_7 [(short)8] [(signed char)5] [i_2 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                                var_12 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) : (max((8475534324612563778ULL), (((/* implicit */unsigned long long int) -358024877134783717LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) : (var_3)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((min((2147483647), (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_5] [i_6])))) + (((/* implicit */int) min((var_8), (var_8))))))), (((arr_3 [i_0] [(unsigned char)13]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) >= (((/* implicit */int) arr_0 [i_6])))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))))))))))));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28618)) ? (((/* implicit */int) (short)20762)) : (1155572209)));
                                var_16 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_6]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(var_4))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((long long int) arr_16 [i_2 - 2] [(_Bool)1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned int) ((arr_3 [i_7] [7ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) -1757137333)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))));
        var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) var_8)), (var_4))))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_16 [(_Bool)1] [(_Bool)1] [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [15] [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_9 [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))) - (166ULL)))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((-239796974) - (((/* implicit */int) (unsigned char)175))));
        var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((1102497654), (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned short)36917), (((/* implicit */unsigned short) arr_21 [i_8] [i_8] [i_8] [i_8] [(signed char)17])))))))));
    }
}
