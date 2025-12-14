/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13507
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
    var_14 = ((/* implicit */_Bool) (signed char)-120);
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [(_Bool)1] [(_Bool)1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-117))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)36)))) : (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_4 [i_2 + 3] [3ULL] [i_2 - 2])))))) : (((((/* implicit */_Bool) (signed char)0)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((signed char) ((arr_7 [i_2 + 1] [i_2 + 4] [i_0]) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24)) >> (((((/* implicit */int) var_7)) + (81))))))))))));
                    var_17 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) (~(var_9))))), (((unsigned long long int) arr_4 [i_0] [i_2] [i_2]))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_18 = ((/* implicit */short) ((11392197780878414842ULL) >> (((((/* implicit */int) (unsigned short)23578)) - (23526)))));
                    var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 580988801848937083ULL)))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) <= ((-(((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)5])))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_1))));
                    var_22 += ((/* implicit */unsigned short) var_2);
                }
                for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_1]);
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_19 [(unsigned short)8] [(unsigned short)8] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                                var_24 = ((/* implicit */_Bool) max(((unsigned short)65522), (((/* implicit */unsigned short) (signed char)127))));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)8] [i_1] [i_7 - 1] [i_0])))), (var_8))))));
                    var_26 = ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_1])))))));
                    var_27 ^= ((/* implicit */short) var_13);
                    var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)8] [i_7 - 1] [i_1]))) : (arr_13 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1])))));
                    var_29 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), ((+(((/* implicit */int) arr_1 [i_7 - 1]))))));
                }
                var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_0]))))), (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)45974))))) : ((-(arr_7 [(signed char)4] [(unsigned short)9] [i_1])))))));
            }
        } 
    } 
}
