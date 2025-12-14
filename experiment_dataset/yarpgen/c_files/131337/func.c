/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131337
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((min((var_4), (var_12))) <= (((long long int) 4294967295U)))))) * (min((min((((/* implicit */long long int) var_10)), (var_4))), (min((-2097211089801729592LL), (((/* implicit */long long int) 3521403641U))))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_3) : (var_3)))) ? (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_15)) : (var_3)))))) >= (max((max((((/* implicit */long long int) var_13)), (-6050911713607941024LL))), (((var_12) * (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
    var_20 = ((/* implicit */int) ((unsigned char) ((-1LL) < (6050911713607941024LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) ((var_14) != (((/* implicit */long long int) var_3)))))) - (var_12)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) arr_9 [i_4] [i_0] [i_1] [i_0])))));
                                var_23 *= ((/* implicit */_Bool) ((arr_3 [i_3] [i_2] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 + 2])) <= (var_2)))))));
                                arr_13 [i_1] [i_1] = var_10;
                            }
                        } 
                    } 
                    arr_14 [i_1] [1] [i_2] = ((/* implicit */_Bool) ((unsigned int) max((((long long int) var_17)), (((var_12) | (((/* implicit */long long int) var_2)))))));
                    var_24 -= ((/* implicit */unsigned char) ((0LL) - (((/* implicit */long long int) 268435440))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) arr_8 [i_2] [i_1] [i_2] [i_1])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (var_9)))))) ? (max((max((((/* implicit */long long int) arr_5 [i_1])), (arr_2 [i_0] [10ULL]))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) % (var_10)))))) : (((/* implicit */long long int) arr_6 [i_2] [(unsigned short)0] [i_1] [i_0 - 3])))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((min((var_11), (var_4))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 3])) ? (((/* implicit */int) arr_5 [i_0 - 4])) : (var_1)))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) (unsigned char)120))) | (((max((((/* implicit */long long int) arr_0 [i_0])), (var_14))) / (min((((/* implicit */long long int) arr_0 [(_Bool)1])), (arr_3 [i_0] [i_0] [i_0 - 2]))))))))));
    }
}
