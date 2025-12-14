/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106469
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
    var_19 ^= min((4294967295U), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) -848369294)), (var_14))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12))))))));
    var_20 = ((/* implicit */unsigned short) (~(848369294)));
    var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */int) ((_Bool) min((var_17), (-848369318))))) < ((+(((/* implicit */int) (short)(-32767 - 1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-3436446948588298413LL), (((/* implicit */long long int) (short)-32758))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) max((var_9), ((unsigned char)10)))))) < ((-(((((/* implicit */int) (short)-9784)) / (((/* implicit */int) (signed char)-114))))))));
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) 3410609732U)))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 329288354))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)32749)) - (32748))))) : (((int) (short)(-32767 - 1))))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((long long int) (unsigned short)0)))));
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((9642639472532980743ULL) % (8804104601176570857ULL)));
                        arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) ((_Bool) 1073740800));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((17897459942647412557ULL) < (((unsigned long long int) var_4)))))));
                    }
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_5] = ((var_16) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (short)32767))))) : (((/* implicit */int) var_0)));
                        arr_17 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-1328370499217710022LL)));
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */unsigned int) ((unsigned char) 2097152U));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_17) + (1408253652))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((int) (_Bool)0));
                        var_30 = ((/* implicit */signed char) ((-8840673976909917712LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                        arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-24830))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_3] [i_1] [0ULL] = ((/* implicit */signed char) ((((/* implicit */int) (short)-8335)) % (((/* implicit */int) (signed char)33))));
                        arr_26 [i_3] [i_3] [i_1] [i_3] [i_3] [i_7] &= ((/* implicit */short) (+(((/* implicit */int) (short)-27275))));
                    }
                }
            }
        } 
    } 
}
