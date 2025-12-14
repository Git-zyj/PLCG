/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170055
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_21 = ((((/* implicit */_Bool) (~(var_13)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_1)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_1] [(unsigned short)8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_2] [i_1]))) | (((((/* implicit */_Bool) var_3)) ? (17504759263863911623ULL) : (((/* implicit */unsigned long long int) var_19))))));
            var_22 = ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) : (arr_3 [i_2] [i_1]));
        }
        arr_10 [(unsigned short)4] [i_1] &= ((/* implicit */unsigned int) var_19);
        var_23 = ((/* implicit */unsigned int) var_8);
        arr_11 [i_1] &= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (17504759263863911623ULL))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            {
                arr_17 [i_3] [i_3] = ((/* implicit */signed char) var_1);
                arr_18 [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))))) ? (((((/* implicit */_Bool) arr_12 [6LL] [(signed char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50589)))))));
                arr_19 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((var_12) >> ((((((+(arr_8 [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 941984809845640018ULL)))))) - (18446744073709547497ULL)))));
            }
        } 
    } 
    var_24 &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (unsigned short)15649)) : (((/* implicit */int) (unsigned short)50579)))) : (((((/* implicit */_Bool) var_19)) ? (var_19) : (var_19))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (~((~(((int) var_4))))));
        arr_24 [i_5] [i_5] = ((/* implicit */signed char) (!((_Bool)0)));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (unsigned char i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            {
                var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((int) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_7]))) : (var_13)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_7 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)34096))))) ? (((/* implicit */int) ((2147483647) > (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned short)14922)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (_Bool)0))))))));
                var_26 = ((/* implicit */unsigned char) ((2159764713U) >> (((((/* implicit */int) (unsigned short)50589)) - (50572)))));
                arr_29 [i_6] [14] [i_6] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)14935)) | (((/* implicit */int) (unsigned char)107))))))));
                var_27 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_11)));
            }
        } 
    } 
}
