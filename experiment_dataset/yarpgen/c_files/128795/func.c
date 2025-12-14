/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128795
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]);
                var_11 += (unsigned short)57184;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_12 = var_6;
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) (unsigned short)64518)) : (((/* implicit */int) max(((unsigned short)64499), ((unsigned short)0))))));
                                var_14 = ((/* implicit */unsigned short) (~((~(min((5110603672231195191ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0 + 2] |= ((/* implicit */unsigned long long int) ((arr_14 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0 + 2]) ? (((/* implicit */int) var_9)) : ((~(((((-1510054373) + (2147483647))) << (((-1510054373) + (1510054374)))))))));
                                var_15 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (unsigned short)1018)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)64518)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)1018)) : (((/* implicit */int) (unsigned short)1004)))))), (max((((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])), (-1510054373)))));
                            }
                            var_16 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) max((var_9), (((((/* implicit */_Bool) 1510054372)) || (((/* implicit */_Bool) 1366903938785672769ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
    var_18 += ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1510054373)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (unsigned short)1004))))) ? (((/* implicit */int) (unsigned short)32439)) : (((var_1) & (((/* implicit */int) var_0))))))) ? (903536592134157932ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)1004)))) ? (((int) 1366903938785672780ULL)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1011)) || (((/* implicit */_Bool) 1366903938785672769ULL))))))))));
}
