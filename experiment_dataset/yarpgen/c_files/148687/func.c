/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148687
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
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 ^= var_10;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 *= arr_1 [i_2 + 1] [i_2];
                    var_16 = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_17 = ((/* implicit */short) ((long long int) ((arr_7 [i_3] [i_3]) < (var_5))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)121)) : (220949440)));
                }
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_16 [i_3] [6LL] [i_3] = ((/* implicit */unsigned char) (~((~(var_4)))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-((((((_Bool)1) ? (5584121066378447758LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2373649420U)) || (((/* implicit */_Bool) arr_10 [i_4])))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)22458))));
                        var_21 = arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3];
                        var_22 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_14 [i_3] [i_3] [i_3])))) < (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                    }
                    arr_21 [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(3880983123097462074LL))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((unsigned short) ((2041490856U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_4] [i_6]))) == (min((arr_15 [i_3] [(short)6] [i_3] [i_3]), (arr_8 [i_3] [i_4]))))))));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4] [i_4] [i_8])) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_3] [i_3] [i_4] [i_4]))))))))));
                    arr_25 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) (~(220949446)));
                }
                var_24 = 2249600790429696LL;
            }
        } 
    } 
}
