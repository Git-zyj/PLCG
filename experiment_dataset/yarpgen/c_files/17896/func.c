/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17896
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1089077273)), (2964701035U)))) + ((+(((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_11);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)64)))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)191)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)67)))))));
            var_25 = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_1]) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
            var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(16646144)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)191)) && (((/* implicit */_Bool) arr_3 [i_1])))))) : (((var_4) * (((/* implicit */unsigned long long int) -5824909397184276025LL))))));
        }
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
        {
            arr_8 [i_2] [i_2] [2] = ((/* implicit */unsigned char) ((long long int) (unsigned char)182));
            var_27 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_5 [0ULL] [0ULL]))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((arr_1 [i_2 + 1]) ? (((/* implicit */int) arr_1 [i_2 - 3])) : (((/* implicit */int) (unsigned char)182)))))));
                var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)213)) ? (4057405040U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
            }
        }
        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_16 [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & ((+(arr_9 [i_4] [i_0])))));
            arr_17 [(_Bool)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        }
        var_31 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)0))));
        var_32 = var_7;
        var_33 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5824909397184276025LL)) * (67108800ULL)))) ? (arr_9 [i_0] [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0])));
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((unsigned int) var_18))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_34 |= ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_18 [i_5])), ((-(((/* implicit */int) arr_21 [i_5] [i_5])))))), (((/* implicit */int) (unsigned char)222))));
            arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_19)) : (1989442541U))) : (max((((/* implicit */unsigned int) arr_19 [12U])), (4204534759U)))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (3961656896U) : (((/* implicit */unsigned int) 2147483647)))) : (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned int) var_9)) : (arr_22 [(unsigned short)19] [i_6] [i_6])))));
        }
        for (int i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            var_35 = (~(min((((/* implicit */int) (unsigned char)251)), (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) (unsigned char)136)))))));
            var_36 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_7 + 1])) ? (var_17) : (((/* implicit */int) arr_21 [i_7] [i_7 + 1])))));
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) 90432541U))));
            var_38 = ((/* implicit */short) (~(max((((unsigned long long int) (unsigned char)128)), (((/* implicit */unsigned long long int) var_11))))));
        }
        var_39 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_5])))))))));
    }
}
