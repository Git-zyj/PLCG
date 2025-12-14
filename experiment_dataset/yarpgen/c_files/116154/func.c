/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116154
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) ((unsigned char) var_7))))) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])) != (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 2] [i_1 + 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((-1947098490) != ((-(((/* implicit */int) arr_12 [i_0] [i_0]))))));
                                var_14 = ((/* implicit */_Bool) max((var_14), (((18446744073709551615ULL) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551598ULL) != (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) & (max((arr_3 [i_1] [i_2] [8]), (((/* implicit */unsigned long long int) 2146435072U))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) -878267433)), (2148532208U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) + (2148532228U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))) / (((((/* implicit */int) (unsigned short)17221)) << (((/* implicit */int) var_7)))))))));
}
