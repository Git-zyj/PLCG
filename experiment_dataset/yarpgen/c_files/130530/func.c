/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130530
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((520709893U), (((/* implicit */unsigned int) var_9)))) ^ (((/* implicit */unsigned int) min((arr_5 [i_1]), (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14652))))), (((unsigned int) 760412483U))))) : ((~(max((((/* implicit */unsigned long long int) arr_4 [2LL] [i_1])), (8188746112378635857ULL)))))));
                var_12 = 3774257389U;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((arr_5 [i_3]) >> (((var_7) - (7616373637458247233LL))))), ((-(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (698742730U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_1]))))))) ? (((arr_6 [i_0] [i_1] [i_0] [8ULL]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_4 [i_3] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 3] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_4 [i_0 - 1] [i_1 + 1]) : (max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_0] [i_0])), (3774257379U)))))));
                            var_15 = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1]);
                            arr_10 [i_3] [i_0] [i_0] &= ((/* implicit */short) arr_3 [i_2] [i_1] [i_2]);
                        }
                    } 
                } 
                var_16 &= ((/* implicit */int) (+((+((+(arr_9 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4]))))) : ((+(((/* implicit */int) var_4))))));
        var_18 = (+(arr_13 [i_4 - 1]));
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) arr_15 [i_5] [i_5]);
        arr_18 [i_5] = ((/* implicit */_Bool) arr_12 [i_5] [i_5]);
    }
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), (min((var_6), (((/* implicit */short) var_4)))))))));
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 14; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 4; i_8 < 12; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((max((arr_21 [i_6]), (3596224559U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (min((((long long int) var_3)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_8])))))))));
                    var_22 *= ((/* implicit */unsigned char) ((signed char) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                }
            } 
        } 
    } 
    var_23 = (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (var_1)))) << (((int) var_10)))));
}
