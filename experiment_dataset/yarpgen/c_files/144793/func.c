/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144793
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((3508662886552011592ULL), (((/* implicit */unsigned long long int) (signed char)-83))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_8))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (unsigned short)64766);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (~(max((((arr_9 [i_1] [i_2] [i_3]) / (((/* implicit */int) var_13)))), (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_7 [i_0] [8ULL] [i_0]))))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (unsigned short)19))), (min((1126240990), (-22)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned char)158), (((/* implicit */unsigned char) arr_4 [i_4] [i_4])))), (((/* implicit */unsigned char) min((var_0), ((signed char)71)))))))) & (arr_1 [i_4] [i_4])));
        arr_17 [i_4] = ((/* implicit */long long int) 16777184U);
        var_21 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (unsigned short)13794)) ? (((/* implicit */int) arr_16 [i_4])) : (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4]))))))), (((/* implicit */int) max((min((((/* implicit */short) (signed char)-13)), (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */short) min(((unsigned char)1), (arr_12 [i_4] [i_4])))))))));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) var_4);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) (signed char)-99))))))), (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_1))))) : (6056568562862578676LL))))))));
    }
    var_23 = ((/* implicit */unsigned int) ((long long int) var_8));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_16))));
}
