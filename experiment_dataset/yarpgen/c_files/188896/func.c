/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188896
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = (+(((/* implicit */int) (signed char)75)));
                var_14 = ((/* implicit */unsigned long long int) (short)-32763);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_15 = ((var_2) + (((/* implicit */long long int) (~(arr_1 [i_3] [i_1])))));
                            var_16 = ((/* implicit */unsigned char) ((var_4) ^ (((/* implicit */unsigned long long int) arr_1 [i_2] [i_0]))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32746))) : (var_7)))) ? (((unsigned int) arr_3 [i_1])) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2])))))))) ? (((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (4196882146754869731LL) : (((/* implicit */long long int) 4158248536U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-5048))))) ? (((unsigned long long int) arr_5 [i_1] [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7761546765216232362ULL)) ? (arr_5 [i_3] [i_1] [i_0]) : (arr_5 [i_1] [i_2] [i_3])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((unsigned long long int) (signed char)-7)) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) % ((+(arr_5 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)0)) ? (137438953471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))))) : (((/* implicit */int) ((max((((/* implicit */long long int) var_8)), (var_2))) <= (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-14))))))))));
}
