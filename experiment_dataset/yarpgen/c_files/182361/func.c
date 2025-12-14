/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182361
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_10 [7LL] [7LL] [i_1] [i_2] = ((/* implicit */long long int) arr_2 [i_2]);
                    arr_11 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_0] [i_2]) : (arr_4 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_2] [i_1] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) (short)4096)) != (((/* implicit */int) (unsigned char)205))))))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0] [2LL] [i_2])), (((unsigned long long int) arr_2 [i_0]))))));
                    arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((3698726694385660557ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17)))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_11 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) ((signed char) arr_14 [i_0] [(unsigned short)13] [i_3]))))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(262143ULL)));
                }
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned int) (!(arr_1 [i_0])))), (max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)4114)), (1761396978046876362ULL)));
                                arr_31 [(unsigned short)0] [i_5] [i_4] [i_7] [i_8] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-114)) <= (((/* implicit */int) (unsigned char)117))))), (arr_14 [i_8] [i_5] [i_4]))), (((/* implicit */unsigned long long int) max((arr_16 [i_4]), (arr_16 [i_4]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (signed char)-32)), (arr_24 [i_4] [i_4] [i_4] [i_10]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_9] [i_4])))));
                            var_14 *= ((/* implicit */unsigned long long int) arr_3 [i_4] [i_9] [i_10]);
                            var_15 = ((/* implicit */unsigned int) ((_Bool) arr_19 [i_4]));
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [6ULL])) ? (arr_14 [i_4] [i_5] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5])))))) ? (((/* implicit */unsigned long long int) -1887666704)) : (min((arr_26 [i_9] [2ULL]), (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4] [(signed char)0] [i_10])))))), (((/* implicit */unsigned long long int) arr_16 [(signed char)4]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
