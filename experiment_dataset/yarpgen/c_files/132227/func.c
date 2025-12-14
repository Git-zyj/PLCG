/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132227
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_6 [i_0]))))), (max((arr_7 [i_0] [i_1] [i_1] [13LL] [i_3]), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_5 [i_0] [i_0])), (arr_9 [i_1] [i_1] [i_3]))))))));
                            arr_10 [i_3] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (-(min((arr_8 [14U] [i_3 + 3] [i_3 + 2] [i_3 - 1]), (arr_8 [i_3] [i_3 + 3] [i_3 + 2] [i_3])))));
                            var_15 = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned short)65535))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0] [i_1])), (max((arr_5 [i_0 + 3] [i_1]), (var_12)))))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)32)) == (((/* implicit */int) arr_1 [i_1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned long long int) var_13));
}
