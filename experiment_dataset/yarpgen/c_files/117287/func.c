/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117287
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
    var_10 = ((/* implicit */signed char) ((unsigned long long int) -2017332945));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_11 = ((_Bool) (-(((/* implicit */int) (unsigned char)156))));
                            var_12 *= ((/* implicit */signed char) ((unsigned int) ((int) max((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_2] [i_0 + 1] [i_2])))));
                            var_13 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58237))) & (17016475157061322377ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1797802U)))))) >= (((/* implicit */unsigned long long int) min(((~(arr_10 [i_0 + 2] [i_0] [i_2] [i_3 + 1]))), (((((/* implicit */int) (signed char)-7)) ^ (((/* implicit */int) (unsigned char)32)))))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((+(max((arr_10 [i_0 + 1] [i_1] [i_2] [i_3 - 1]), (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))) | (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])))))))))));
                            arr_12 [i_0 + 2] [i_0 - 1] [i_0] [i_2] [i_3 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 1]))) ? (max((arr_4 [i_2] [i_0 + 1] [i_0]), (((/* implicit */long long int) ((short) (_Bool)1))))) : (((/* implicit */long long int) (+(((((/* implicit */int) (signed char)41)) >> (((2147483635) - (2147483632))))))))));
                        }
                    } 
                } 
                arr_13 [i_0 + 1] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) 1761515130))) >> (((((long long int) (short)63)) - (57LL))))), (((/* implicit */int) ((unsigned char) ((unsigned char) 2123680082))))));
                arr_14 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned short) arr_7 [i_0 + 1]))))) * (((/* implicit */int) ((((18013800031332472865ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2] [i_1]))))) && (arr_11 [i_1] [i_1] [i_1] [i_0 + 1]))))));
                var_15 += ((/* implicit */unsigned char) ((((arr_2 [i_1]) << (((((int) arr_5 [i_1] [i_1] [i_0 + 1])) + (13286))))) == (max((((unsigned long long int) 366518257U)), (((/* implicit */unsigned long long int) (-(arr_4 [i_0 - 1] [i_1] [i_1]))))))));
                var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((arr_1 [i_0 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))))), (((/* implicit */long long int) ((unsigned char) arr_6 [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1)))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((unsigned short)31096), (((/* implicit */unsigned short) (short)-32760))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
