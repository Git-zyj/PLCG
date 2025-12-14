/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167914
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = min((max((((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_0 + 1] [i_0])), (((arr_3 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))))), (((((/* implicit */_Bool) ((short) arr_2 [i_0 - 2] [i_0] [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)1]))) : ((~(arr_4 [i_0 + 1]))))));
                var_15 = ((unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28403)) ? (4294967275U) : (2926449724U)));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [(unsigned short)10])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)25907))))));
                            var_17 ^= arr_8 [i_0] [i_0] [i_0] [i_1];
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) max((arr_12 [i_0 - 2] [i_1 + 1] [i_2] [i_1 + 1] [i_2]), (arr_3 [i_0])));
                                var_19 = ((/* implicit */signed char) arr_9 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]);
                                arr_14 [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((short) min((arr_5 [i_1 - 2] [6U] [i_0 - 2]), (arr_5 [i_1 + 1] [i_1 - 2] [i_0 - 1]))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_7), (arr_11 [i_5] [i_2] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (arr_0 [i_0])));
                                arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */unsigned long long int) ((unsigned char) 2926449730U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_5])) << (((arr_4 [i_3]) - (14171553308441855829ULL)))))) ? (arr_3 [i_1]) : ((~(var_8))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)2] [i_3] [i_2] [i_2] [i_0] [(short)2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_1 - 2] [i_1 - 2]))));
                                var_22 -= ((/* implicit */unsigned long long int) arr_15 [i_1] [i_1 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]);
                            }
                        }
                    } 
                } 
                arr_18 [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_0] [0ULL] [0ULL] [i_1] [i_0])))) % (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)12]))) : (((max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1] [i_0])), (arr_0 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_10))))) || (((/* implicit */_Bool) var_11)))))));
    var_24 -= ((/* implicit */int) var_11);
}
