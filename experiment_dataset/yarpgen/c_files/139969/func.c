/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139969
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (signed char)-1;
                    var_11 = ((/* implicit */long long int) (unsigned char)191);
                    var_12 = min((var_5), (((/* implicit */long long int) max((min((var_2), (((/* implicit */unsigned int) (signed char)-5)))), (((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-15675)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */short) min((min((12096954257658115761ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (var_6))))));
                var_14 = ((/* implicit */unsigned char) ((long long int) ((signed char) arr_1 [i_3 + 1])));
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((signed char) (signed char)13));
                var_15 = ((/* implicit */unsigned int) ((var_1) | (((/* implicit */unsigned long long int) ((min((1392675613U), (((/* implicit */unsigned int) arr_7 [i_4])))) >> (((arr_2 [i_3 + 2] [i_3 + 2]) - (3574033351U))))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8170826890046555576LL)) || (((/* implicit */_Bool) (unsigned short)65535))))), (((unsigned long long int) ((unsigned char) arr_5 [i_3] [i_3] [i_3] [i_3])))));
                            var_17 *= ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned char) (_Bool)0)), (arr_16 [i_5] [i_5] [i_6]))), (((/* implicit */unsigned char) (signed char)18)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4431099436021317559LL)) || (((/* implicit */_Bool) arr_16 [i_5] [i_3] [i_3 + 1])))))));
                            var_18 *= ((/* implicit */_Bool) min((((unsigned long long int) (signed char)-29)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) & (arr_10 [i_3 + 1] [i_6 - 2] [i_3 + 1]))))));
                            arr_17 [i_6] [i_5] [i_6] = 9223372036854775807LL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = var_7;
}
