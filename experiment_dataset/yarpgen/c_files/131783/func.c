/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131783
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
    var_19 = var_2;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (signed char)24)))), (((15027322) << (((((((/* implicit */int) var_8)) + (2572))) - (27)))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_2] [i_3] [i_3 + 1]))) : (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48548)))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_0] [(unsigned char)7] [(unsigned char)7] [i_0 + 1])), (min(((-(((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] = ((/* implicit */signed char) var_3);
                                var_21 = (i_0 % 2 == 0) ? (((((/* implicit */int) min((arr_5 [i_0] [i_5] [i_0]), (arr_5 [i_0] [4LL] [i_0 - 1])))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_0]))))) - (977182951ULL))))) : (((((/* implicit */int) min((arr_5 [i_0] [i_5] [i_0]), (arr_5 [i_0] [4LL] [i_0 - 1])))) << (((((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_0]))))) - (977182951ULL))) - (2256766797ULL)))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))), (max((((((/* implicit */long long int) 3828046961U)) - (576697702001001826LL))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_1]))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((var_3), (((/* implicit */unsigned int) (signed char)-19)))))))));
    var_24 += ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_13)))) ? (14766063900229607574ULL) : (((/* implicit */unsigned long long int) ((var_15) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) var_13))));
    var_25 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (unsigned short)43135)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 14552663543132025110ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187)))))))) ? (max((((/* implicit */long long int) (-(var_4)))), (min((-4458768886453063145LL), (var_7))))) : (((((/* implicit */_Bool) var_1)) ? (((1307739814695161001LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_11)))));
}
