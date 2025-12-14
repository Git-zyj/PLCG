/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132107
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    var_11 += ((/* implicit */unsigned char) (short)18000);
    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((var_6), (var_6))))) ? (1057271485294624782LL) : ((-(var_4)))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max(((~(((((/* implicit */int) (unsigned char)79)) % (((/* implicit */int) var_8)))))), (((/* implicit */int) ((short) var_1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 += max((((/* implicit */long long int) ((signed char) max((var_5), (((/* implicit */int) var_7)))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)77))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) / (2687897591732632321LL))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)176))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_0))))), (arr_2 [i_1])))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)168)) + (((/* implicit */int) arr_4 [10ULL])))))));
                    arr_8 [i_0] [i_1] [i_2] [4U] = ((/* implicit */unsigned int) arr_4 [i_1]);
                }
                var_16 |= ((max((((((/* implicit */_Bool) var_1)) ? (-5002307519888381984LL) : (((/* implicit */long long int) arr_0 [i_0 - 4] [i_1])))), (var_1))) * (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) arr_0 [(unsigned short)15] [i_1])))))));
            }
        } 
    } 
}
