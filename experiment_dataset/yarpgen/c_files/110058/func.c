/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110058
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
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
    var_12 = ((/* implicit */unsigned int) (+(min((min((((/* implicit */int) var_4)), (var_9))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)992))) < (var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) -8);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (arr_8 [i_0] [i_0] [i_0]))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_8)) | (var_9))) - (1132770287)))))) ? ((+(((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_3] [i_3])))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_2] [i_3]))))));
                                arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 8)) % (8587465192501335451LL)))) && ((!(((/* implicit */_Bool) -1598063448))))));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((arr_12 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) var_5))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_5] = arr_8 [i_1] [i_2] [i_2];
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(arr_9 [i_2] [i_5 - 2] [2LL] [i_5 - 2] [i_5] [i_5 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
}
