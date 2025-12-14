/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185464
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((unsigned int) max((var_7), (((/* implicit */unsigned short) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) var_18);
                var_20 = ((/* implicit */short) (~((-(((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((max((arr_2 [i_0] [i_0]), (arr_12 [(_Bool)1] [(_Bool)0] [16LL] [i_3]))) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9072)))))))), (max((max((var_1), (((/* implicit */long long int) (unsigned short)56454)))), (((/* implicit */long long int) min((var_12), (arr_5 [i_0] [i_0]))))))));
                            arr_14 [i_2] = ((/* implicit */signed char) var_17);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */short) (-((~(((((/* implicit */_Bool) var_0)) ? (arr_12 [(unsigned char)16] [2ULL] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56463)))))))));
                            var_23 = ((max((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)14)))), (arr_16 [i_1] [i_1 - 1] [21LL]))) ? (((((/* implicit */_Bool) var_17)) ? (arr_2 [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_18)))))) : (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (0LL) : (((((/* implicit */_Bool) arr_19 [3LL] [(short)13] [3LL] [i_5])) ? (arr_2 [(short)0] [18LL]) : (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
