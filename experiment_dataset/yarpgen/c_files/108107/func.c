/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108107
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -3470489676162698552LL)), (13252563255233567570ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) (short)-30658);
                                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) var_1);
                                var_12 = ((/* implicit */long long int) max((var_12), ((+(((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 + 3] [9LL] [i_3] [i_3] [i_4])) ? (((arr_12 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) ? (arr_6 [i_3] [i_4]) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2165686864595535820LL)) || (((/* implicit */_Bool) (unsigned short)22))))))))))));
                                var_13 = (short)-21673;
                                var_14 = ((/* implicit */long long int) arr_11 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 2]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (0LL)))) <= (((unsigned long long int) var_0))))), (max((((((/* implicit */_Bool) 4211858230U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))) : (3868542987174958925ULL))), (((/* implicit */unsigned long long int) ((-5433361072872004627LL) > (arr_3 [6LL] [i_1] [i_1])))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((4163464602U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118)))))) >> (((var_4) + (1965349411)))))) ? (min((2302837353939464459LL), (((/* implicit */long long int) 444228030)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (max((((/* implicit */long long int) (_Bool)1)), (var_2))))))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)19955))));
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned int) var_1);
}
