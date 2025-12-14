/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14650
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
    var_18 = ((/* implicit */unsigned long long int) min((min((max((6609787075834094842LL), (((/* implicit */long long int) (unsigned char)6)))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned char) var_8))))))), (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)56))))), ((~(((/* implicit */int) var_1)))))))));
    var_19 &= var_0;
    var_20 -= ((/* implicit */_Bool) (unsigned short)17);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_1 [(unsigned short)1] [i_0])), (var_16)))))) ^ (((((/* implicit */_Bool) arr_0 [(unsigned char)11] [(short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_0 [i_0] [i_0])))));
        var_22 += ((/* implicit */unsigned char) (-((~(4030906333U)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        var_23 = ((/* implicit */long long int) min(((~(1793938296))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45807)) || (((/* implicit */_Bool) arr_2 [(unsigned short)1]))))) / (((/* implicit */int) ((unsigned short) (unsigned char)39)))))));
    }
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 22; i_3 += 4) 
        {
            for (unsigned int i_4 = 4; i_4 < 22; i_4 += 3) 
            {
                {
                    var_24 += ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [8LL]))));
                    arr_13 [i_2] [i_3 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_10))));
                    var_25 = ((/* implicit */_Bool) ((max((arr_11 [i_4 - 4] [i_3 - 2] [i_2]), (((/* implicit */unsigned int) var_3)))) << (((((/* implicit */int) (unsigned short)65535)) - (65506)))));
                    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) min((arr_6 [i_3]), (arr_6 [i_2]))))))) || (((/* implicit */_Bool) (+(1281188879U))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 - 4]);
                        arr_16 [i_2] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) -2048501147);
                            arr_20 [i_2] [i_2] [i_2] [i_2 - 1] [(unsigned char)1] [(signed char)14] [i_2] = ((((/* implicit */int) (unsigned char)209)) ^ (((/* implicit */int) (short)-17865)));
                        }
                        var_29 = ((/* implicit */unsigned char) (~(-1270331599294434384LL)));
                        arr_21 [i_2] [i_3 - 2] [i_2] [14U] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)44614))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_26 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)226), (var_3)))) || ((!(((/* implicit */_Bool) arr_25 [i_2] [i_7]))))))), (min((arr_25 [i_2] [i_2]), (((/* implicit */long long int) arr_8 [i_2] [i_2]))))));
            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
            arr_27 [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2] [i_2] [i_2 + 1])), (-1396982544))), ((~(0)))));
        }
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (~(var_2))))));
    }
}
