/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154918
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((/* implicit */int) ((unsigned char) min((274877906944ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((-2045139459) + (2147483647))) << (((18446744073709551601ULL) - (18446744073709551601ULL)))))))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((11ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_0 [i_2 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) (-(var_10)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
                    arr_6 [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) 0U))))) ? (max((((/* implicit */int) (!((_Bool)1)))), ((~(((/* implicit */int) arr_3 [i_0] [i_2])))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_9))))));
                }
                for (unsigned int i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    var_20 = ((((/* implicit */int) (unsigned short)42098)) << (((((-1487026924) + (1487026947))) - (21))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) var_5)), (2147483647))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                }
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) var_2);
                    var_23 = ((/* implicit */signed char) max(((-(min((218025769U), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20610)))))));
                }
            }
        } 
    } 
}
