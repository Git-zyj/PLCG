/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124893
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [8ULL] [8ULL]))))));
                        var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_5 [i_0] [i_3 - 1] [i_3] [i_3 - 2])) ^ ((-(3883407503351099267LL))))) % (((/* implicit */long long int) var_4))));
                        arr_9 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) 18U);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(short)0] [i_4 + 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_4 + 1] [i_3 - 2] [i_0])));
                            var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4 + 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 + 1])) : (arr_7 [i_4] [i_4 - 1] [i_3 - 2] [i_3 - 1])));
                            arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)9807))) == ((~(arr_6 [i_0] [i_0])))));
                        }
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [6ULL] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) min((arr_5 [i_0] [i_1] [(_Bool)1] [(unsigned short)6]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3658601406U)) || (((((/* implicit */_Bool) (short)-9821)) && (((/* implicit */_Bool) (signed char)-97)))))))));
                            arr_18 [i_5] [8] [i_2] [10U] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [10] [i_0] [5ULL] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_5] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_0]))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) (signed char)102)) || (((/* implicit */_Bool) (short)-9826))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(745559423U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [(signed char)0] [6ULL])) - (47823))))) : (((/* implicit */int) (short)-10))))) : ((~(arr_8 [i_0] [i_5] [i_0] [8LL] [i_0] [i_3])))));
                        }
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((var_13) * (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)10] [(_Bool)1])))))))));
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (3064641811375998106LL))))))));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45792)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)0))))) : (4063889347U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (231077948U)));
    var_24 = ((/* implicit */unsigned char) (short)1775);
}
