/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113301
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_4 [7] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) -1820932722))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_19 &= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) 427619843U)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
            var_20 = ((/* implicit */unsigned char) ((((var_3) ? (((/* implicit */int) arr_7 [i_0 + 4] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1])))) + (((int) arr_0 [i_0] [i_1 + 1]))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_18);
            var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned int) -214254255)) : (1435648914U))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)197))))) ? (max((var_12), (((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_2] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_10 [i_2])))))))));
            arr_11 [i_0] [(signed char)12] = ((/* implicit */signed char) ((unsigned int) var_15));
        }
        var_23 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0 + 1])), (((unsigned int) arr_3 [i_0 + 1]))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((short)14039), (((/* implicit */short) var_8))))) / (max((arr_5 [i_0 + 2] [i_0 + 2] [i_0]), (((/* implicit */int) var_16)))))) * (((/* implicit */int) var_8))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((((((/* implicit */int) arr_13 [i_3 + 1] [(signed char)6])) | (((/* implicit */int) arr_12 [i_3 + 1])))), (((int) (unsigned char)55)))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)172))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 24; i_5 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) arr_15 [i_3] [i_5 - 3]);
                    var_28 = ((/* implicit */unsigned int) var_1);
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_5))) || (((/* implicit */_Bool) ((2278894798U) / (((/* implicit */unsigned int) (+(((/* implicit */int) (short)14039)))))))))))));
                    arr_18 [20LL] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2859318381U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))) <= ((~(6962465947205852260LL))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */long long int) arr_12 [i_3]);
    }
    var_31 *= ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((((/* implicit */int) ((signed char) var_2))) | ((~(((/* implicit */int) var_16))))))));
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */int) var_7)), (((((/* implicit */int) ((((/* implicit */int) (signed char)15)) < (((/* implicit */int) (_Bool)0))))) - (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7)))))))))));
}
