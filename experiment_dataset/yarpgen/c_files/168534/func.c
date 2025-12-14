/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168534
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
    var_20 &= var_4;
    var_21 *= ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_22 &= ((/* implicit */long long int) arr_1 [i_0] [10]);
        var_23 = ((/* implicit */unsigned short) (+(arr_2 [i_0])));
        var_24 = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [9ULL] [9ULL] = ((/* implicit */unsigned char) var_17);
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min(((((+(536870911LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1]))) + (-536870889LL))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((min((arr_10 [(short)4] [i_1]), (((/* implicit */long long int) arr_5 [i_1])))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2] [i_3 + 1]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(unsigned char)4] [(short)6])) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)4974)) != (-1454145223))))))))))));
                    arr_13 [i_1] [4] [i_3] = ((/* implicit */unsigned short) min((((arr_6 [i_1]) ^ (((/* implicit */int) (unsigned short)57697)))), (((/* implicit */int) min(((unsigned char)238), (((/* implicit */unsigned char) var_3)))))));
                    var_27 = ((/* implicit */unsigned int) ((((arr_0 [i_1]) + (2147483647))) << (((((arr_0 [i_2]) + (266182464))) - (2)))));
                    arr_14 [(unsigned short)2] &= ((/* implicit */int) ((-536870912LL) % (((/* implicit */long long int) ((/* implicit */int) (short)20980)))));
                }
            } 
        } 
        arr_15 [8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)52386))));
    }
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_5))));
}
