/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172550
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) / (min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = (-(((arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]) >> (((((((/* implicit */_Bool) 6294260925155123126LL)) ? (var_6) : (-6294260925155123127LL))) + (3422459818545639341LL))))));
                            var_18 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((arr_6 [i_0] [i_1 - 2] [i_2] [i_3]), (-6294260925155123131LL))))))));
                            arr_9 [i_0] [9LL] [i_1] [i_0] [i_3] = max((((((/* implicit */_Bool) 6294260925155123144LL)) ? (arr_8 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8980589605566338397LL)))))))), ((~(((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1 + 1] [0LL])) ? (var_14) : (var_3))))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (~(arr_2 [i_0] [1LL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (arr_1 [3LL])))))))))));
                            var_20 += ((/* implicit */long long int) max((((arr_2 [i_0] [i_1 - 2]) < (arr_2 [i_0] [i_1 - 1]))), ((!(((/* implicit */_Bool) arr_2 [2LL] [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (~(var_14)))) ? ((~(-9059029664820593345LL))) : (var_7))) : (min((((long long int) var_11)), (var_5))));
    var_22 = ((long long int) ((max((9223372036854775807LL), (-6294260925155123165LL))) + (((var_8) / (var_11)))));
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (var_13))) : (((((var_10) + (9223372036854775807LL))) << (((4539628424389459968LL) - (4539628424389459968LL)))))))) ? (((long long int) min((var_3), (4695798251302292782LL)))) : (var_11));
}
