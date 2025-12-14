/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147815
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
    var_17 = ((/* implicit */unsigned long long int) 126);
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) 128)) ? (((/* implicit */int) ((unsigned short) (+(126))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (-106)))) < (((/* implicit */int) ((short) (short)-6891))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */_Bool) -106)) ? (((/* implicit */unsigned long long int) 126)) : (6ULL))), (arr_1 [i_1])))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)5217)) : (((/* implicit */int) ((arr_1 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6915)))))))) : (126)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_21 -= ((((min((15539527322077161685ULL), (((/* implicit */unsigned long long int) var_12)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6878))) == (18446744073709551615ULL))))))) ? (((/* implicit */unsigned long long int) ((((5796811676323799565LL) * (0LL))) - (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (15194388170333701663ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0])))));
                                var_22 -= ((/* implicit */short) (~(((/* implicit */int) ((var_11) > (((/* implicit */int) (unsigned char)4)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (((((!(((/* implicit */_Bool) 106)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6891))) % (18446744073709551615ULL))) : (((((/* implicit */unsigned long long int) -106)) + (2436222782506766750ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-6890)), ((unsigned short)42796)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1958)), ((unsigned short)39451))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0]))))))));
                    var_24 = (_Bool)1;
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */signed char) var_4);
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-18439)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39451)))))) % (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26104)) ^ (((/* implicit */int) (short)7412))))) + (((long long int) 11190312747173324689ULL)))))))));
}
