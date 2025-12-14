/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101760
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min(((((!(arr_8 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)83)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))) : ((~(11477913360058449720ULL))))), (((/* implicit */unsigned long long int) var_8))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11477913360058449742ULL)) ? ((((-(3391188862661180080ULL))) / (((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [i_3 + 3] [i_3 - 2] [i_3 - 2] [i_3 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3 + 3] [i_3] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_9 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7])) >> (((arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [(unsigned short)15] [i_7]) - (7435581777692443568ULL))))))))));
                                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 6968830713651101900ULL))))) >> (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((min((6968830713651101897ULL), (arr_13 [i_0] [i_1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((1921053589063758207ULL) < (arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_2);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11477913360058449715ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13283))) : (var_5)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (var_5)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (4294967291U)))) & (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((var_5) - (4662947303909720486ULL)))))) / (1944020066U))))));
}
