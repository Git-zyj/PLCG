/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133780
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((+(((int) 1171366103)))) << (((min(((-(2901403312U))), (((/* implicit */unsigned int) (unsigned char)83)))) - (83U))));
        var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) / (arr_1 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_0 [10LL] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) arr_3 [i_1]);
        var_19 &= (+(arr_3 [i_1]));
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) -2147483628))));
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_4))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_7 [(_Bool)1])), (var_6))) - (((/* implicit */unsigned long long int) arr_7 [0U]))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_3 [i_2]))));
        var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2901403329U)) ? (((/* implicit */long long int) 1393563984U)) : (0LL))) == (((/* implicit */long long int) max((arr_2 [i_2] [i_2]), (((/* implicit */int) var_10)))))));
        var_24 ^= ((/* implicit */long long int) ((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_5 [6] [(signed char)10])) : (((/* implicit */int) var_2)))))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */long long int) var_10);
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        arr_16 [i_3] = ((/* implicit */long long int) ((((unsigned int) 1393563990U)) << (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3])) > (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned int) (_Bool)1)), (2901403312U)))))));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 3; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_24 [i_3] [i_5] [i_5] [0U] [i_3] [i_3] = ((/* implicit */signed char) (+((-(arr_1 [i_4 - 1] [i_6 - 1])))));
                        var_25 = ((/* implicit */unsigned short) (~(min((max((var_0), (((/* implicit */long long int) arr_9 [i_6] [i_5])))), (((/* implicit */long long int) ((((/* implicit */int) arr_23 [6LL] [i_5] [i_5] [(unsigned short)1] [i_6 - 2])) % (arr_21 [i_3] [i_3] [2U]))))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_10)) ^ (((/* implicit */int) max((var_5), (var_5)))))), (var_12))))));
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)59849))))), (2901403329U)));
}
