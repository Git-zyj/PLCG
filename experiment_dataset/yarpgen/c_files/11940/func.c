/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11940
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
    for (short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (signed char)113))), (((((/* implicit */_Bool) (unsigned short)31809)) ? (((/* implicit */int) (signed char)-35)) : (-1023185705)))))), (min((((/* implicit */long long int) (unsigned char)248)), (-7531831302557210010LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min(((((_Bool)0) ? (-6892778774646160446LL) : (((/* implicit */long long int) arr_3 [i_0] [i_0 - 1])))), (((/* implicit */long long int) (-(arr_3 [i_0] [i_0]))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 4]))) != (min((arr_4 [i_0] [i_0 - 1]), (((/* implicit */long long int) arr_0 [i_0] [i_0 + 1]))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1080863910568919040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 8190LL)) ? (8190LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5727)))))));
}
