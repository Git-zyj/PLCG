/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109567
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-((-((~(var_4))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) (signed char)-71))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((((signed char) arr_0 [(signed char)12] [i_0 + 2])), (((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1] [(unsigned short)16]))))))));
                        var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [(signed char)14] [i_1] [i_3 - 2])), (arr_4 [i_2])))) ? ((~(((/* implicit */int) arr_7 [(unsigned char)16])))) : (arr_3 [i_0 + 2] [i_0 - 2] [i_3 + 3])))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))))), (arr_4 [i_2])));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (arr_1 [i_1])));
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((max((arr_9 [i_0 - 1]), (((/* implicit */short) arr_8 [i_0] [i_0] [2])))), (((/* implicit */short) arr_8 [i_0 + 1] [i_0 - 2] [i_3 + 2])))))));
                    }
                }
            } 
        } 
    } 
}
