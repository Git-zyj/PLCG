/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103715
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-((-(max((((/* implicit */unsigned int) var_1)), (var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_16 += ((((/* implicit */int) var_10)) == (((/* implicit */int) var_3)));
                var_17 = ((/* implicit */unsigned long long int) var_9);
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_18 = (~(var_13));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_0)));
                        }
                    } 
                } 
            }
            arr_14 [i_0 + 1] [10LL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (var_9)))) << ((((~(((/* implicit */int) var_12)))) - (20)))));
            var_20 |= ((/* implicit */unsigned short) var_1);
        }
        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_21 = ((/* implicit */signed char) (((((-(var_11))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_6))))) << (((((((/* implicit */unsigned int) var_9)) + ((+(var_13))))) - (2800411328U)))));
            arr_18 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4497)) | (((/* implicit */int) (unsigned short)4470))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (7604029205859742208ULL))))))));
        }
        arr_19 [i_0] = var_3;
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned short) var_12);
}
