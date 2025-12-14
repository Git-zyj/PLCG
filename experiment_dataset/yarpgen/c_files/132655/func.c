/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132655
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16601)))))));
    var_12 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_0))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(1018032603U))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_13 += ((/* implicit */unsigned int) (-((+(16401140541463586043ULL)))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] = (+((-(1018032603U))));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) (short)32767))))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        arr_14 [i_4 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(-1761719684)))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+((~((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_5] [i_2] [i_0] [i_5] [i_2 - 2] = ((/* implicit */unsigned int) (-((-((-(var_9)))))));
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_5] [i_2] [i_1] [i_0]))))))))));
                        var_16 = ((/* implicit */signed char) (-((~((~(484959714U)))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) arr_2 [i_5] [i_1] [i_0]))))))));
                    }
                    for (int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(3432572283412300153LL))))))));
                        var_18 = (-((+((+(((/* implicit */int) (short)-5592)))))));
                    }
                    var_19 = (+((-((+(((/* implicit */int) (short)5591)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) (-((+((+(4294967295U)))))));
                                arr_27 [i_8] [i_0] [i_7] [i_2] [i_0] [(unsigned char)19] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)71))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))));
}
