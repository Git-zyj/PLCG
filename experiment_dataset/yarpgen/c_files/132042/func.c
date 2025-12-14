/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132042
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
    var_14 += var_4;
    var_15 = (!(((min((((/* implicit */unsigned long long int) (short)21956)), (var_5))) >= (max((((/* implicit */unsigned long long int) var_9)), (var_5))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)32742)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51857)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (10458664949799774395ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11515676076061041754ULL)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_17 += ((/* implicit */unsigned char) (-(11515676076061041754ULL)));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_3 + 3] [i_0] [i_0] [i_0])), (var_5))))))), ((((+(var_5))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_3])), (var_1)))))))))));
                        var_19 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_2 [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((11515676076061041754ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))))) : (min((((((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])) % (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_3 [9U] [9U] [i_3 + 1]))))));
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4528028543230006012ULL)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))) : (6104573089883748915ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        var_20 = (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) var_9))))));
        var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11515676076061041754ULL)) ? (2382493310U) : (5U))))));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2382493310U))));
    }
    var_23 = ((/* implicit */long long int) var_13);
    var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_7), (var_11))))))));
}
