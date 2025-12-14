/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10660
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
    var_13 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) && (max((((_Bool) var_12)), ((!(((/* implicit */_Bool) (unsigned char)139))))))));
    var_15 *= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = min((max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_3)))))), ((~((-2147483647 - 1)))));
                    var_17 = ((/* implicit */unsigned int) arr_7 [i_0]);
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_0 - 2]), (arr_8 [i_0 - 2])))) ? (var_6) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0 - 1] [i_3]))))))))));
                                var_19 = ((/* implicit */short) ((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [1] [i_1 + 2]) < ((-(((/* implicit */int) var_7))))));
                                arr_14 [i_0] [10ULL] [i_2] [10ULL] [10ULL] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) min((((-2117382104942236001LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))), (((/* implicit */long long int) (short)-12466))));
                    arr_24 [3] [i_6] [1U] = ((/* implicit */long long int) (+(min((3333610565U), (((/* implicit */unsigned int) (short)24790))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_10)) / (((/* implicit */int) var_3)))) <= (((/* implicit */int) ((_Bool) arr_22 [i_5] [i_6] [i_5])))))) > (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((min((((12340854838363663918ULL) * (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5] [i_8 + 1])))), (((/* implicit */unsigned long long int) ((arr_29 [i_8]) <= (((/* implicit */unsigned long long int) arr_13 [(unsigned short)8] [9U] [i_7] [3U] [i_7]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((6477714275827339669LL), (((/* implicit */long long int) arr_3 [15] [i_5] [i_5]))))))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(arr_19 [i_8 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)6] [i_5]))))) : (((/* implicit */int) max((arr_28 [i_8] [i_8 - 1] [i_9 - 1] [14U] [i_8 - 1]), (arr_28 [i_8] [i_8 - 2] [i_9 - 1] [(signed char)9] [(signed char)12]))))));
                                var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2447429045U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1933))))) ? (((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_7 [i_7])))) : ((~(((/* implicit */int) arr_15 [(unsigned char)10] [i_6]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) arr_5 [i_5] [i_7]);
                }
            } 
        } 
    } 
}
