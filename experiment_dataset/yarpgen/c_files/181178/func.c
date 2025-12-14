/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181178
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(short)2] [i_2] [i_3] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) min((max(((unsigned short)24582), (((/* implicit */unsigned short) arr_5 [i_4] [i_1] [i_1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_0] [i_1] [(short)2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */short) arr_0 [10U])), ((short)18577)))))))));
                                arr_16 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] = max((((short) var_6)), ((short)-6978));
                                var_18 = ((/* implicit */_Bool) (~(18446744073709551592ULL)));
                                var_19 *= ((/* implicit */unsigned int) 54ULL);
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) (+(var_13)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_1 + 1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((short) min((arr_10 [i_0] [(unsigned short)8] [i_1 + 2] [i_0]), (arr_10 [i_0] [i_1] [i_1 - 2] [i_6]))));
                            var_20 *= ((/* implicit */short) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((unsigned short) var_11);
    var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_14)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9)))), (max((((/* implicit */unsigned long long int) -1970443452)), (4ULL)))))));
}
