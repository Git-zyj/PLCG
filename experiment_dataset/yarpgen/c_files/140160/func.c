/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140160
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [4LL] [i_2] = var_7;
                                var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_9 [(signed char)1] [(unsigned short)5] [i_2] [i_3])))) ? (((((/* implicit */_Bool) -3331513566251206615LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)173)), (var_6))))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) % (var_10))) != (((long long int) arr_11 [i_0] [(short)9] [i_2] [i_2]))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (5337477758112984999LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_1] [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-((~(arr_10 [i_0] [i_0] [i_0] [6ULL] [(unsigned short)8]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))));
                arr_15 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0] [(unsigned short)7]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)0] [(short)0] [(short)0] [(short)4])))))) * (((/* implicit */int) arr_13 [4U] [i_1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9))) : (arr_3 [(_Bool)1])));
            }
        } 
    } 
    var_13 += ((/* implicit */short) 850564748341797499ULL);
}
