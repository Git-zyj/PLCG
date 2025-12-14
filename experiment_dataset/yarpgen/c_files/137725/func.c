/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137725
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
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */unsigned int) ((long long int) (unsigned short)20515));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) (unsigned short)55019))))) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (8672961520956806714LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))) : (((/* implicit */long long int) ((((arr_4 [i_0]) ? (4294967295U) : (arr_1 [i_0]))) << (((/* implicit */int) ((unsigned char) arr_2 [i_1])))))));
                var_14 = ((/* implicit */unsigned int) ((4294967291U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((8170466564584133356LL) != (1037179301852656250LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) (~(0U)))))))));
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 592951296U)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13117)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (arr_1 [i_0 - 1]))))))) ? (((((arr_10 [i_3] [i_3] [i_3] [5U] [(unsigned short)2] [6LL]) ? (((/* implicit */long long int) 1732065878)) : (17591649173504LL))) + (8346291703797147717LL))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> ((((~(arr_1 [i_0]))) - (4125760686U)))))));
                            arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) 1022926184U)))) ? ((((!((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1116357952U)) || (((/* implicit */_Bool) 4051866472U))))))) : (((/* implicit */int) (!((((_Bool)0) && (((/* implicit */_Bool) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (_Bool)1)))))) * (((((/* implicit */_Bool) -1253071799)) ? (((/* implicit */long long int) var_7)) : (var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((2147483647) % (((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (_Bool)1))))))))));
}
