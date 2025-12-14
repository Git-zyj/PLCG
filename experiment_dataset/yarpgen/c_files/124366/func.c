/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124366
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)19)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) < (((/* implicit */int) (unsigned char)236)))))))) >= (((/* implicit */int) min(((unsigned char)236), (var_3))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_17 *= ((/* implicit */signed char) (((-(min((((/* implicit */long long int) arr_0 [4U])), (arr_1 [(unsigned char)5]))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [(unsigned char)12])) ? (arr_0 [(unsigned char)8]) : (arr_0 [(unsigned short)6]))) / (((/* implicit */int) var_8)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (var_1) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_14))))), (((/* implicit */unsigned long long int) var_8))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) max(((-(arr_0 [i_0]))), (max((584186963), (((/* implicit */int) var_13))))));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) -2029022294)) ? (arr_8 [(unsigned char)4] [i_0 - 1] [i_2]) : (((/* implicit */int) arr_2 [i_2])))))), ((+(((((/* implicit */int) (unsigned char)32)) / (arr_4 [i_0]))))))))));
            arr_10 [i_0] [(unsigned char)16] |= arr_2 [i_2];
            var_19 *= ((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_9 [(signed char)2] [(signed char)2])) * (((/* implicit */int) (unsigned char)32)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(unsigned short)12]) : (((/* implicit */int) var_13)))))) * (((((/* implicit */int) (unsigned char)223)) * (((/* implicit */int) ((var_11) >= (arr_1 [i_0]))))))));
        }
        var_20 *= ((/* implicit */unsigned long long int) arr_4 [i_0]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) arr_9 [i_0] [(unsigned char)12])), ((unsigned short)65527))))) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)81))))))))))));
        var_22 *= ((/* implicit */_Bool) max((((unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 2])), (((/* implicit */unsigned long long int) max((max((var_9), (var_12))), (((/* implicit */int) var_4)))))));
    }
}
