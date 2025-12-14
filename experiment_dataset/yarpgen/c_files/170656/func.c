/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170656
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((signed char) arr_7 [i_0] [i_1]))), (arr_2 [i_0]))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_5 [i_0] [(unsigned char)19] [(unsigned char)19])))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11)) ? (-8390512455634573359LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) & (var_9)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (var_2)))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (-8390512455634573372LL)))))));
                    var_20 += ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) (_Bool)1))), (min((min((((/* implicit */int) arr_4 [i_1] [i_1] [(signed char)22])), (arr_2 [i_0]))), (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(14336U)))) ? (arr_6 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5))))))) < (min((((/* implicit */int) ((unsigned char) arr_3 [i_0] [(signed char)6]))), (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (var_2)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (2147483647) : (((/* implicit */int) (short)-256))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) 571957152676052992LL);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_4]);
                    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (var_9)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 23; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) var_11);
                        arr_17 [i_5] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 3])) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-8742))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36959)))))) ? (((/* implicit */long long int) min((-863398268), (((/* implicit */int) (signed char)63))))) : (((long long int) ((14336U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)9))))))));
                        var_26 &= ((/* implicit */int) ((((((/* implicit */_Bool) max(((unsigned short)33623), (var_13)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_10 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_14)))) < (((/* implicit */int) ((unsigned char) arr_6 [i_5 - 3])))));
                        var_27 *= ((/* implicit */short) (((-(max((13743234914156257985ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) / (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)14)) ? (arr_8 [i_0] [i_1] [(signed char)7] [i_5]) : (((/* implicit */int) (unsigned short)33603)))), (((/* implicit */int) min(((signed char)-75), (((/* implicit */signed char) (_Bool)0))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned long long int) ((unsigned short) (((+(arr_16 [i_7 - 1] [i_6] [i_4] [i_1] [(signed char)3] [i_0]))) >= (arr_16 [i_0] [(_Bool)1] [(_Bool)1] [i_6] [i_7] [(_Bool)1]))));
                                arr_25 [i_0] [i_0] [i_4] [i_6] [i_7] &= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)31932)) < ((~(((/* implicit */int) (signed char)11)))))) ? (((/* implicit */int) (unsigned short)33600)) : (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */int) var_1);
                }
                var_30 *= ((/* implicit */_Bool) (+(arr_16 [i_1] [i_1] [(unsigned char)4] [(_Bool)1] [(unsigned char)4] [i_1])));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (unsigned short)31922);
    var_32 = ((/* implicit */unsigned int) var_4);
}
