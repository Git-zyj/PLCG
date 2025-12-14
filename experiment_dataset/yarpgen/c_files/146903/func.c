/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146903
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((min((var_6), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (+(var_4)))))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483622))) ? (((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)235))))))) : (var_3)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)149))));
        var_17 = ((/* implicit */long long int) min((((unsigned int) (-(((/* implicit */int) (unsigned short)1317))))), (((/* implicit */unsigned int) (unsigned char)17))));
        var_18 = ((/* implicit */unsigned short) (-(min((arr_3 [i_1]), (((/* implicit */int) (signed char)36))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) (((~(arr_7 [i_2 + 1] [i_2 + 1]))) % (max((arr_7 [i_2 + 1] [i_2]), (((/* implicit */long long int) (unsigned char)17))))));
            var_19 = ((/* implicit */int) (-(((576460752303423486LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((unsigned long long int) ((unsigned int) (unsigned short)1299))) >> (((/* implicit */int) ((unsigned char) 17179860992LL)))));
        var_21 = ((/* implicit */signed char) var_13);
        var_22 &= ((/* implicit */int) (-((~(((((/* implicit */long long int) var_8)) + (var_10)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (var_11)))) * (((/* implicit */int) ((unsigned short) arr_0 [i_3])))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_24 = ((/* implicit */long long int) 11944911319568616620ULL);
        var_25 = ((/* implicit */unsigned int) ((arr_7 [13U] [i_4]) <= (((/* implicit */long long int) arr_3 [i_4]))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)57974)) ? (1565493614U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
        var_27 *= ((/* implicit */signed char) ((-7920230729795832336LL) > (-17179860993LL)));
    }
}
