/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111455
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) arr_1 [i_0])));
        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((int) arr_1 [i_1])))));
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    var_16 = var_7;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-36))));
        arr_9 [6] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)28)) >= (((/* implicit */int) (unsigned char)228)))) ? (var_2) : (var_6)));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+((-(var_8))))))));
    }
    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (unsigned char)35)), (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (arr_7 [i_3 + 1]) : (arr_7 [i_3 + 2]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)121))))));
            arr_16 [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_4]);
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_3))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_3 + 3])) : (((/* implicit */int) arr_18 [i_3 + 2] [i_5 + 1])))))));
            var_23 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5 - 1]))));
        }
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_6))));
            arr_21 [i_6] [i_3] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned char)157)), (921069504))), (((/* implicit */int) (unsigned char)228))));
            var_25 = ((/* implicit */int) min((var_25), ((((!(((/* implicit */_Bool) (unsigned char)224)))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) arr_1 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3 + 1])))))))));
            arr_22 [i_3 + 2] [i_6] = (+(((/* implicit */int) ((((/* implicit */int) (signed char)45)) >= (var_6)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [(signed char)2])))))));
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_7]))));
    }
}
