/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14906
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-40)) ? (565561538795399272ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (3406066033U) : (((/* implicit */unsigned int) var_4)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_1] [i_1])))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((2147483647) ^ (-2147483647)))) == (1441128981U)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_3] [8] [i_5] = ((/* implicit */unsigned char) var_1);
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (-2147483647) : (((((/* implicit */_Bool) arr_8 [0] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) arr_14 [i_6] [i_6] [i_6] [2U] [i_6] [i_6 + 1]);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */unsigned int) var_1)) : ((-(arr_10 [(short)2] [i_6] [i_6 + 1] [i_6])))));
        arr_21 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_6 + 1] [i_6] [(signed char)10]))))) ? (((unsigned int) arr_6 [i_6 + 1] [i_6 + 1] [10U])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483647)) || (((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 - 1] [8U]))))))));
        var_22 = ((/* implicit */unsigned short) (short)31267);
    }
    var_23 = ((/* implicit */short) min((-499740601), (((/* implicit */int) var_12))));
    var_24 &= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) (+((-2147483647 - 1))))) & (1389640755U)))));
}
