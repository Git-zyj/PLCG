/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125739
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [(signed char)6] = ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)7)) + ((-2147483647 - 1)))) >= (((/* implicit */int) ((483158349U) != (((/* implicit */unsigned int) -1421858221)))))))) + (((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (signed char)-124))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) <= (1469380866U)))))));
                    arr_11 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((arr_1 [i_0] [i_0]) ^ (arr_7 [i_2] [i_2] [i_2] [i_2]))) ^ (((/* implicit */unsigned int) ((var_15) ^ (((/* implicit */int) (unsigned short)65331))))))) | (((((arr_6 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [5U] [(signed char)4]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(unsigned short)6])) & (var_5))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((3183265339U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)101)) > (var_15)))) != (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_14))))))))));
}
