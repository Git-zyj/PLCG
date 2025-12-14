/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174026
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
    var_10 ^= ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)8195))))));
                                var_12 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-9))))), ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [11U] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-9)))), ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) * (((/* implicit */int) ((_Bool) (_Bool)1)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((_Bool) (unsigned char)0)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (_Bool)1))))))) + (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (short)27784)) ? (15673594212360515803ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14629490732382490805ULL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1)))))))));
}
