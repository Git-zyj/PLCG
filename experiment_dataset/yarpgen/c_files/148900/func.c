/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148900
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_11)), (((((((/* implicit */_Bool) (unsigned short)11169)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_10) : (arr_2 [i_0]))))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) -1243335703)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (arr_3 [i_1 - 1] [7ULL]))), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1])))), (max((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = max((((((/* implicit */_Bool) ((long long int) (short)32767))) ? (((/* implicit */unsigned long long int) ((-588874874) & (((/* implicit */int) (short)32767))))) : (var_0))), (max((((unsigned long long int) var_0)), (((arr_1 [(signed char)5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (var_8))))));
                                var_14 += ((/* implicit */unsigned long long int) (_Bool)1);
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [(signed char)0]))))))))), (((((/* implicit */_Bool) arr_3 [i_4 - 2] [i_4])) ? (arr_3 [i_4 - 2] [i_4 - 2]) : (arr_3 [i_4 + 1] [i_4 - 3])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))) < (var_8)));
}
