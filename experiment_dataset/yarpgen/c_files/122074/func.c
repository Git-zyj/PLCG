/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122074
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (short)2032))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [(signed char)1] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 541024846)) || ((((!(((/* implicit */_Bool) -541024865)))) || (((((/* implicit */_Bool) arr_3 [8ULL] [18LL] [i_2])) && (((/* implicit */_Bool) var_13))))))));
                    arr_10 [i_0] [i_1] [4LL] [i_2] = var_6;
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_13)), (var_8))), (((/* implicit */unsigned short) (unsigned char)255)))))) : ((-(arr_0 [i_2 + 4] [i_2 - 3]))))))));
                    var_18 = ((/* implicit */unsigned short) 3535725143U);
                }
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967280U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)62)))))));
                var_20 = ((/* implicit */long long int) ((min((min((-541024846), (((/* implicit */int) arr_4 [i_0] [i_1])))), (var_4))) / (((/* implicit */int) ((27U) < (((/* implicit */unsigned int) 2147483647)))))));
                arr_11 [18] [i_1] |= ((/* implicit */unsigned int) -224081403);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (signed char)44);
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_18 [i_3] [i_5])) : (((/* implicit */int) (signed char)-79)))) * ((+(((/* implicit */int) (short)3))))))) ? (min((((/* implicit */int) (_Bool)1)), (arr_17 [i_4]))) : (((arr_15 [i_4]) | (arr_15 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (signed char)78);
                                var_24 = ((/* implicit */unsigned int) arr_17 [i_4]);
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_23 [i_5] [i_7]), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)30762)), (var_0)))) : (((/* implicit */int) ((arr_23 [i_3] [i_7]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48865))))))));
                                arr_24 [i_3] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_7])) % (((/* implicit */int) arr_13 [i_5]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)8798)) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
