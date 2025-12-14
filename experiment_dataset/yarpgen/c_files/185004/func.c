/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185004
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12454))))) % ((-(var_11)))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : ((~(var_6)))))) ? ((~(((((/* implicit */_Bool) (short)21251)) ? (4613818564432934212LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)25331)))) | (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) min((((/* implicit */unsigned short) (short)-21252)), (arr_0 [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) 1662330770)))))))) ? ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (2147483647))))) : ((((!(((/* implicit */_Bool) 420137202U)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned char) 4294967295U);
                        arr_10 [i_1] [i_2] = ((/* implicit */signed char) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5LL]))) + (1797238436128714975ULL)))))));
                        var_21 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) 1734362386)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2832)))))))), (var_1)));
}
