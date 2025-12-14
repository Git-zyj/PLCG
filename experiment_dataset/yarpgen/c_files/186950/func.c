/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186950
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
    var_11 = ((var_7) % (((/* implicit */int) ((unsigned char) (unsigned short)16))));
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)255)), (11U)));
    var_13 &= ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [(_Bool)1] [i_1]);
            arr_8 [(unsigned char)2] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10))))) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) (short)1285))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (min(((~(((/* implicit */int) arr_0 [i_0] [i_1])))), (65408)))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) 2247213090U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_0] [i_0]))) : (var_5)))) ? (((((/* implicit */_Bool) min(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_5) : (((((/* implicit */_Bool) -385304547)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -946373237)))))) : (((/* implicit */unsigned long long int) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) min(((unsigned char)27), (var_6)))))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max((-70689318), (((/* implicit */int) ((((/* implicit */_Bool) 15959997191645878563ULL)) || (((/* implicit */_Bool) arr_2 [(unsigned char)0])))))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((4824504510026289671ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [2ULL]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7466)) % (((/* implicit */int) arr_3 [i_2 - 1] [i_2] [i_2 + 1]))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((3529505700U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7466))))))));
    }
    var_17 = ((/* implicit */unsigned short) (short)4494);
}
