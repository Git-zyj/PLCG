/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144696
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
    var_14 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned short)37761)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */int) var_8);
                                arr_10 [i_4 + 2] [i_3] [i_2] [i_3] [i_0] = (((!(((/* implicit */_Bool) ((unsigned short) 0LL))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 + 1] [i_1] [i_3 + 1] [i_3])), (arr_8 [i_1] [i_1] [i_2] [i_0] [i_4 + 4] [i_3] [i_1])))) : (min((-1665039265), (((/* implicit */int) (short)-29359)))));
                            }
                            for (short i_5 = 3; i_5 < 13; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */signed char) (~((-((~(((/* implicit */int) arr_12 [i_3]))))))));
                                var_17 = ((/* implicit */_Bool) arr_12 [i_3]);
                                arr_13 [i_3] [i_3] [i_3 + 2] [i_2] [i_2] [i_1 - 1] [i_3] = ((/* implicit */short) ((max((arr_6 [i_0] [i_1 + 2] [i_0] [i_3]), ((!((_Bool)1))))) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2]))))))))));
                            }
                            for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                            {
                                arr_18 [i_3] [i_3] [i_2] [i_3] [i_6] = max(((~(((/* implicit */int) arr_1 [i_0 + 1] [i_1 - 2])))), ((+(((var_7) & (((/* implicit */int) var_11)))))));
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_6 - 1]))))))));
                            }
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_15 [i_3 + 2] [i_1 + 2] [i_2] [i_0 - 2] [i_2] [i_2]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1])))))))) % (max((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((var_1) + (602954871))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2] [i_2] [i_0] [i_3])) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29358))));
            }
        } 
    } 
}
