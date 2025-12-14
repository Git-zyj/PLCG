/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120791
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) min((((min((((/* implicit */unsigned long long int) var_4)), (var_7))) << (((var_6) - (10185075255205091602ULL))))), (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (var_6))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_6), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == ((+(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1]))))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5161762968137290959ULL)))));
                arr_6 [10U] [10U] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_0))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [10LL]))))))))));
                arr_7 [i_0] [i_0] [5LL] = ((/* implicit */long long int) ((((((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_1)))) : (((var_6) << (((/* implicit */int) (_Bool)1)))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) | (((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_1) : (((/* implicit */long long int) ((((((/* implicit */long long int) var_9)) <= (var_5))) ? (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_0))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                var_13 *= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [(unsigned short)4] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_1)) : (min((arr_9 [9LL]), (arr_9 [i_3])))))));
            }
        } 
    } 
}
