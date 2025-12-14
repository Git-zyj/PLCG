/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181304
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [13ULL] = ((/* implicit */short) max((((arr_3 [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 3] [i_0 - 2]))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_7)))) == (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))))))));
                                arr_13 [(signed char)0] [(signed char)10] [(unsigned short)12] [i_0] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((+(((/* implicit */int) var_10))))))), (min((((/* implicit */int) min((var_12), (((/* implicit */short) arr_1 [(signed char)5]))))), (((int) arr_7 [i_3]))))));
                            }
                            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) 2ULL)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_15))))))) - (3381)))));
                                arr_16 [i_0] [i_0] [i_2] = (((+(((((/* implicit */_Bool) 2585390748U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_14 [8LL])))));
                            }
                            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                            {
                                arr_20 [i_6] [i_0] [i_2] [i_0] [(unsigned short)6] = ((/* implicit */long long int) var_14);
                                arr_21 [i_0] [(short)13] [i_0] [(unsigned short)7] [i_6] = ((/* implicit */int) ((_Bool) (~(arr_17 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_3] [i_6] = ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) & (-2219575040043150939LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_3 - 2])) << (((/* implicit */int) (_Bool)1))))));
                            }
                            var_18 -= ((/* implicit */unsigned long long int) arr_6 [i_3] [(unsigned char)15] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    var_19 += ((/* implicit */short) (unsigned short)62);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                arr_32 [i_8] [(unsigned char)19] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                                arr_33 [i_0] [i_8] [3U] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) arr_19 [i_0] [i_0 - 2] [i_0] [i_8]));
                                arr_34 [i_9] [i_0] [i_0] [0U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_16);
    var_21 -= ((/* implicit */signed char) var_10);
    var_22 |= ((/* implicit */short) (_Bool)1);
    var_23 -= ((/* implicit */short) (+(((int) (-(var_3))))));
}
