/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121892
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
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] |= max((((/* implicit */long long int) max((-642734300), ((-(var_8)))))), (min((((/* implicit */long long int) (unsigned short)26)), (20LL))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */int) (unsigned short)65528);
                    arr_11 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)27));
                    arr_12 [i_2] [i_2] = ((/* implicit */int) var_7);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_2] [(short)0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20))));
                        arr_16 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */int) 8904691511380246066ULL);
                        var_15 |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))));
                        arr_17 [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned int) arr_13 [i_2]);
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */short) arr_1 [i_1])), (var_3)));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) var_10);
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) 4ULL));
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_7);
    }
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_25 [i_5] [i_5]))), (((/* implicit */unsigned int) arr_24 [i_5]))));
        var_19 *= ((/* implicit */short) ((unsigned long long int) var_8));
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) 1268289629);
        var_20 = ((/* implicit */signed char) ((unsigned short) (-(arr_25 [i_5] [i_5]))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_25 [i_5] [i_5]) | (((/* implicit */unsigned int) 536870911)))));
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32743)), ((~(((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_25 [12LL] [i_6])) ? (arr_25 [(_Bool)1] [i_6]) : (arr_25 [(unsigned short)18] [i_6]))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)46283))))))))));
        arr_30 [i_6] = ((/* implicit */signed char) arr_28 [i_6]);
    }
    var_23 = ((/* implicit */unsigned long long int) (!(var_0)));
}
