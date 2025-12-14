/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171979
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2] [i_1 - 3]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1]))) : (((/* implicit */int) ((short) min((arr_1 [i_1]), (((/* implicit */unsigned short) arr_0 [i_1 + 2]))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [0ULL] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_7 [i_0]))))) / (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), (var_5)))))))));
                                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned char)233)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1 - 3])), ((unsigned short)25427))))));
                                var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1 + 2] [i_2] [i_4] [i_0])))))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_5 + 1] [i_9 + 3] [i_7]))))), (var_4)));
                                var_17 *= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)25442)) == (((/* implicit */int) (unsigned short)25433)))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (6992633477440631721LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (6992633477440631724LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40113)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_34 [i_6] = ((/* implicit */unsigned short) (+((((~(((/* implicit */int) (unsigned short)40112)))) | (((/* implicit */int) min((var_9), (var_9))))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6992633477440631721LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) > (((/* implicit */int) ((short) 6992633477440631721LL))))))) : ((-(-6992633477440631705LL)))));
                            var_18 -= ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_35 [i_5] [i_6] [i_7] [i_10] [i_10] [i_11]))))) | (arr_33 [i_10] [i_7] [i_7 - 3] [i_7] [i_7] [i_7])))));
                        }
                        var_19 -= ((/* implicit */long long int) var_0);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_10);
}
