/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122598
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
    var_12 = ((/* implicit */long long int) ((((unsigned int) 1863399857116392648ULL)) > (((/* implicit */unsigned int) ((/* implicit */int) (short)16128)))));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)-18))))))));
                                var_15 = ((/* implicit */signed char) 1863399857116392648ULL);
                            }
                            for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) ((short) -1073741824))) : (max((-1), (((/* implicit */int) (_Bool)0))))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_0] [i_1 + 1] [i_2] [6LL] [i_2]));
                            }
                            arr_21 [i_0] [i_0] [i_1 - 2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217728LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) max(((short)-16807), (((/* implicit */short) arr_3 [i_2]))))) : (((/* implicit */int) min(((signed char)-18), (var_9))))))) : ((+(arr_12 [5] [i_1] [i_1 + 1] [(_Bool)1] [i_2] [i_2] [1U])))));
                            var_16 = ((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_0] [i_1] [i_0]));
                            var_17 += ((/* implicit */unsigned long long int) (signed char)-15);
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_2)) ? (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */int) arr_1 [i_0])))))))));
                var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (((((/* implicit */_Bool) arr_14 [4] [4] [4] [i_0])) ? (1897546710U) : (((/* implicit */unsigned int) arr_10 [i_1] [i_0] [0U] [i_1 + 1]))))))) ? (1879048192U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22)))));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (long long int i_8 = 4; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) var_11);
                                var_20 += min((((/* implicit */unsigned long long int) ((signed char) (signed char)121))), (max((((1863399857116392660ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_6] [3U] [i_8]))))), (((/* implicit */unsigned long long int) arr_29 [i_1 - 2] [i_1 - 2] [i_8 + 1])))));
                                var_21 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */int) arr_11 [i_0] [i_0] [i_6] [i_6] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
