/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125767
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 606899929295156108LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_3))) : (2017612633061982208LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((max(((short)8192), (arr_2 [i_1] [i_1 + 3] [i_0]))), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) (short)22567))))) <= (max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (606899929295156108LL))))))));
                    var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)2581)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (-606899929295156109LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3 + 1] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(-8328134771469772505LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 2] [i_1] [i_0]))) : (max((((/* implicit */long long int) min((((/* implicit */short) var_12)), ((short)-14527)))), (max((606899929295156108LL), (((/* implicit */long long int) arr_10 [i_0])))))));
                                var_23 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) 5649105622530763468LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -8328134771469772513LL)) ? (-606899929295156106LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 606899929295156107LL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (short)-27467);
    var_25 += ((((/* implicit */_Bool) (short)27475)) ? (min((var_0), (((8725740395153616996LL) << (((/* implicit */int) var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) min((min(((short)-2581), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)1)))))));
}
