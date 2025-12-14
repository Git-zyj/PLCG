/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1485
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
    var_10 = min((var_9), (var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) var_9);
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((arr_3 [i_1 + 1] [i_0]), ((+(var_6))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((arr_1 [i_1 + 3] [i_1 + 2]), (arr_1 [i_1 + 2] [i_1 + 2]))), (((/* implicit */signed char) var_5))));
            }
        } 
    } 
    var_12 = var_9;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((var_9) & (arr_3 [i_2] [i_2]))))));
        arr_9 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]);
        var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) arr_1 [i_2] [i_2]))))));
        var_15 ^= ((/* implicit */_Bool) arr_7 [i_2]);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_20 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (var_9)));
                        var_16 = ((/* implicit */signed char) arr_3 [i_3] [i_3]);
                    }
                } 
            } 
            arr_21 [(_Bool)0] [i_4] = ((/* implicit */_Bool) arr_13 [i_3] [i_3]);
            arr_22 [i_3] [i_3] = ((/* implicit */short) (+(var_9)));
            var_17 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (var_7))), (((/* implicit */unsigned int) var_3))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(var_9))))));
        }
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (var_9)))) ? ((-(((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1])))) : (((/* implicit */int) arr_8 [(signed char)4]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */_Bool) min(((unsigned char)51), (((/* implicit */unsigned char) (_Bool)0))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0U)))) ? (var_7) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7] [i_7]))) : ((-((+(arr_7 [i_7])))))));
    }
}
