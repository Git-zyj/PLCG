/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168300
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
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-100)) % (((/* implicit */int) (unsigned short)63710)))), (((((/* implicit */_Bool) 2860757496U)) ? (((((/* implicit */_Bool) -1251224457)) ? (((/* implicit */int) (unsigned short)63814)) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_3)))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((short) var_10));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_12 [i_2] [i_2 + 1] [i_1] [i_2]);
                        var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-60)))));
                        var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)-76)) + (78)))))));
                        var_24 += ((/* implicit */short) (~(((/* implicit */int) (unsigned char)32))));
                        var_25 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (2143934710889210448ULL))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) arr_4 [10U]);
                        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [11LL] [i_2 - 3] [i_2 - 3]) : (((var_16) << (((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)31320)) * (((/* implicit */int) (unsigned char)57))));
                        arr_17 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (unsigned char)7))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4])))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) var_15);
    var_29 -= ((/* implicit */unsigned long long int) (~(var_13)));
}
