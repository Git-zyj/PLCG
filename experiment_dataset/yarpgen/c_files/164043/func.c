/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164043
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
    var_13 = ((/* implicit */long long int) max((((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64714)))))) : (min((var_3), (((/* implicit */unsigned long long int) var_1)))))), (min((min((10754430083536424624ULL), (var_0))), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_4 [i_0] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_6)) + (62))) - (7)))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 9598618126679046777ULL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_5 [i_0] [i_1]))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((int) arr_5 [i_0] [i_2])))))) : ((-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (-1LL))))))))));
                        }
                    } 
                } 
                var_17 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_6)))) == (((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)-99)))));
}
