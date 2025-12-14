/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137447
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
    var_12 = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32762)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))) | (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) var_7)))))))))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)7987)))) ? ((-(arr_2 [i_0] [i_1]))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                var_15 = ((/* implicit */unsigned short) (+(8175442101998265821ULL)));
                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((long long int) arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((int) var_0)) < (((/* implicit */int) (_Bool)1)))))) : (min((min((var_10), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((2611948973U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))))))), (((((((/* implicit */int) var_11)) < (((/* implicit */int) var_2)))) ? ((-(arr_11 [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_2 + 2] [i_3]))) | (var_4))))))));
                    var_17 = ((/* implicit */long long int) arr_13 [i_3] [i_4]);
                    arr_17 [i_2 + 1] [i_4] [i_4] = ((/* implicit */unsigned int) 10271301971711285794ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 15293483661435199030ULL)) ? (((/* implicit */unsigned long long int) ((long long int) 9947704204217714703ULL))) : (((unsigned long long int) 9223372036854775781LL)))) | (((/* implicit */unsigned long long int) var_6))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((unsigned short) 3153260412274352578ULL))) >= (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_4] = ((/* implicit */unsigned char) arr_6 [i_4] [i_3] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (int i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            {
                arr_30 [i_7] [i_8 + 2] = ((/* implicit */int) ((((unsigned int) var_10)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((arr_29 [i_7] [i_8 - 1] [i_8 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8]))))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_8] [i_8 - 1] [i_8])) ? (((long long int) ((_Bool) (-2147483647 - 1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8] [i_7])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_5 [i_7] [i_7] [i_8 - 1]))))) ? (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))))) : (((/* implicit */int) ((unsigned short) var_6))))))));
            }
        } 
    } 
}
