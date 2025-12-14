/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142069
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
    var_11 = ((/* implicit */unsigned long long int) 3586397326U);
    var_12 = ((/* implicit */int) (short)-1);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */signed char) ((-1896332655) >= (arr_0 [i_2])))), (arr_5 [i_0 + 4] [i_0 - 1])))))))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 4] [8ULL]))));
                        var_15 *= (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_1 - 1] [(short)8]))))) >= (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [6ULL])) * (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)4]))) != (arr_1 [i_0 - 1]))))));
        arr_11 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(var_2))) <= (max((-6100384569314458677LL), (((/* implicit */long long int) arr_7 [i_0 + 2] [4] [4] [i_0])))))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 2094483260)) : (arr_2 [(unsigned char)0] [i_0]))))) << ((((+((+(arr_1 [(short)6]))))) - (3068201483219818591ULL)))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_3 [2ULL] [i_4] [2ULL])))))) : ((+(3707150069745063997ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_6 [i_4] [i_4] [i_4] [(_Bool)1]) >= (13699153341379799700ULL))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_14 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), ((~(1093597999940334976ULL)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_0)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (10ULL)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) && (((/* implicit */_Bool) (unsigned char)252))))), (max((var_6), (((/* implicit */long long int) 382254536)))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
}
