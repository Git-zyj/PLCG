/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125067
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
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */unsigned short) 187626708);
    var_15 ^= var_9;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) (~(-187626716)))) / (((((-2422477416984888688LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))))) + (var_9)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned short)1087)) * (((/* implicit */int) var_0))))))));
        arr_4 [i_0] = (((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5434))) != (var_3)))))) & ((((-(((/* implicit */int) var_10)))) / (187626723))));
        var_17 = ((long long int) (signed char)-20);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)22)) : (-187626709))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) (~(-187626709)));
        arr_10 [i_1] &= ((/* implicit */long long int) arr_7 [i_1]);
        var_18 = ((/* implicit */unsigned long long int) var_2);
        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_1] [i_1])))) / (187626700)));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) (unsigned short)41161))))));
                    arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
}
