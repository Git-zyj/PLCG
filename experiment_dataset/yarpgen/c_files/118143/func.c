/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118143
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
    var_19 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) var_15);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_12 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_9))));
                        arr_13 [i_0] [i_0] [i_0] [13] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((-419438104), (-419438104)))) + (min((((((/* implicit */_Bool) 2244298771361487978LL)) ? (((/* implicit */long long int) var_4)) : (var_17))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) < (var_17))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_23 = ((/* implicit */long long int) (-(((((/* implicit */int) var_16)) >> (((var_11) - (3462741158638267920LL)))))));
            var_24 = ((/* implicit */unsigned short) ((7421787298252799563LL) >> (((-419438103) + (419438126)))));
        }
        var_25 = ((/* implicit */_Bool) 524032ULL);
        var_26 = (+(min((((((/* implicit */_Bool) -419438104)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (312367707171634056LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) -419438103))))))));
        var_27 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_1))))));
    }
    var_28 = ((/* implicit */unsigned char) (signed char)127);
    var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((2890034412871276524ULL) > (((/* implicit */unsigned long long int) 481036337152LL))))))), (max((var_10), (((long long int) var_17))))));
    var_30 = ((/* implicit */unsigned short) min((min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_1)))) || (((/* implicit */_Bool) var_3)))))));
}
