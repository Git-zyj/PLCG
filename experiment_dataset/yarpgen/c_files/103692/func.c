/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103692
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (var_11)));
                    var_15 = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned short)52743)))), (((((/* implicit */_Bool) var_7)) ? (arr_6 [i_2 - 2] [i_1] [i_2]) : (arr_6 [i_2 - 1] [i_1] [i_1])))));
                    arr_7 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [(signed char)3] [i_0])) * (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) arr_5 [(unsigned char)19] [i_0] [i_0])))))) > (((/* implicit */unsigned long long int) (-(var_9))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) 17346060481657869848ULL);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((var_7) << (((431735673U) - (431735665U))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9))))))));
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_21 [(unsigned char)6] [i_4] [i_6] [i_4] [i_5] [i_3] = (!(((/* implicit */_Bool) arr_12 [i_4] [i_4] [12LL])));
                        arr_22 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5] [i_6])) ? (var_3) : (var_3)));
                    }
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_10))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((1100683592051681767ULL) - (max((((/* implicit */unsigned long long int) var_13)), (var_5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)12792), (((/* implicit */unsigned short) (signed char)21)))))) / (17346060481657869847ULL))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17346060481657869857ULL)) ? (arr_13 [i_3] [i_4] [(signed char)17]) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3]))))) || ((!(((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_4] [i_3]))))));
                    var_22 &= ((/* implicit */short) (+(arr_4 [i_4])));
                }
            } 
        } 
    } 
}
