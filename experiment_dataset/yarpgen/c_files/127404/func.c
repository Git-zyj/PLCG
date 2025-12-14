/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127404
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
    var_16 = ((/* implicit */_Bool) min((min(((~(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), (8174927672616387723LL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((((((~(8174927672616387706LL))) ^ ((~(var_12))))) + (9223372036854775807LL))) << (((((((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [13LL] [i_4])) ? (var_12) : (8174927672616387713LL)))) + (1624269325))) - (40))))))));
                            var_18 = ((/* implicit */short) min((min((((/* implicit */long long int) ((int) arr_8 [i_0] [i_3]))), (((long long int) arr_1 [i_3])))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (signed char)28))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) var_5);
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4029042774U)) ? (var_0) : (-1053542156))))))), (((arr_16 [i_0 + 2] [i_0 + 2] [i_2] [i_3] [i_5]) ? (((/* implicit */int) min(((unsigned short)63715), (((/* implicit */unsigned short) arr_16 [i_5] [i_5] [(unsigned char)19] [i_5] [(unsigned char)17]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 134217727)))))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 33554431)))) / (arr_13 [i_0 - 1] [17LL] [i_1 - 1] [i_1] [(_Bool)1] [i_1] [i_3 - 3])))) ? (((/* implicit */unsigned long long int) ((int) (short)15))) : (min((4ULL), (arr_14 [i_0 + 1] [i_0 + 2] [(short)17] [i_1 + 2] [i_3] [i_3 + 4])))));
                    }
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+((+(max((((/* implicit */unsigned int) (signed char)-51)), (17U))))))))));
                }
            } 
        } 
    } 
}
