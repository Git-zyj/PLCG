/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100131
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0])))), (min((arr_0 [i_3 - 2]), (arr_0 [i_3 - 2])))));
                            var_13 = ((/* implicit */unsigned char) (~(min((max((var_8), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_5 [i_3 - 2] [i_3 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_14 ^= ((/* implicit */unsigned short) ((_Bool) arr_10 [i_0 + 1] [i_1] [i_4]));
                                var_15 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_13 [i_1] [i_5] [i_6])))) - (((/* implicit */int) (signed char)-71))));
                            }
                            arr_18 [i_4] [i_1] = ((/* implicit */unsigned short) min((((max((arr_15 [i_5]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0]))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [(unsigned char)11]))))))), (((/* implicit */long long int) min((arr_6 [i_0 - 1] [i_0 + 2]), (arr_6 [i_0 + 2] [i_0 + 1]))))));
                            var_16 = ((/* implicit */long long int) arr_12 [i_4]);
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((var_8), (((/* implicit */long long int) arr_13 [i_4] [i_1] [i_0])))))) ? ((~(((/* implicit */int) ((signed char) (unsigned short)16905))))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)49502)) == (((/* implicit */int) (unsigned char)243))))))))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_0] [i_0 - 1]))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)12)), ((unsigned short)16056)))) + (((/* implicit */int) (_Bool)1)))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_21 [i_7] [i_0 + 2] [i_9 - 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) < ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (2308167453U)))));
                                var_21 = ((/* implicit */unsigned char) arr_4 [i_0] [(unsigned char)12]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) (unsigned short)28672)))));
}
