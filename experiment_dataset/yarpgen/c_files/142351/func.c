/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142351
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) -6548463167022123731LL);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((((arr_7 [i_3] [i_3 + 1] [i_2 - 2] [i_0]) + (9223372036854775807LL))) << (((((arr_7 [i_2 + 1] [i_3 - 1] [i_2 + 1] [i_1]) + (4299836864491677418LL))) - (61LL))))), (((/* implicit */long long int) arr_2 [i_0] [i_2 - 1] [i_2])))))));
                        arr_9 [i_0] [i_0] [i_1 + 2] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-((+(arr_3 [i_1] [i_2 + 2])))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) 18014394214514688LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)54670)) ? (((/* implicit */unsigned long long int) 3947795367U)) : (8275087622333279435ULL))) : (17348271103270534020ULL))))));
                        var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)13891))));
                        var_20 = ((/* implicit */long long int) (((~(((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32584))))))));
                        var_21 += ((/* implicit */unsigned int) max(((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (6138175297046747457LL))))), (((/* implicit */long long int) min((((((/* implicit */int) var_7)) | (arr_1 [i_1]))), (((/* implicit */int) var_10)))))));
                        var_22 = arr_5 [i_1 + 4];
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_4);
    var_24 = ((/* implicit */unsigned long long int) ((long long int) var_4));
    var_25 = ((/* implicit */unsigned int) var_9);
}
