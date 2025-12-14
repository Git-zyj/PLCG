/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132237
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
    var_11 = ((((/* implicit */_Bool) var_8)) ? (141863388262170624LL) : (((/* implicit */long long int) max(((~(-1881949823))), (((/* implicit */int) (signed char)0))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = (-((-(((/* implicit */int) ((signed char) (signed char)-1))))));
                var_13 = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-35))))));
                var_14 = ((/* implicit */unsigned int) 1719327266732349524LL);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_7 [(unsigned char)10] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
        var_15 = ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_5 [(short)12]) : (((/* implicit */int) (unsigned short)47459))))) : (((((/* implicit */_Bool) (signed char)34)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)22)) ^ (-10)));
    }
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_7)))));
}
