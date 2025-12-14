/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104907
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) arr_4 [11ULL] [i_0])))))));
                var_18 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) arr_5 [i_1] [i_1])) + (71)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)60)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)51)) < (((/* implicit */int) (signed char)39))))))), (1466640894)));
        var_20 = ((/* implicit */unsigned long long int) var_11);
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3])) << (((((/* implicit */int) ((signed char) arr_8 [i_3]))) - (72)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_6 [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1466640914)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) arr_11 [8ULL]))))) ? (((((/* implicit */_Bool) 551625620087391414LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (short)7)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_23 = ((((/* implicit */_Bool) max((((((/* implicit */int) (short)7399)) << (((arr_8 [(unsigned char)22]) - (1080861003))))), (((/* implicit */int) (short)7397))))) ? (min((((/* implicit */unsigned int) (-2147483647 - 1))), (max((arr_13 [(unsigned short)6]), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) ((arr_12 [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40426))))))))));
        var_24 += ((/* implicit */_Bool) arr_8 [i_4]);
    }
}
