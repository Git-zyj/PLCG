/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159496
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) var_2);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((unsigned char) (~(((/* implicit */int) (short)24633)))))));
            var_15 = ((/* implicit */unsigned int) min((2012284769469946825ULL), (((/* implicit */unsigned long long int) -9079665924188490069LL))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) 18446744073709551604ULL);
        }
    }
    var_16 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 16434459304239604766ULL)) ? (1968217886U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))))) ? (((/* implicit */unsigned long long int) 2326749409U)) : (min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)229))), (min((16434459304239604791ULL), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_3] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)229))));
                var_17 = ((/* implicit */signed char) (~((+(((arr_8 [i_2 - 2] [i_3]) >> (((((/* implicit */int) var_5)) - (60203)))))))));
                arr_11 [i_3] |= ((/* implicit */_Bool) (-(14014206449708116257ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] [i_5] = ((/* implicit */short) (unsigned char)56);
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_2] [i_2 + 3])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4] [i_4 - 2] [i_5])))))))));
                            arr_19 [i_5] [i_3] = ((/* implicit */long long int) arr_17 [i_2] [i_2 + 1] [i_3] [i_2] [i_5] [i_5]);
                            arr_20 [i_2] [i_2 + 1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 + 1]))))) ? (((((/* implicit */int) (unsigned char)205)) << (((((arr_7 [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))))) - (20741362224899762LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240)))))));
                        }
                    } 
                } 
                arr_21 [i_3] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 + 3] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)0] [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2] [(short)0]))) : (16434459304239604791ULL))), (((/* implicit */unsigned long long int) min((arr_14 [i_2 - 2] [i_3] [i_3]), (((/* implicit */unsigned short) arr_6 [i_2 - 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) arr_22 [0]);
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_12))));
            }
        } 
    } 
}
