/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144901
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((long long int) 1995119501U)) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)119)), (var_14))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_0] [i_1]), (arr_1 [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_10 [i_0] [10LL] [(unsigned short)1] [(short)10] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (~(269943672U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (3803423038U))));
                        var_19 = ((/* implicit */unsigned short) (+((-(arr_9 [(signed char)8] [i_2] [i_2 - 2] [i_2])))));
                    }
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [(signed char)10] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) != (arr_12 [i_2 - 2] [i_2] [7] [i_2 - 2] [i_2]))))));
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((arr_1 [i_2 + 1] [i_2 - 2]) << (((-6180819933815175825LL) + (6180819933815175825LL))))) : (arr_1 [i_2 - 2] [i_2 - 3])));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((max((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)5282)), (arr_0 [i_4] [i_4])))))), (((/* implicit */unsigned int) min((var_4), (max((((/* implicit */short) var_2)), (var_4)))))))))));
                        arr_16 [i_0] [i_1] [i_1] [(signed char)7] [i_4] = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (signed char)119)))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [(short)5] [i_2] [i_5] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((arr_2 [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (min((564184171U), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned int) (short)-23379))));
                        arr_20 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_1 [i_2 + 1] [i_2 - 3]) ^ (((/* implicit */int) (short)23378))))) == (min((((/* implicit */long long int) max((((/* implicit */int) arr_7 [(unsigned short)4] [(unsigned short)9] [i_1] [7LL])), (var_12)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_14 [i_0] [4LL] [i_0] [1] [i_0]) : (((/* implicit */long long int) var_3))))))));
                        var_22 = ((/* implicit */long long int) (+(272830587U)));
                    }
                    var_23 = ((/* implicit */unsigned int) (signed char)-119);
                }
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_0] [5])) ? (arr_0 [2] [i_0]) : ((~(var_10)))))) ? (((/* implicit */int) (short)-31003)) : (((((/* implicit */int) (short)-23375)) | (((/* implicit */int) max(((short)23378), ((short)-31003))))))));
                arr_22 [7U] = ((/* implicit */signed char) max((((arr_2 [i_1]) * (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) var_7))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_2);
}
