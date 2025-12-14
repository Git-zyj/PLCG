/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146464
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
    var_13 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 4] [i_0 - 4] [i_2] = min((((/* implicit */unsigned long long int) ((min((arr_5 [(_Bool)1] [i_1] [(short)9]), (arr_5 [i_1] [2U] [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2199023255040LL)) | (arr_1 [i_1 + 3])))) ? ((~(arr_5 [i_0] [i_1] [i_2]))) : (((arr_5 [i_0 - 4] [2ULL] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [3U]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 6; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) (signed char)-87);
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-18870))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] = ((/* implicit */int) (-(min((arr_5 [i_0] [i_0 - 3] [i_0 - 2]), (((/* implicit */unsigned long long int) var_10))))));
                    var_14 = ((/* implicit */unsigned int) max(((signed char)70), ((signed char)-70)));
                }
            } 
        } 
    } 
}
