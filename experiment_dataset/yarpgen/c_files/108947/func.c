/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108947
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6842650617626918070ULL)))))) / (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (((var_11) / (((/* implicit */unsigned long long int) var_6))))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(-905656784)))) ? (((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */unsigned long long int) 1135240301U)) : (13256188532108040080ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_13 [10] [i_2] [i_0] [10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 18446744073709551608ULL))))))));
                            var_18 *= ((/* implicit */unsigned int) (+(max((6842650617626918089ULL), (arr_3 [i_0] [i_0])))));
                            var_19 -= ((((/* implicit */int) max((((/* implicit */short) (signed char)-127)), (var_0)))) / (((/* implicit */int) (unsigned short)13056)));
                            arr_14 [i_0] [i_0] [1ULL] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [(short)4] [i_3]);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 11604093456082633526ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL)));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 4858109802089750421LL)) ? (((/* implicit */int) var_10)) : (var_1))) + (2147483647))) << ((((~(var_11))) - (16566415230358160662ULL)))))) ? ((-(((unsigned long long int) var_13)))) : ((-(var_12)))));
}
