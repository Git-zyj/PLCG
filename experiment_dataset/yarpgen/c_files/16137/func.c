/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16137
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [8U] [i_0] [i_1] = ((/* implicit */unsigned int) (!(arr_7 [(_Bool)1] [i_0] [i_1] [i_2 + 1])));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) (signed char)-74));
                }
            } 
        } 
        arr_11 [1] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_14 [(unsigned char)11] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [(_Bool)1])), (4294967295U)))) && (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_13 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : ((~(var_8)))));
        var_15 = ((unsigned short) max((arr_13 [i_3]), (arr_13 [i_3])));
        arr_15 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), (var_4)));
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_3]))))) <= ((((-(var_14))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1546793581)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_3])))))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        arr_27 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_6])), (arr_17 [i_3] [i_3]))))) : (min((arr_25 [i_3] [i_3] [i_4]), (((/* implicit */unsigned long long int) var_4))))));
                        var_16 = ((/* implicit */unsigned int) ((max((var_8), (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
                        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) == (var_14))))) : (max((arr_25 [i_3] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_12 [i_3]))))))));
                        arr_28 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_20 [i_6] [i_3])))), (((((/* implicit */int) ((signed char) (unsigned char)77))) >> ((((+(((/* implicit */int) arr_22 [i_3] [i_3])))) + (31788)))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6] [i_3])) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5295)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_3]))) : (4294967295U)))) : (arr_23 [i_3]))) < (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_4])) || (((/* implicit */_Bool) arr_26 [i_3] [i_4] [i_4] [i_4] [i_4] [i_6]))))) << (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) var_2);
}
