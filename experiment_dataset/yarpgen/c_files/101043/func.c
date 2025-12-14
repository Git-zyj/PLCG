/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101043
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((var_4) << (((((/* implicit */int) min(((unsigned char)255), ((unsigned char)149)))) - (144))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : ((+(((1693147352483658869ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 += min((arr_2 [i_1]), (arr_2 [i_0]));
                var_13 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min(((unsigned short)21828), ((unsigned short)21828)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7833719255375721763ULL)) || (((/* implicit */_Bool) arr_1 [(unsigned short)2] [5U]))))) : (((/* implicit */int) arr_4 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((38704668U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3 - 1])))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) - (((/* implicit */int) var_8)))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_2] [i_3 - 1] [i_2] [i_1] [i_2]))))))) : (min((4256262652U), (((/* implicit */unsigned int) (unsigned short)54597))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_16 [i_5 - 3] [i_6 + 1])) ^ (((/* implicit */int) arr_16 [i_5 - 3] [i_6 + 1])))) | ((~(((/* implicit */int) arr_16 [i_5 - 1] [i_6 + 2]))))));
                arr_18 [(unsigned char)9] = ((/* implicit */short) 7833719255375721770ULL);
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((+(((((/* implicit */int) arr_16 [i_6 - 1] [(unsigned char)3])) ^ (((/* implicit */int) var_8)))))) > (((/* implicit */int) ((short) arr_14 [i_5]))))))));
            }
        } 
    } 
}
