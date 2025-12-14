/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134348
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(2078098265698126989ULL))));
        arr_3 [i_0] [i_0] = var_1;
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((_Bool) min((var_3), ((unsigned char)24))));
                                var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)127)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 9223372036854775784LL)) ? (arr_9 [i_3]) : (((/* implicit */int) arr_12 [i_1] [i_2 - 1]))))))) : (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_10))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) (((~(var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)2] [i_1] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), ((((_Bool)1) ? (var_12) : (((/* implicit */long long int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) var_9)) : (((int) var_8))))) : (var_10))))));
}
