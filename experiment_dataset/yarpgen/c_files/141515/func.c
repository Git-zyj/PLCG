/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141515
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (2417183505U))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) (unsigned short)45921))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 4] [i_2 - 1])) < (((/* implicit */int) (unsigned short)19615)))))));
                        arr_13 [(short)4] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((10466757051072555185ULL) % (((/* implicit */unsigned long long int) var_6))));
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11)) | (((/* implicit */int) arr_11 [i_2 + 1] [i_0] [i_3 + 1] [i_0 + 1]))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])) + (((/* implicit */int) (short)831))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45921)) || ((_Bool)1)));
                        arr_17 [i_2] = ((/* implicit */signed char) ((-5805279102417515529LL) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((1045798672U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)32738)))))));
            arr_22 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)19614)) > (((/* implicit */int) (short)-32739))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 6; i_6 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) | (((8429748530806551721ULL) << (((/* implicit */int) var_1))))));
        arr_25 [i_6] = ((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_26 [i_7 + 3])))))));
        arr_30 [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7]))) % (arr_28 [(short)22] [(unsigned char)16])))) != (var_10)));
        var_20 -= ((arr_26 [i_7 + 3]) & (var_0));
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))) >= (((arr_29 [i_8] [i_8]) + (((/* implicit */unsigned long long int) arr_26 [i_8]))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_31 [i_8]) % (-799882065127579109LL))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (10466757051072555185ULL))))))));
    var_26 = ((/* implicit */short) var_2);
}
