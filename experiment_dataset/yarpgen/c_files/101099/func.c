/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101099
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : ((~(((/* implicit */int) ((arr_8 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)8] [(unsigned char)8] [i_0]))))))))));
                        var_10 = ((/* implicit */int) max((max((min((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_1] [i_1])))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((max((arr_7 [i_1]), (((/* implicit */unsigned int) var_9)))), (arr_11 [i_0] [i_0] [i_3] [i_3] [i_0]))))));
                        arr_13 [i_0] [i_0] [i_2] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (max((((/* implicit */unsigned int) (unsigned char)52)), (arr_7 [i_0])))))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)204))))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */_Bool) ((7162711539346390590ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    var_12 = ((/* implicit */unsigned char) max((min((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)199)))), (((/* implicit */int) var_4)))))));
}
