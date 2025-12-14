/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127945
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)26677))))), (((min((((/* implicit */unsigned long long int) 4294967295U)), (6124411629460578082ULL))) << (((/* implicit */int) ((0U) != (4128905436U))))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 7879703729218525695LL)), (536869888ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) : ((+(((/* implicit */int) (unsigned short)52669))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_13);
    var_18 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) var_11))));
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) (signed char)-94))))) ? (536869907ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) ((846670935U) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_6 [i_2]);
                                arr_24 [i_6] [i_5] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2253945074476951891LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_4] [i_5]))) : (arr_21 [i_3] [i_4] [i_6]))))))) && (((/* implicit */_Bool) (+(var_12))))));
                                var_22 = ((/* implicit */unsigned long long int) (short)-5190);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
