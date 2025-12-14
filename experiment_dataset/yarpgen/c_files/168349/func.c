/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168349
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_5)) <= (((long long int) var_3))))) > (((int) ((unsigned long long int) (unsigned char)153)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_17)))) || (((/* implicit */_Bool) 1701219869)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) min((((long long int) -723886275)), (((/* implicit */long long int) 0))));
                    arr_11 [(signed char)4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2])) + ((+(((/* implicit */int) var_14))))))), (4578330776621181240ULL)));
                }
                for (int i_3 = 3; i_3 < 11; i_3 += 1) 
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */int) var_17);
                    var_21 = ((/* implicit */int) min((min((min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) var_14))))))), (((/* implicit */unsigned long long int) min(((unsigned char)197), ((unsigned char)178))))));
                    arr_15 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) < (((/* implicit */int) (unsigned char)200))))), (((unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_0]), (arr_12 [i_0] [i_1]))))));
                    var_22 = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_23 = max((((var_5) % (24))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_4] [i_4] [i_5 - 2])) > (((/* implicit */int) arr_16 [i_0] [i_4] [i_3] [i_3] [i_5 - 1]))))));
                                var_24 ^= ((/* implicit */unsigned char) ((int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0] [i_3 - 3] [i_4] [i_5 + 1]))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_18 [(unsigned short)7])) << (((((/* implicit */int) (signed char)94)) - (85))))))), (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (unsigned char)168))))))))));
                                var_26 += min((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7856))) : ((~(-6343841169346107560LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(845466386U)))) || (((/* implicit */_Bool) ((unsigned short) (unsigned char)102)))))));
                            }
                        } 
                    } 
                }
                var_27 += ((/* implicit */unsigned int) ((unsigned char) ((_Bool) arr_4 [i_0] [i_1 - 2] [i_1 - 2])));
            }
        } 
    } 
    var_28 = ((/* implicit */short) 3126942414U);
    var_29 = ((/* implicit */unsigned long long int) var_3);
}
