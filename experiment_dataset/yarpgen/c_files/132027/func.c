/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132027
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
    var_10 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((8ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74)))))) | (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)11285)))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)238)), (1478881182)))) > (3431345130526595139ULL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 = min(((unsigned short)65535), ((unsigned short)65535));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (arr_0 [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] [i_2] [12U] = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)158))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-112))))) : ((~(((/* implicit */int) (unsigned short)24))))))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_7 [(unsigned char)8] [i_2] [i_0 - 1] [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((10206219309541606043ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))), ((unsigned char)37)))) : (max((2147483647), (((/* implicit */int) (short)-9124))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_1] [(signed char)4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) | (-2147483637)));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * ((~(9060101363314755147LL))))));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)232)) + (((/* implicit */int) (signed char)125))))))));
}
