/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11790
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
    var_12 = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)38446)) << (min((7185022118303411773LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */int) (short)-13781))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_2))) < (((var_2) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) << (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-28)) | (((/* implicit */int) (unsigned char)4)))) * ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2] [i_0 - 3]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 + 1] [(short)17] [i_2 + 2]))))), ((((~(((/* implicit */int) (signed char)-64)))) ^ (((((/* implicit */int) arr_6 [i_0] [i_0 + 1])) | (((/* implicit */int) arr_12 [i_0] [i_1]))))))));
                                var_15 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_7)) / (-1849724427))), ((-(((/* implicit */int) var_6))))));
                                arr_14 [(unsigned short)8] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 1849724426)) ^ (-6770592429409295199LL))) - (max((((9223372036854775794LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) min((arr_3 [i_0] [i_3]), (((/* implicit */int) (short)-32760)))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(-959447610)))), (max((min((arr_4 [i_4] [i_3] [i_1]), (((/* implicit */unsigned int) arr_6 [i_3] [i_3])))), (((/* implicit */unsigned int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))))));
                            }
                        } 
                    } 
                } 
                var_16 &= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (18446744073709551615ULL))))) * (((/* implicit */unsigned long long int) max((9223372036854775803LL), (min((9223372036854775803LL), (((/* implicit */long long int) (_Bool)1)))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned long long int) min(((~(var_9))), (max((var_2), (((/* implicit */long long int) ((var_1) ^ (((/* implicit */int) var_4)))))))));
}
