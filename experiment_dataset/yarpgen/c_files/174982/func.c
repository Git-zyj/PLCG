/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174982
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59618))));
                        arr_10 [i_0] [i_1] [i_2 - 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) ((_Bool) (unsigned short)3072)))))) ? (((((/* implicit */_Bool) max((var_9), (arr_9 [i_2 - 3] [i_1] [i_3] [i_0] [i_2 - 3] [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((signed char) var_2))))) : (((((/* implicit */_Bool) (+(2432265182619841935ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3] [i_0]))));
                        arr_11 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)62464)) : (((/* implicit */int) arr_5 [i_2 - 3] [i_1] [i_0 + 1]))))), (((((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18757))))) ? (max((var_5), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)251), (((/* implicit */unsigned char) var_2))))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        arr_14 [i_4] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) var_10);
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)22878)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2]))))) | (((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_5])) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0])))) & (((/* implicit */int) max((arr_17 [i_0] [i_0] [i_0]), (arr_2 [i_1] [i_0]))))))));
                    }
                    arr_20 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned short) arr_13 [i_0])))), (((/* implicit */unsigned short) max((arr_17 [i_0] [i_1] [i_2]), (var_4))))))) ? (((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_0 - 3])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28191)) : (((/* implicit */int) var_3))))))) ? ((((-(((/* implicit */int) (signed char)7)))) + ((-(((/* implicit */int) var_7)))))) : (((/* implicit */int) var_2))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_18 ^= ((/* implicit */_Bool) var_6);
    var_19 = (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))));
}
