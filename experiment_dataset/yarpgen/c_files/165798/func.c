/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165798
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_10 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [1ULL] [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (short)27119)) ? (var_1) : (((/* implicit */unsigned int) 577645100))))))) * ((-(422212465065984LL))));
                        arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                        var_11 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))))), (3015740604U)));
                        var_12 += ((/* implicit */int) ((((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) 985830951U)))) ? (arr_1 [i_1] [8]) : ((~(((/* implicit */int) (signed char)125))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 3])) ? ((~(((/* implicit */int) (signed char)-31)))) : (min((((/* implicit */int) (signed char)37)), (var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_6 [(unsigned short)3] [i_1] [i_0])) : (((/* implicit */int) (signed char)126))))) ? (var_1) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1532)))))))));
                    }
                    var_13 = ((/* implicit */unsigned char) (signed char)22);
                    arr_10 [(unsigned char)4] [i_2] [i_1] [(unsigned char)4] &= ((/* implicit */unsigned int) var_9);
                    arr_11 [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) (((_Bool)0) ? ((((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (-1306861403)))) : (var_3))) : ((-(((((/* implicit */_Bool) arr_5 [i_0] [3U])) ? (-1073741824) : (1566087418)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((var_6) ? (5395470693673000390ULL) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))))))));
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)108)), ((unsigned short)29601)));
    var_16 = ((/* implicit */int) (signed char)-108);
}
