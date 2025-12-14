/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1807
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
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) arr_5 [i_0])))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((4294967293U) ^ (((/* implicit */unsigned int) 927290423))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 3] [(unsigned short)0] [i_3 - 3])) ? (((/* implicit */int) arr_6 [i_0] [i_3 - 1] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_3 - 3] [(signed char)5] [(signed char)5]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-32103))))));
                        var_20 -= ((unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_1 [i_5 - 1])), (arr_12 [i_0]))) + (((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */long long int) arr_1 [i_5 + 1])) : (arr_12 [i_0])))));
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((~(((/* implicit */int) var_11)))) >= (((/* implicit */int) ((unsigned char) var_7)))))), (((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_1] [i_2] [i_5 + 1])) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_5])), (arr_5 [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(arr_5 [i_2])));
                            var_24 = ((/* implicit */unsigned int) ((var_8) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))) >= (var_9))))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_0 [i_1])));
                            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4718720235568286827ULL)) ? (3582447524U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56531)))))) ? (((((/* implicit */_Bool) -1500923421)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_6]))) <= (arr_20 [i_6] [i_0] [i_2])))))) >= (max(((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))), ((+(((/* implicit */int) var_12))))))));
                            var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), ((+(arr_20 [i_0] [i_0] [i_2])))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 33553920U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_2])) / (((/* implicit */int) arr_9 [i_1] [i_2] [i_6] [i_8 - 1])))))))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [16U] [(short)16] [i_2] [(short)16] [i_6 + 1] [i_2]) & (arr_16 [(_Bool)1] [i_1] [i_2] [i_2] [i_6 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (max((arr_16 [i_1] [21U] [12U] [19U] [i_6 - 1] [i_6]), (arr_16 [i_0] [i_2] [i_2] [i_2] [i_6 - 1] [i_1])))));
                    }
                }
            } 
        } 
    } 
}
