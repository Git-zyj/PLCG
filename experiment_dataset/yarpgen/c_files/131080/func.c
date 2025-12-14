/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131080
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (min((9223372036854775807LL), (9223372036854775807LL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_2 + 3] [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2 + 3] [7ULL] [i_1 - 3])))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (signed char)51)), (9326791670081669143ULL)))));
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1] [i_1 - 3] [i_0 + 1]))) <= (var_2)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */int) var_1);
                        var_20 = ((signed char) max((arr_3 [i_0 - 1] [i_2 - 1]), (arr_3 [i_0 - 1] [i_2 + 2])));
                        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) 1756916646U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1]))))), (((/* implicit */long long int) arr_14 [i_0 - 1]))));
                    }
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (unsigned char)255))))))));
                        var_23 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -9223372036854775807LL)), (9326791670081669143ULL)));
                    }
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) max((var_4), ((unsigned short)2198)))))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), ((unsigned char)215))))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))) >= ((-(var_7))))))));
    var_26 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-431209289)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0)))))))));
}
