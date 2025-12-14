/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161066
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
    var_10 += (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_4)) : (((int) -987896202)));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (1602524311955812638ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9710175579025866077ULL)) ? (var_8) : (((/* implicit */unsigned int) var_2)))))))) ? ((+(((8736568494683685538ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */int) var_7)), (-13066465))) > (0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 4169440206U))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3925813811U)) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1206810971)) : (var_9)))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 2] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) 8736568494683685538ULL);
                                arr_12 [i_1] [i_4] [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) (short)7)) : (702089837))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_9)))) ? (((int) -1900597046)) : (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_0] [i_1] [i_3] [i_3] [i_4])), ((short)-16432))))) / ((+(var_0))))));
                            }
                        } 
                    } 
                }
                var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 848049171U)), (2305843009213693952ULL))))));
            }
        } 
    } 
}
