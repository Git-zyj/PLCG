/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155030
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
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) var_1);
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) max((arr_8 [i_0 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_4]), (arr_8 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [1LL]))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 1467334692U))));
                                var_15 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)146))))), (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (5992878769807462255ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((~(arr_6 [i_4] [i_3] [i_2] [(_Bool)1]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) 2827632626U))), (min((min((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */signed char) min((arr_22 [i_5] [7ULL]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0 - 3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_18 = 4294967295U;
                            var_19 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_10)));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9416))) : (arr_0 [i_8] [i_1])))), (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))))), (((/* implicit */unsigned long long int) min((556134385U), (arr_0 [i_0 - 2] [i_1 + 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_1))));
}
