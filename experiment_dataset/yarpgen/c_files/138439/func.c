/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138439
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 2]))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 4] [i_0 + 1])));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_0 + 4] [i_0 + 4])) ^ (((((/* implicit */long long int) arr_0 [i_0 + 3] [i_0])) | (var_8)))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_4] [i_3])))), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_3] [i_4])) : (((/* implicit */int) (short)4300)))), ((+(((/* implicit */int) (unsigned char)179))))))));
                            arr_13 [i_1] [i_4] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_11 [4U] [i_1] [i_2] [i_3] [i_4]))))) : (((/* implicit */int) (short)3036)))), ((~(((/* implicit */int) (unsigned char)240))))));
                            arr_14 [(short)9] [i_4] [i_3] [i_4] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) 1994396881030140588ULL)) ? (-1752491839) : (((/* implicit */int) (unsigned char)192)))) + (1752491847)))))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])), (arr_10 [i_1] [i_2] [i_1]))), (min((((/* implicit */unsigned long long int) ((var_5) && (((/* implicit */_Bool) arr_10 [i_2] [4] [4]))))), (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned long long int) 1337182829U)) : (4770082839026668544ULL)))))));
            }
        } 
    } 
    var_18 = (-(((max((((/* implicit */long long int) (unsigned char)11)), (var_0))) & (((long long int) var_10)))));
}
