/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112195
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
    var_11 = ((/* implicit */unsigned short) var_3);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15295)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) (short)24576)) ? (var_2) : (((/* implicit */int) (signed char)0)))) >= (((/* implicit */int) var_9)))))));
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26161)) >> (((1417270082) - (1417270055)))))) ? (((/* implicit */int) min((var_9), (var_3)))) : (((/* implicit */int) ((unsigned short) var_4))))) & (var_8)));
    }
    for (unsigned int i_1 = 3; i_1 < 7; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) ((_Bool) arr_5 [i_1]))) + (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 2])) ? (var_8) : (114613086)))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_5 [i_1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_9))));
                        arr_14 [i_1] [i_1] [i_4] = ((/* implicit */long long int) min((((unsigned long long int) 222919777U)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (4294967295U))))));
                    }
                    for (int i_5 = 3; i_5 < 8; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */int) (_Bool)1);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_3 - 1]), (arr_2 [i_3 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))) : (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) == (36028797002186752LL)))))))));
                            var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_3]))))) > (((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (7059711779146912385LL)))))), (max((((/* implicit */unsigned long long int) var_2)), (2107101856437200663ULL)))));
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_1)) ? (3388722105789354435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19397)))))))) && (((/* implicit */_Bool) max(((unsigned short)2), (min((var_6), (((/* implicit */unsigned short) var_5)))))))));
                    }
                    for (int i_7 = 3; i_7 < 8; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) (unsigned short)50242);
                        arr_21 [6] [6U] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_16 [i_1 - 3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_11 [i_1 + 2] [i_3 - 1] [i_3 + 2])))))));
                        var_22 = ((/* implicit */unsigned int) arr_8 [i_1]);
                    }
                    var_23 |= ((/* implicit */unsigned long long int) max((max((arr_15 [i_1] [i_1] [i_3 + 1] [i_1 + 3] [i_1]), (arr_15 [i_1] [i_1] [i_3] [i_1 - 3] [i_3]))), (((/* implicit */short) ((((/* implicit */int) arr_15 [i_1] [i_2] [(short)9] [i_1 - 1] [i_1])) == (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_1 + 3] [i_3])))))));
                    arr_22 [(short)8] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)19390))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19628))) + (((((/* implicit */_Bool) (unsigned short)40550)) ? (7059711779146912385LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) var_7);
    }
    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32834))))), (((((/* implicit */_Bool) arr_23 [12U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)188)))))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (1324448782828072667LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-56))))))) : (-917839919))))));
}
