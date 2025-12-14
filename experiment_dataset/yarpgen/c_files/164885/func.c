/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164885
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (13767100538060323723ULL))))), (max((((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (0ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-28))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_1] [i_1])))) & (min((((/* implicit */int) (short)-32760)), (1037031661)))))) ? (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) arr_4 [3ULL] [i_1] [i_2])))), ((~(1037031680))))) : ((+(((/* implicit */int) (short)-32759))))));
                            arr_9 [i_3] = ((/* implicit */long long int) (short)24);
                            arr_10 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_3] [i_2] [(signed char)7] [4LL])) ? (10135514032511714558ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32760))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((11372961385344523688ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13757)))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [15ULL])) ? (((/* implicit */int) ((2002857772) != (((/* implicit */int) (short)-32760))))) : (((/* implicit */int) ((signed char) 10135514032511714558ULL)))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_18 [i_4] [2ULL] [i_4] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)19293)), (3986429535799670453LL)));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29296)) ? (((/* implicit */int) (unsigned short)55217)) : (-1))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5] [i_5 + 3] [i_5] [i_5] [i_5 + 3])) | ((-(((/* implicit */int) (signed char)56)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
