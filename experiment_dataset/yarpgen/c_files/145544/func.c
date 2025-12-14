/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145544
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
    var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))))) ? (var_9) : (((/* implicit */long long int) ((unsigned int) -1652355234555210812LL))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) | (23ULL)))) ? (((/* implicit */long long int) ((int) var_10))) : (((-7926163512817565924LL) ^ (-1652355234555210824LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_11))));
                                var_19 = ((/* implicit */int) (((~(min((((/* implicit */long long int) var_2)), (-9223372036854775796LL))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_2))) != (((/* implicit */int) ((-1652355234555210813LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) var_15)) != (-8160176495804054999LL))))))) ? (((/* implicit */int) min((((unsigned short) (unsigned char)170)), (((/* implicit */unsigned short) ((_Bool) (short)-23466)))))) : ((+(((/* implicit */int) (_Bool)1)))))))));
                                arr_12 [i_0] [i_1 + 3] [i_2] [i_4] [i_4] [i_4] [i_0 - 2] = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)523))) + (var_12))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1199543925U)) || ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_2)), (9223372036854775795LL)))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)67))))))))))))));
                    var_22 = ((/* implicit */long long int) ((int) 1652355234555210801LL));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_7);
    var_24 = ((/* implicit */unsigned char) (+(3485223218U)));
}
