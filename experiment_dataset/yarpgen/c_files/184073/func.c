/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184073
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) (-(-8237874712712553005LL)));
        var_12 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */signed char) (short)27796);
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)27803)))))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))) <= ((-(-723281106)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_6);
                    arr_10 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))))) ? ((~(723281107))) : (((/* implicit */int) var_0)))));
                    var_17 = (!((_Bool)0));
                    var_18 = ((/* implicit */unsigned short) (short)-27786);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)79))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (3539485725U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1])))))), (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_7 [(_Bool)1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > ((-(((-723281107) / (((/* implicit */int) (short)-9155))))))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_5))));
}
