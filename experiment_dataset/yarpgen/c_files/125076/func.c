/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125076
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]))));
                var_14 ^= ((/* implicit */short) var_4);
                var_15 = ((/* implicit */signed char) max((max((arr_1 [i_0]), (arr_1 [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-8251698319612447674LL))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                    var_17 = ((/* implicit */unsigned int) arr_7 [i_0]);
                    var_18 = ((/* implicit */unsigned long long int) var_3);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_12 [i_3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((((_Bool)1) ? (2270687260004970441LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_19 = ((/* implicit */signed char) var_12);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1]))));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((arr_16 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_15 [i_0] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (((long long int) arr_8 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15969)));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_5)))) : (((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))), (var_4)))));
}
