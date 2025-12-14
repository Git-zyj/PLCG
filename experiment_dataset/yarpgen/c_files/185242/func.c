/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185242
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 0)) % (((6250645594356481859LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))))) || (((_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-11417))))));
    var_19 = var_0;
    var_20 = ((/* implicit */int) min((var_20), (max((((((/* implicit */int) var_13)) * (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)24))))));
    var_21 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) var_15);
                    var_22 = ((/* implicit */unsigned long long int) (unsigned char)157);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [5LL] [i_3] [i_0] = (~(8116219977194944965ULL));
                                var_23 = ((/* implicit */signed char) var_8);
                                var_24 *= ((/* implicit */unsigned int) (-(9270299292927582249ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
                                var_26 = ((/* implicit */unsigned long long int) ((2098720534994250270ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_27 *= ((/* implicit */short) (+(((/* implicit */int) arr_19 [(signed char)10] [i_1] [i_1] [i_1] [i_5] [10] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
