/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169713
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
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((long long int) (short)-12941));
        var_18 -= ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */long long int) (short)12941))));
    }
    for (unsigned int i_1 = 1; i_1 < 6; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_7 [i_1] [i_1 + 1] [i_1] = ((/* implicit */int) max(((+(min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_6 [i_1 + 1] [i_2]))))), (((/* implicit */unsigned long long int) ((unsigned short) 3)))));
            var_19 = ((/* implicit */unsigned long long int) (+(((long long int) (short)-12936))));
            arr_8 [i_2] = ((/* implicit */signed char) (short)12940);
        }
        arr_9 [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-12924)) ? (288230376151711744ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-10)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1 + 1]), (((/* implicit */long long int) (short)10))))) ? (((/* implicit */int) ((unsigned char) (short)5))) : (arr_0 [i_1 + 1])))) ? (((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) max(((unsigned char)162), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_1]) : (arr_0 [i_1]))))) : (((((/* implicit */int) ((short) var_3))) - (((/* implicit */int) max((((/* implicit */unsigned short) (short)12934)), ((unsigned short)9))))))));
    }
    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
        arr_13 [i_3] [i_3 + 3] = ((/* implicit */long long int) var_8);
    }
}
