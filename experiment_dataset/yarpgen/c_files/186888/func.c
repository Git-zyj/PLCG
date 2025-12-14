/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186888
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) var_6))), (max((var_4), (((/* implicit */long long int) (signed char)-62))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) + (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [7ULL] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1514542549U)) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_1)))));
                arr_6 [(unsigned short)10] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_11)) >= (max((((/* implicit */unsigned long long int) var_8)), (var_5))))), ((!(((/* implicit */_Bool) var_3))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1] [i_3] [i_4 - 1])) | (((/* implicit */int) var_7)))), (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    arr_13 [i_3] [(unsigned short)9] [i_3] [i_3] = ((/* implicit */unsigned short) (signed char)-62);
                    arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_9)) < (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8658)))))) : (var_8)))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [13U] [i_3]))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))))))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) (signed char)62)))))))));
                }
            } 
        } 
    } 
}
