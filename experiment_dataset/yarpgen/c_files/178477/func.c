/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178477
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2053))) + (5764809006382107340LL)));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((var_7) > (((/* implicit */long long int) ((/* implicit */int) (short)-2053))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_1)))))) : (((((/* implicit */long long int) var_14)) | (var_7))))) > (((var_7) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_3])) & (((/* implicit */int) arr_9 [i_1] [i_3]))))) ? (((int) var_9)) : (((int) var_12)))), (((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) (_Bool)1)) : (((int) (signed char)-49))))));
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_10)))))) % (((/* implicit */int) var_4)))) != ((~(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)22596)) : (arr_6 [(signed char)2] [i_1] [i_1] [i_3])))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_2 - 2] [i_2 - 2]), (arr_4 [i_2 - 2] [i_2 - 2])))) ? (((/* implicit */int) max((arr_5 [i_2 - 2] [i_2 + 1]), (arr_3 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)3365))) > (((/* implicit */int) ((((/* implicit */int) var_8)) > (var_14)))))))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((var_14) * (((/* implicit */int) var_12))))) : ((+(var_9))))) > (((long long int) ((((/* implicit */int) var_8)) == (var_3))))));
}
