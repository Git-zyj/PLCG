/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165743
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((-(var_7))) + (9223372036854775807LL))) >> (((((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_7) - (5834009978595199518LL))))) - (32734)))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(909373841)))) != (min((var_7), (((/* implicit */long long int) var_12))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9326)) ? (((/* implicit */long long int) 492956361)) : (7015620906142705612LL)))) ? ((-(-1338065052))) : (((/* implicit */int) ((signed char) var_5))))))))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 288230376151711744LL))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] &= (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        var_19 += ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned char) min((((/* implicit */signed char) arr_0 [i_0])), (var_13))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (-(-1338065052)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)9321), ((short)-9336)))))) + (2147483647))) << (((120983391) - (120983391)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_4] [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-22435)) : (((/* implicit */int) (unsigned char)8))))));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [(unsigned char)5] [i_5] [i_4] = ((/* implicit */signed char) -1338065052);
                        }
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))));
                            arr_21 [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_2] [i_2] [i_1])) : (var_10))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14116)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)-9326))))) ? (var_12) : (((/* implicit */int) (unsigned char)247))));
                        }
                        arr_22 [i_4] [i_3] [i_3] [i_2] [1LL] = ((/* implicit */short) (unsigned short)14116);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_2]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_7] [i_7]))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_2 [(signed char)23] [i_7]))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (short)9326))));
    }
    for (int i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */short) (+(((/* implicit */int) (short)22435))));
        arr_29 [(unsigned short)8] = ((/* implicit */short) (+(((/* implicit */int) (short)9326))));
        arr_30 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) var_14)))))));
        arr_31 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9338)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)247))))) ? (((((/* implicit */_Bool) arr_2 [i_8 + 2] [i_8 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_2 [i_8 + 2] [i_8 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
    }
    for (int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (min((((((((/* implicit */int) (short)9333)) <= (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) var_8))))))), (((/* implicit */int) (unsigned char)6))))));
        arr_34 [10LL] &= ((/* implicit */unsigned char) var_5);
    }
}
