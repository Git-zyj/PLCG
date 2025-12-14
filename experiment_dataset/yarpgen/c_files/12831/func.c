/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12831
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) ((short) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-6419131236059786584LL) >= (((/* implicit */long long int) -464868225)))))) : (9601955693904615973ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_3), (var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(4567742218451696714LL)))) ? ((+(((/* implicit */int) var_5)))) : (var_12)));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((long long int) 464868224));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            arr_20 [i_1] [6] [i_2] [i_2] [i_4] [7] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned int) -194826450)), (((unsigned int) arr_14 [i_3 - 1] [i_4] [i_4 - 3] [i_5 - 2]))));
                            var_20 = ((/* implicit */short) (~(max((((((/* implicit */int) (short)3875)) + (((/* implicit */int) (short)-24793)))), (((/* implicit */int) arr_2 [i_5 + 2]))))));
                            arr_21 [i_4] [i_2 - 1] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) max((2147983139495448223ULL), (((/* implicit */unsigned long long int) (short)24800))))));
                            arr_22 [i_4] [i_4] = ((((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)29))) && (((/* implicit */_Bool) (unsigned char)120))))) - (((/* implicit */int) min((((8241078175189504667LL) != (((/* implicit */long long int) ((/* implicit */int) (short)24792))))), (((((/* implicit */_Bool) 7865556116475425374LL)) || (((/* implicit */_Bool) var_15))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24793))))) << (((((((/* implicit */_Bool) var_12)) ? (560214144) : (((/* implicit */int) var_4)))) - (560214138))))))));
                            var_22 = ((/* implicit */int) (-(6761521684179558706ULL)));
                            var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) 634533090U))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) var_10))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) arr_16 [i_1] [i_2] [i_3 - 1]);
                            arr_28 [i_1] [i_4] [7ULL] [(signed char)1] [i_7] [i_1] = ((int) arr_8 [i_3 - 1] [i_2 + 1] [(_Bool)1]);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * ((-(((/* implicit */int) (unsigned short)29029))))));
                            arr_29 [i_1] [i_2 - 1] [i_3 - 1] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_10 [i_3 - 1]))));
                        }
                        arr_30 [i_4] [i_4] [i_3 - 1] [i_4 - 3] [i_4] [i_3] = ((/* implicit */signed char) (+(((long long int) (!(((/* implicit */_Bool) var_14)))))));
                        arr_31 [i_4 - 3] [i_4] [i_3] [i_3 - 1] [i_4] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_16 [i_1] [i_2 - 2] [i_3]))))));
                    }
                } 
            } 
        } 
        arr_32 [i_1] [i_1] &= ((/* implicit */short) ((long long int) 2147983139495448219ULL));
    }
    var_26 = ((/* implicit */int) max((((((/* implicit */int) var_0)) != (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))))), ((!(((/* implicit */_Bool) (-(3921494183U))))))));
}
