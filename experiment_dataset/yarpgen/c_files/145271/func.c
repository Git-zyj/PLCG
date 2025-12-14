/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145271
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
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)19790)), ((+(((/* implicit */int) (unsigned short)45722))))))) || (((/* implicit */_Bool) (unsigned short)19809))));
                var_20 = ((/* implicit */unsigned char) (((+(min((4294967287U), (4294967295U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19799)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_21 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2]))) + (274877906943LL));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned short)19786);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_1 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (-274877906951LL))))));
                                var_23 = ((((/* implicit */long long int) arr_5 [i_0] [i_1])) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19823))) / (-8731597424507005800LL))));
                                var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (short)23784)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)18] [i_1] [i_1] [i_1] [20ULL] [i_1] [i_1]))) : (arr_4 [i_0] [i_0])));
                                var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [(unsigned char)2] [i_0] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45751)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)45741)) | (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)19772)))))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)19792)))))))))));
                    arr_18 [i_0] |= (-(arr_5 [i_0] [i_1]));
                }
                arr_19 [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((var_7) > (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned int) (unsigned short)65518)), (var_11))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_9 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_8);
    var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */_Bool) ((max((-274877906937LL), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)))));
}
