/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123680
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2735)) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_2]))) : (((/* implicit */long long int) ((unsigned int) (signed char)69)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28436)) ? (max((((/* implicit */unsigned int) (unsigned char)17)), (7936U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))) == (4294959360U))))))))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) ((int) arr_3 [(unsigned char)8] [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)-46)))))))));
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (arr_6 [1] [1] [i_2] [i_1])))) % ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_1] [i_2]))))) == (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned char)255), ((unsigned char)239)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_0] [i_4] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (-5977007959060629553LL)));
                                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607U)) ? (((/* implicit */unsigned long long int) arr_11 [(unsigned char)4] [i_2] [4U] [i_0])) : (8108151465113083045ULL)))) ? (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_5 [i_1] [i_1] [i_0]))) : (max((7299621318494158566ULL), (((/* implicit */unsigned long long int) arr_0 [i_3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)17)) % (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = 4294959360U;
}
