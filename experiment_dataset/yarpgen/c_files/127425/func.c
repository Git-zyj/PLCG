/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127425
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
    var_17 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) var_9))));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_14)))))), (((unsigned int) (~(((/* implicit */int) var_11)))))));
    var_19 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_14)), (((long long int) 1272910949U)))), (((/* implicit */long long int) ((unsigned char) var_13)))));
    var_20 = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (3022056347U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) / (var_3));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [(signed char)3] = ((/* implicit */long long int) min((var_6), ((unsigned short)43552)));
        var_22 = ((/* implicit */signed char) min((var_22), (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_23 = ((/* implicit */int) var_0);
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(var_5))) - (((/* implicit */unsigned long long int) (-(1272910949U)))))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) ? (274875809792ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) 2315712402757681362LL)))))))) ? (min((max((((/* implicit */long long int) arr_3 [i_0])), (-4092551771742321070LL))), (((/* implicit */long long int) var_12)))) : ((+(min((((/* implicit */long long int) arr_1 [i_1])), (-1900365183835230740LL)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                var_24 *= arr_0 [i_0 + 1];
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_25 -= ((/* implicit */_Bool) arr_3 [2U]);
                    arr_12 [i_1] [(unsigned char)1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_2)), (arr_3 [i_0])));
                    arr_13 [i_1] [i_2] [i_1] [i_0] [7ULL] [i_1] = ((/* implicit */int) (short)13314);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [(signed char)9])) : (min((((/* implicit */int) var_12)), ((~(((/* implicit */int) arr_10 [i_0] [i_3] [i_1] [i_0]))))))));
                    arr_14 [i_0] [i_1] [i_0] [i_1] = ((long long int) (-(((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) max(((+(arr_4 [i_2 + 1] [i_0 + 2] [i_4 + 1]))), (((/* implicit */unsigned int) min((((/* implicit */short) var_1)), (((short) 3022056347U)))))));
                    var_27 -= ((/* implicit */_Bool) 4017014979091707737ULL);
                }
            }
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                arr_21 [i_1] = ((/* implicit */unsigned long long int) ((short) (((-(arr_11 [i_0] [i_0] [i_1] [i_1]))) & (((/* implicit */int) ((unsigned short) 3022056346U))))));
                arr_22 [i_5] [i_1] [i_0 - 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) 1272910950U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(14234151142550731434ULL))))) % (((/* implicit */unsigned long long int) ((arr_3 [(signed char)6]) + (min((((/* implicit */unsigned int) arr_9 [i_1])), (arr_7 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_0] [(unsigned short)1] [i_7] [(unsigned short)13] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_5] [i_6] [i_1]))) : (arr_7 [i_1])))))) || (((((arr_9 [i_1]) >= (((/* implicit */int) (unsigned short)35639)))) || (((/* implicit */_Bool) max((arr_3 [(signed char)15]), (arr_4 [i_7] [i_1] [i_0]))))))));
                            arr_29 [i_0 - 1] [i_0] [1ULL] [i_1] [i_0] = ((min((min((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [i_0])), (3340005765549337068LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 2644489599713880784LL))))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29887))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_19 [i_7] [i_7]))));
                            arr_30 [i_1] = ((/* implicit */short) 2273328051976208877ULL);
                        }
                    } 
                } 
                arr_31 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1])))))), (min((((unsigned short) (unsigned short)35639)), (((/* implicit */unsigned short) (signed char)-110))))));
                arr_32 [i_0] [i_1] [i_1] = (~(max((arr_27 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) (-(arr_9 [i_1])))))));
            }
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [10U])) || (((/* implicit */_Bool) (unsigned short)65535))))), (var_16)))))))));
        }
        arr_33 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)53230);
    }
}
