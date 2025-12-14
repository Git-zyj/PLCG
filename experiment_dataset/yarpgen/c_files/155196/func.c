/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155196
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) max((min((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) ^ (((/* implicit */int) (short)15603)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [(_Bool)1] [i_2])), (arr_3 [i_1] [i_1])))))), (min((65535), (((/* implicit */int) arr_1 [i_1 - 1]))))));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_12 [i_0] [i_1]))));
                                arr_15 [i_0] [i_2] [i_2] [(signed char)0] [i_4 + 1] [i_2] = arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4];
                                var_14 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_5 [i_3] [i_3] [i_2] [i_3])))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 - 1] [i_4 + 1])))))) : ((+(881505683985932504LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5])) | (((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_0])))) * ((-(((/* implicit */int) (signed char)-110)))))))));
                        var_17 *= ((/* implicit */unsigned int) 2576602485584945724LL);
                        var_18 = arr_12 [i_2] [i_5 - 2];
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned short) var_9));
    var_20 &= ((/* implicit */long long int) (_Bool)1);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (-268172147) : (2130706432)))))), (((var_11) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58872))) : (var_7))))))))));
}
