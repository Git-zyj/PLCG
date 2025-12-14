/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152654
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
    var_18 = ((/* implicit */signed char) (~((+((-(((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_21 |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1072693248)))))));
                        var_22 = ((/* implicit */signed char) (-(0)));
                        arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] = (~((-(((/* implicit */int) (unsigned short)10279)))));
                        arr_13 [i_1] = ((/* implicit */short) (~((~(12579680207972495645ULL)))));
                    }
                    for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        arr_18 [i_1] [i_1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(arr_11 [i_1] [4U] [i_1] [i_1]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)40921))))));
                            var_24 ^= ((/* implicit */int) (+((-((+(var_12)))))));
                        }
                        var_25 = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_9 [(unsigned char)6] [(signed char)2]))))))));
                        var_26 = ((/* implicit */short) (+((~((~(((/* implicit */int) (unsigned short)24615))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_27 = ((/* implicit */unsigned int) (+((+((~(((/* implicit */int) var_2))))))));
                                arr_31 [i_0] [i_1] [i_0] [2U] [i_7] |= ((/* implicit */long long int) (-((~((~(((/* implicit */int) (unsigned short)30713))))))));
                                arr_32 [i_1] [i_1] [i_7] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 1072693250)))))))));
                                arr_33 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((-((+(((/* implicit */int) (unsigned short)34823))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
