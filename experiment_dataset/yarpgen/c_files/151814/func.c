/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151814
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)48536)) > (((/* implicit */unsigned long long int) ((int) (unsigned short)48536))))))) : (((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_3])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_4 [6ULL] [i_1 - 1] [6ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)3840)) || (((/* implicit */_Bool) (unsigned short)17015)))))))))))));
                            var_11 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */long long int) 1)) != (var_3))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)48511)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_9))))) ? (((unsigned int) (unsigned short)16999)) : (((/* implicit */unsigned int) ((int) 5938510836526150568ULL)))))));
                                arr_20 [8LL] [10ULL] [i_1] [i_1] [10ULL] = ((/* implicit */short) min((12508233237183401054ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (((((/* implicit */_Bool) -8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48536))) : (var_4)))))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5938510836526150562ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3554608236U)))), (max((((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 30438128)) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_7))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_6);
}
