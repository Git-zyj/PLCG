/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181840
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
    var_10 ^= ((/* implicit */short) ((int) ((unsigned int) var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */short) arr_1 [i_1]);
                arr_4 [i_0] = ((/* implicit */unsigned short) (-((+(min((arr_0 [i_0 - 3]), (((/* implicit */unsigned long long int) (unsigned short)37080))))))));
                var_12 = ((/* implicit */int) (~(((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2 - 2]))) + (1520274086U));
                        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2388722637U))));
                        arr_10 [i_0] [i_1] [i_2] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24211))))) && (((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [(unsigned char)19] [i_2 - 4] [i_3])))));
                        var_14 = var_3;
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) (+(var_2)));
                        var_16 = ((/* implicit */unsigned char) arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((4294967287U) >> ((((~(3149555207U))) - (1145412083U))))) << (((unsigned long long int) ((arr_0 [i_6]) <= (((/* implicit */unsigned long long int) arr_6 [i_2])))))));
                                var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0] [i_5] [i_0])), (arr_13 [i_0] [i_0] [i_0])))) ? (var_6) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_2] [i_0])), ((unsigned short)15)))))), (((((((/* implicit */int) (unsigned char)230)) >= (((/* implicit */int) (unsigned char)219)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (unsigned char)244)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872))) <= (5ULL))))))));
                                arr_20 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */unsigned int) var_6)) | (arr_8 [i_0] [i_0] [i_2] [i_2]))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 - 3] [i_1] [i_0]);
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56676)))))) ^ (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))))) <= (((/* implicit */long long int) var_3))));
                }
                var_20 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)45801)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 2])) : (arr_5 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
