/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126584
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
    var_13 = ((/* implicit */unsigned long long int) ((-6727149112101335451LL) >= (6727149112101335451LL)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */unsigned long long int) 6727149112101335448LL)) : ((~(var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((~(16278359742318660444ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned char)8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6727149112101335451LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) ((arr_2 [i_0] [i_1]) < (arr_2 [16] [i_1])))) + (arr_2 [i_0] [i_1]))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [12]);
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (24ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) & (arr_0 [i_1])))))) - (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) 4227858432U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6727149112101335448LL)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)38792))))) : (1596559930U));
                            var_16 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) max((arr_8 [(unsigned short)6] [i_1] [i_2 - 1] [i_1] [i_3] [i_2 - 1]), (((/* implicit */short) arr_9 [(unsigned short)10]))))), (((4274096889U) / (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(short)8] [(_Bool)1] [(unsigned char)4] [(short)8])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 2] [15LL])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)0)))))));
                            var_17 ^= max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(short)3] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) : (-6727149112101335449LL))))), (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2] [i_2 - 1] [(signed char)0] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */unsigned long long int) min((6727149112101335448LL), (((/* implicit */long long int) (signed char)-125))))) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (24ULL))))));
                            var_18 = ((/* implicit */unsigned long long int) ((min((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 + 1]), (arr_7 [i_3 - 2] [12] [i_2] [i_2 + 2]))) * (((/* implicit */int) (((-(arr_10 [i_0] [i_0] [i_1] [(unsigned short)8] [i_2] [i_3 - 1]))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-102)) < (((/* implicit */int) (unsigned char)28))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned char) var_11);
}
