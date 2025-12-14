/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170965
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [17ULL] = ((/* implicit */long long int) ((min((((unsigned int) arr_3 [i_1])), (min((var_3), (2887033889U))))) & ((~(((unsigned int) var_3))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) -3265379970309974178LL)) | (18446744073709551601ULL)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 24ULL)) ? (18446744073709551577ULL) : (1934233413334037466ULL)));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) var_6)) | (var_11))))))));
                    }
                }
            }
        } 
    } 
    var_22 += min(((-(max((((/* implicit */unsigned long long int) var_18)), (var_15))))), ((-(min((var_15), (((/* implicit */unsigned long long int) var_18)))))));
    var_23 = ((/* implicit */int) 1934233413334037473ULL);
}
