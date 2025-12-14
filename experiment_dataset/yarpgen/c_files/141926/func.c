/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141926
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_4)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))))))) : (((((/* implicit */_Bool) var_1)) ? ((-(var_11))) : (((/* implicit */unsigned long long int) max((var_15), (var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = (+(((((/* implicit */_Bool) max(((unsigned char)99), (var_9)))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 2]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [(unsigned short)0])) * (((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) ? (arr_9 [i_3] [i_1] [(unsigned char)14]) : (((/* implicit */unsigned long long int) -1433419266264878855LL))))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_3] [i_1])), (arr_6 [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_3])))) ? (max((((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (arr_9 [i_1 + 1] [i_2] [11LL]))), (((/* implicit */unsigned long long int) (+(arr_8 [i_0] [(_Bool)1] [i_1] [i_2] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))));
                            var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0] [i_0])), (((((arr_7 [i_2]) ? (arr_8 [i_0] [i_1 + 2] [i_2] [i_2] [i_3]) : (((/* implicit */int) arr_7 [i_2])))) | (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) arr_0 [(unsigned char)10] [i_1 + 1])) : (((/* implicit */int) var_7))))))));
                            var_20 = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_2])), ((signed char)-74))))) : (min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1] [16ULL])))))) << (((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]) + (668848574)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_2])), ((signed char)-74))))) : (min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1] [16ULL])))))) << (((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]) + (668848574))) - (167696556))))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (unsigned char)243)) : (arr_4 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (3940904528087913408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1]))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(unsigned char)10] [i_1 + 1])) ? (arr_4 [i_1]) : (arr_8 [i_0] [i_1] [i_0] [(signed char)14] [i_0])))) ? (max((((/* implicit */int) var_0)), (var_4))) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_0])), (arr_2 [i_0] [i_1])))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_8 [i_0] [i_0] [i_0] [(signed char)14] [i_0]) <= (var_4))))));
            }
        } 
    } 
}
