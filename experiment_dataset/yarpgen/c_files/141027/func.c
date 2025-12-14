/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141027
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_3 [i_0] [i_0 - 3]) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 3])) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_21 = ((/* implicit */short) (!(arr_11 [i_0 + 3] [i_1] [i_2] [i_3 + 2] [i_4])));
                        }
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))) : (var_2)));
                            var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -2046727660)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 3]))));
                        }
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)1))) ^ ((~(((/* implicit */int) (unsigned char)0)))))))));
                    }
                } 
            } 
        } 
        var_25 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0 + 3] [(_Bool)1] [i_0] [i_0] [(unsigned char)6] [i_0] [i_0 + 1]))));
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_24 [i_6 + 1] [i_6 + 1] [i_8] &= ((/* implicit */unsigned short) ((signed char) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)58)))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_22 [i_6] [i_6] [i_7] [15]))));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_4))));
                }
            } 
        } 
    } 
}
