/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124435
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((max((((/* implicit */unsigned int) min((arr_4 [i_0] [4] [i_0]), (((/* implicit */short) arr_2 [14U]))))), (min((3695304195U), (((/* implicit */unsigned int) (unsigned char)29)))))), (((/* implicit */unsigned int) min((16383), (((/* implicit */int) (unsigned char)13))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (arr_3 [i_2])))), (max((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)49341)))))), (((/* implicit */unsigned int) min((((/* implicit */int) max(((_Bool)0), ((_Bool)0)))), (max((arr_6 [i_0] [i_1] [i_1] [i_1]), (arr_3 [i_0]))))))));
                    var_17 = ((/* implicit */short) min((max((max((var_11), (4294967291U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)19734)))))), (max((min((1351185768U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-1))))))));
                    var_18 ^= ((/* implicit */_Bool) max((min((min((((/* implicit */int) (_Bool)1)), (16776192))), (max((arr_3 [i_2]), (((/* implicit */int) var_8)))))), (((/* implicit */int) min((((/* implicit */short) max(((unsigned char)38), ((unsigned char)8)))), (max((var_3), (((/* implicit */short) (_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned char) min((120578855U), (min((max((1486782122U), (4294967295U))), (max((5U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    arr_7 [i_0] [i_0] [i_2] = max((min((max((arr_0 [i_0] [9ULL]), (((/* implicit */unsigned int) var_13)))), (max((4294967275U), (((/* implicit */unsigned int) var_4)))))), (min((8388604U), (((/* implicit */unsigned int) (_Bool)1)))));
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    var_20 += ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)30)), (max(((unsigned short)16195), (((/* implicit */unsigned short) (_Bool)1))))))), (max((((/* implicit */unsigned int) 0)), (67107840U)))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (min((min((max((((/* implicit */unsigned int) arr_3 [i_0])), (arr_9 [i_0] [i_1]))), (max((1885822185U), (((/* implicit */unsigned int) arr_3 [i_0])))))), (max((min((((/* implicit */unsigned int) arr_2 [(unsigned char)10])), (4286578691U))), (((/* implicit */unsigned int) max((2147483647), (-967169253))))))))));
                }
                for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */int) min((max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (1668152431)))), (max((var_12), (2646395019U))))), (max((4294967268U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_14 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)25)), (min((((/* implicit */unsigned int) (unsigned char)15)), (1284935805U)))));
                    arr_15 [i_0] [i_1] [i_0] = min((4286578691U), (((/* implicit */unsigned int) (short)32440)));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned int) -268435456)), (var_12))), (max((((/* implicit */unsigned int) (short)-11380)), (4294967294U))))), (max((min((((/* implicit */unsigned int) var_5)), (var_0))), (min((((/* implicit */unsigned int) var_4)), (var_7)))))));
}
