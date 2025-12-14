/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132099
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
    var_14 = 13698717099399717391ULL;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (986026402U)));
                    var_16 = ((/* implicit */unsigned char) arr_1 [(unsigned char)21] [i_2]);
                    arr_7 [(unsigned char)5] [i_0] [i_0] = ((/* implicit */unsigned short) ((782362693U) << (((-529648145298911524LL) + (529648145298911538LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */short) arr_10 [i_1] [i_4 - 1] [i_4] [i_3 - 2] [i_1]);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)6)), ((-(min((-529648145298911524LL), (((/* implicit */long long int) (unsigned char)248)))))))))));
                                arr_12 [(unsigned short)10] [i_0] [(unsigned short)10] [(unsigned short)10] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52442)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52440)))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    arr_13 [8LL] [0] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)30);
                }
            } 
        } 
    } 
}
