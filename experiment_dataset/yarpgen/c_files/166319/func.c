/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166319
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) arr_5 [i_0] [i_0] [3LL] [i_0])), ((~(((/* implicit */int) arr_1 [i_0])))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((3008966139U), (((/* implicit */unsigned int) (unsigned short)8073))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((max((((/* implicit */int) arr_8 [i_1] [i_1])), (((((/* implicit */int) var_1)) << (((var_5) - (12636358962950224297ULL))))))) * (((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned char)15] [(unsigned char)15] [7LL])) || (((/* implicit */_Bool) arr_0 [i_0]))))) / (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)243)), ((unsigned short)57315)))))))))));
                        var_14 = ((/* implicit */unsigned int) 1640677737);
                        var_15 &= ((/* implicit */unsigned short) (!((_Bool)1)));
                    }
                    arr_12 [(short)14] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) min((-534930407), (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_2]))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), ((-(min((10996568538121823999ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */_Bool) max((((((((/* implicit */int) (unsigned short)18247)) << (((((/* implicit */int) (unsigned short)8192)) - (8183))))) >> (((var_7) - (2280811921052402668ULL))))), (((((/* implicit */int) ((unsigned short) (unsigned short)15407))) / ((-(((/* implicit */int) var_3))))))));
}
