/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138480
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
    var_12 = ((/* implicit */int) (unsigned char)106);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 2] [i_3 + 2]))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3] [(unsigned short)13] [i_3] [i_3 + 2] [(unsigned short)13])) ? ((+(((/* implicit */int) (unsigned char)106)))) : (((((/* implicit */int) (unsigned short)52693)) * (((/* implicit */int) var_3))))));
                    }
                    for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_4] [i_0] [i_0])) % (((/* implicit */int) arr_0 [i_0])))))))));
                        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)129)) | (((-1716973585) ^ (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_4 - 3])) ? (arr_2 [i_0]) : (((/* implicit */int) var_9))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)211)) % (((/* implicit */int) (signed char)-68))));
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3232500112U))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1])) ? (5637726844507870420ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0])))))) ? (((/* implicit */int) max((arr_14 [i_1]), (arr_14 [i_4 + 3])))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2])) >= (((/* implicit */int) arr_14 [i_0])))))));
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)117)), (((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_2]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (unsigned char)106)) * (((/* implicit */int) (unsigned char)124)))) : (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_9 [i_0])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65176))) > (((9223372036854775807LL) | (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */int) var_6))))) ? (((((_Bool) var_11)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_2)) : (arr_3 [i_1] [(unsigned char)10]))) : (((/* implicit */int) arr_11 [i_0])))) : (((/* implicit */int) arr_0 [i_1]))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_0 [i_0]))));
                    arr_19 [i_0] [i_5] = ((/* implicit */signed char) ((_Bool) 9064397785954812170ULL));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_17 [i_0] [i_1] [i_6]))))) : (((((/* implicit */int) (unsigned char)161)) | (((/* implicit */int) var_8))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_24 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (33290)))))) : (((/* implicit */signed char) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((((/* implicit */int) arr_0 [i_0])) - (33290))) + (23501))) - (23))))));
                    arr_26 [i_0] [i_0] = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_7] [i_7]);
                    var_25 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_7] [i_1] [(unsigned char)16])) || (((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [(_Bool)1] [i_7]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))))))));
                    var_26 = ((/* implicit */signed char) (-(arr_18 [i_0] [i_0] [i_1] [i_7])));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) (~(var_10)))) : (arr_21 [i_0] [i_0] [i_1] [i_1])));
                }
                arr_27 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : ((-(5897511183882910660ULL)))))) ? (8144369405273961036LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)200))))) ? (((/* implicit */int) ((unsigned char) arr_14 [i_0]))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1))))) != (-7015117614994969257LL))))));
            }
        } 
    } 
}
