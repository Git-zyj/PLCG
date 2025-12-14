/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130071
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [0] [i_0] = var_14;
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [6ULL] [i_1] [i_2] [i_3 + 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) < (arr_8 [(unsigned char)13] [i_0] [i_2] [i_2] [i_0] [i_0]))))))), (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_3 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = (unsigned char)252;
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)181)) - (((/* implicit */int) arr_7 [i_1])))) / (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)252))))))))));
                                var_16 += 29ULL;
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned char) ((signed char) ((long long int) max(((short)8573), (((/* implicit */short) var_0))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24115))) >= (32ULL)))))))));
                                arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                            }
                        }
                    } 
                } 
                arr_18 [i_0] = (unsigned char)4;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)24014)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)235)))))))));
}
