/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178120
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */short) var_5);
                            var_20 &= ((/* implicit */unsigned int) arr_11 [6ULL] [i_1 - 3] [i_1 - 3] [i_1 + 1] [(short)2] [i_1 - 2] [i_1 + 1]);
                        }
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) (~(arr_0 [i_1 - 3] [i_1 - 2]))));
                        arr_12 [i_1] [4] = ((((/* implicit */_Bool) ((arr_0 [i_1 - 1] [(_Bool)1]) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16))))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) (unsigned short)65512)), (arr_6 [i_1] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        arr_13 [(unsigned short)3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((signed char) arr_4 [i_0] [i_0] [i_0])), (((/* implicit */signed char) (_Bool)1)))))));
                    }
                    arr_14 [i_1] [(unsigned char)8] [5ULL] [i_1 - 3] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((int) 208811882))))) == (((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [0U] [i_1] [i_0] [(unsigned short)4]))) % (arr_6 [i_1] [4] [(unsigned char)0]))) << (((((/* implicit */int) ((signed char) (short)-16539))) - (72)))))));
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_7 [i_2] [i_0] [i_1 + 1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_8)))))))), (((arr_0 [i_1 - 2] [i_1 - 3]) ^ (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1] [i_1 - 3]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_7);
    var_24 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) << (((((162295395) * (((/* implicit */int) (_Bool)1)))) - (162295393)))));
}
