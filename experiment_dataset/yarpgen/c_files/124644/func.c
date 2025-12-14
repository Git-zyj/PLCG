/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124644
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
    var_15 = ((/* implicit */short) max((max((min((1278055986), (((/* implicit */int) (short)-21623)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) == (var_1)))))), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)17)))) / ((~(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_6 [i_1 - 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) var_6)), (arr_1 [i_0 - 1])));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)17))))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-18)))) | (((/* implicit */int) max((((/* implicit */short) arr_5 [i_1] [i_3] [i_4 + 2])), (arr_13 [i_0] [(unsigned char)6] [i_0] [(unsigned char)6] [i_4] [i_5] [i_5])))))) ^ (((/* implicit */int) max(((signed char)17), (((/* implicit */signed char) (_Bool)0)))))));
                                var_18 = ((/* implicit */_Bool) ((short) min((((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_4 - 1] [i_1])), ((short)21623)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_0 - 1] [i_0 - 1]))) : (1548161025331128789LL)))));
            }
        } 
    } 
}
