/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182506
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)98)))))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((1), (1))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_1)) >> (((var_6) - (11188522153167650160ULL)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((((((/* implicit */int) (signed char)101)) > (((/* implicit */int) arr_9 [i_3] [i_0] [i_0])))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)415)) - (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_3] [i_2 - 1] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))))) * (16664730638635206179ULL)));
                        var_18 = ((/* implicit */unsigned short) max((((arr_5 [i_3]) << (((arr_6 [i_0] [i_0] [i_2] [i_3]) - (9831229332691100177ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)182)), (arr_8 [i_3] [i_0] [i_1] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1] [i_2 + 2] [i_3]))))))))));
                        arr_12 [i_3] = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 + 2]))))), ((unsigned short)415));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_4] [i_2])) << (((arr_10 [i_0] [i_0] [i_1 + 2] [i_2 + 2] [i_0] [i_4]) - (9436211765929120332ULL)))))), (arr_5 [i_0]))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1]))), (((var_9) >> (((/* implicit */int) (unsigned char)30))))))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_20 = ((_Bool) ((((/* implicit */int) (unsigned short)49045)) / (2147483647)));
                        arr_19 [i_0] [i_0] |= ((/* implicit */int) ((_Bool) arr_10 [i_1 - 1] [i_2 + 1] [i_5 - 1] [i_5 - 2] [i_5] [i_1 - 1]));
                        var_21 ^= ((2147483647) - (((/* implicit */int) (short)17770)));
                        var_22 *= ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_5 - 1])));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))));
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 12957312780391658413ULL)) ? (7987361309364928477ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6 - 1] [i_2 + 1] [i_1 + 2])))));
                    }
                    arr_23 [i_2 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))) ? ((+(12957312780391658433ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)182))));
                    var_27 += ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2])))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) var_13);
}
