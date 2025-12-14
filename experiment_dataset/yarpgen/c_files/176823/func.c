/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176823
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
    var_12 = ((/* implicit */short) (+(var_4)));
    var_13 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) : (var_10));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0 + 2] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) min((1703350706U), (((/* implicit */unsigned int) var_6))))), (min((13ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((1987241532U) - (1987241510U))))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(var_8)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -2144728799379261912LL))));
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (-(1022LL)));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(max((((/* implicit */long long int) arr_10 [i_0 + 2] [i_0 - 1] [i_3 + 1] [i_0 + 2])), (max((-2055679175579171380LL), (2055679175579171379LL))))))))));
                    }
                    var_16 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(-12LL)))) ^ (((((/* implicit */_Bool) 744321751375224198LL)) ? (((/* implicit */unsigned long long int) 4294967272U)) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                    var_17 = ((/* implicit */unsigned char) ((int) 5766698798155559929ULL));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)54455)) ? (1703350709U) : (1513605620U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2591616586U)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)65535)))))));
}
