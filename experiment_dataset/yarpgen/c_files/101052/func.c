/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101052
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((short)2652), ((short)-2647)))), (max((((/* implicit */long long int) (short)-2633)), (-4184739988673053899LL)))))), (max((min((((/* implicit */unsigned long long int) (short)-2633)), (7989455780224596602ULL))), (((/* implicit */unsigned long long int) min(((short)2652), (var_9))))))));
    var_17 += ((/* implicit */_Bool) max((min((max((var_5), (((/* implicit */short) (_Bool)0)))), (min(((short)-17405), (((/* implicit */short) var_7)))))), (min((min((((/* implicit */short) (signed char)71)), ((short)8176))), (((/* implicit */short) min((((/* implicit */signed char) var_3)), (var_8))))))));
    var_18 = ((/* implicit */unsigned short) max((min((min((1240811249339940466LL), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-89)), ((unsigned short)24197)))))), (((/* implicit */long long int) min((min((var_15), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) min(((short)2644), (((/* implicit */short) var_3))))))))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max(((short)-2662), (((/* implicit */short) (signed char)1)))), (min(((short)2662), ((short)2652)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_12)), (var_10)))), (min((((/* implicit */unsigned long long int) var_6)), (17223345429655262277ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)36306)), (17223345429655262277ULL))))));
                        var_21 = min((min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_8)), ((short)-2652)))), (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_11 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) var_7)), ((unsigned short)38613))), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-77)), ((short)2662))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((max((((/* implicit */short) (signed char)1)), (arr_2 [i_0]))), (min((var_1), (((/* implicit */short) (signed char)-71))))))), (max((min((arr_11 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_13 [(unsigned char)14] [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) var_15)))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_4 + 1] &= ((/* implicit */unsigned long long int) min(((unsigned short)53790), (((/* implicit */unsigned short) (unsigned char)255))));
                    }
                    arr_17 [i_0] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min(((unsigned short)47456), (((/* implicit */unsigned short) var_5))))), (min((arr_11 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_0)))))), (min((min((((/* implicit */unsigned long long int) (short)-2632)), (332927591683172187ULL))), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) var_2)))))))));
                }
                var_23 ^= ((/* implicit */short) min((min((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1])), (105553116266496ULL))), (max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (signed char)-71)), (100377277U))), (((/* implicit */unsigned int) max(((short)-2652), (((/* implicit */short) (unsigned char)1))))))))));
            }
        } 
    } 
}
