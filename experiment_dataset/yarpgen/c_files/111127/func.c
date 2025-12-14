/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111127
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
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) -455281468191972255LL)), (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((arr_7 [i_0] [i_2] [i_2] [i_3]) * (arr_7 [i_1] [i_2] [i_2] [i_4 + 1])))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2])) << (((((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1])) - (214))))), (((/* implicit */int) ((unsigned short) arr_8 [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2]))))))));
                            var_15 = ((/* implicit */int) ((unsigned short) ((unsigned short) arr_10 [i_1] [i_4 - 2] [i_2] [i_3] [i_4 - 1] [i_3])));
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_4] [i_2] [i_1]))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_1]);
            var_16 += var_10;
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) var_6);
                        var_18 = ((/* implicit */unsigned int) (-((+(arr_4 [i_6 + 2])))));
                        arr_27 [i_0] [i_0] [i_6 + 2] [i_6] [i_0] &= min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1])) && (((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned char) var_8)), (arr_3 [i_6 + 1] [i_6] [i_6]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0]);
        arr_28 [i_0] = var_10;
    }
    var_20 = ((/* implicit */_Bool) var_4);
}
