/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148032
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 *= arr_2 [i_1];
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)238)), (arr_2 [i_1])));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [1LL])) >> (((var_8) - (3224925554514134864ULL)))))) >= (-8517053195335295506LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1ULL] [(_Bool)1])))))) ? (((((/* implicit */int) arr_1 [i_3] [i_0])) & (((/* implicit */int) arr_4 [1ULL] [i_2] [i_3])))) : (((/* implicit */int) ((arr_3 [i_3] [i_3] [(_Bool)1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) : (min((arr_3 [(signed char)9] [(unsigned short)17] [(unsigned char)10]), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-18570)) ? (-340298992558666422LL) : (-340298992558666436LL)));
                        }
                    } 
                } 
                arr_13 [i_1] = ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [i_0] [(_Bool)1] [i_0])) * (var_1)))), (arr_0 [i_1]))) / (((arr_3 [(unsigned short)13] [i_0] [17LL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (min((340298992558666414LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (short)12866)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (((((/* implicit */int) arr_8 [(_Bool)1] [9LL] [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned short)13])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [(signed char)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1])) : (721363803)))) : (arr_9 [i_0] [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 |= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), ((+(0ULL)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (min((var_0), (var_12))) : (((/* implicit */unsigned long long int) ((340298992558666414LL) / (((/* implicit */long long int) var_9)))))))));
}
