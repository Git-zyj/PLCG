/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133188
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
    var_10 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (short)32767);
                        var_11 = ((/* implicit */unsigned short) (short)-9577);
                        var_12 = ((/* implicit */long long int) (((((+(((((/* implicit */_Bool) 1250874082)) ? (-1) : (((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((/* implicit */int) ((-650887750) < (((/* implicit */int) (short)511))))) - (1)))));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) <= ((~(arr_4 [i_0 + 1])))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) arr_5 [i_3])) | (4611686018427387903LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)255)))))))) ? (min((arr_3 [i_1] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-97))))))) : (((/* implicit */unsigned int) ((int) var_9))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = (-(arr_14 [i_0] [i_1] [i_2] [i_4]));
                        var_14 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_0] [i_0]);
                        var_15 = ((/* implicit */_Bool) 16383LL);
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 1073741823ULL)) && ((_Bool)0))));
                    }
                    var_16 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((485358252U) * (((/* implicit */unsigned int) arr_9 [i_0] [i_2]))))) && (((/* implicit */_Bool) (unsigned short)65535)))));
                    var_17 = ((/* implicit */short) (~(arr_1 [i_2])));
                    arr_17 [i_0] [i_1] [i_1] [i_2] = ((unsigned short) 3951282024677946553ULL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))) - (((((/* implicit */int) var_2)) + (((/* implicit */int) var_9)))))))));
    var_19 = (+(((((var_6) != (var_6))) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)4052)) : (((/* implicit */int) (unsigned short)10837)))))));
}
