/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107859
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
    var_12 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_8))))))), (max(((~(((/* implicit */int) (short)13060)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_11)))))))));
    var_13 = (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))), ((+(var_2))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) max((min((-8347749155619759073LL), (((/* implicit */long long int) (unsigned char)134)))), (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned char)168), ((unsigned char)144)))))))));
                        var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)255)), (arr_5 [i_0] [i_0] [i_0]))), ((+(((/* implicit */int) var_1)))))))));
                        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_3 [i_0]))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-15698))))), ((-(arr_6 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3])))))));
                        var_18 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((max((var_7), ((unsigned char)135))), (min((arr_3 [i_0]), (var_7)))))), (max((min((((/* implicit */unsigned short) var_9)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned short) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */short) (unsigned char)118)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_19 *= ((/* implicit */short) min(((-(((/* implicit */int) max((arr_3 [i_4 + 1]), (((/* implicit */unsigned char) var_11))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_4])), (arr_10 [i_5] [i_6])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_23 [i_4] = min((((/* implicit */unsigned char) (signed char)61)), ((unsigned char)121));
                                arr_24 [i_4] [i_4] [i_6] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))))));
                            }
                        } 
                    } 
                    arr_25 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_5)), (arr_14 [i_4] [i_4] [i_4]))))))));
                }
                var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), ((+(arr_9 [(unsigned char)18]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_7 [i_4] [i_5 - 2] [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_37 [i_4 - 1] [i_5] [i_4] [i_4 - 1] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_11])))))));
                                arr_38 [5] [i_4] [5] [i_10 - 1] [i_11] [i_10 - 1] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-23)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
