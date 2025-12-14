/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161224
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))));
    var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1314017163)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (676414652158966400ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((-2933812644326562773LL) <= ((-9223372036854775807LL - 1LL))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_22 = ((max((((9223372036854775807LL) << (((4213723890U) - (4213723890U))))), (((/* implicit */long long int) (+(arr_3 [i_0])))))) << (((1431716555128095662ULL) - (1431716555128095662ULL))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) 9223372036854775777LL))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (var_4)))) ^ (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (arr_3 [i_0]))))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((((~(var_9))) + (9223372036854775807LL))) >> (((arr_0 [i_0] [(unsigned short)3]) - (16237783463243057941ULL))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_2))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned short)15))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_13))));
            var_27 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 1546892727U)) || (((/* implicit */_Bool) arr_1 [i_3] [i_3])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) -1500881573);
            arr_15 [i_3] = ((arr_11 [i_3 - 2]) < (arr_11 [i_3 + 1]));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 - 2] [i_3 - 2] [i_6] [i_7] [i_8] [i_8] [6ULL]))) : (arr_10 [i_3 - 1]))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_10 [i_3 - 2]))));
                            var_31 += ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_3 + 1]);
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */long long int) ((int) arr_9 [i_3]))) : (var_18))))));
        var_33 = ((/* implicit */_Bool) (~(arr_1 [i_3 - 2] [i_3 + 1])));
    }
    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 14787614022345187635ULL))) ? (var_4) : ((-(((/* implicit */int) var_0)))))))));
}
