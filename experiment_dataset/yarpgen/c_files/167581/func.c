/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167581
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
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((var_11), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (var_13))), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_0 + 2] [i_3 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_0 + 4] [i_1] [i_3 - 1] [i_0 + 3])))))) : ((~(((/* implicit */int) var_0)))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 288230376151711743ULL)) ? (((/* implicit */int) (short)30499)) : (((/* implicit */int) (unsigned short)65522))))))) ? (((/* implicit */int) (((+(1470994901U))) <= (2204141867U)))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))))));
                        arr_12 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_10)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)47)), ((unsigned short)25)))))))));
                        var_19 = ((/* implicit */short) (_Bool)1);
                        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) -1870147878))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1])), (var_7)))))) & (((/* implicit */int) ((short) var_9)))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [i_0 + 4]), (((/* implicit */unsigned char) (signed char)-16))))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)63))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_8))))))) <= ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_9)))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (_Bool)1)) : (-1870147878)))) - (((((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
                        arr_16 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65522)) ? (2090825433U) : (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-31897)) * (((/* implicit */int) (signed char)63))))) : (var_11)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_5)))))) : (((((/* implicit */int) ((signed char) var_4))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))))))));
                        var_24 = ((/* implicit */unsigned char) (unsigned short)20357);
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)41519)) : (((/* implicit */int) var_0)))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_0] [i_1] [i_2] [i_5 + 1] [i_6 - 1]))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)0))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                        var_27 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-116)))))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (9223372036854775788LL)))));
                    }
                }
            } 
        } 
    } 
}
