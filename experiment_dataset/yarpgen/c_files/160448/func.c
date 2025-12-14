/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160448
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0 + 2] [(unsigned char)6])) ? (arr_0 [i_0 + 1] [(unsigned char)15]) : (arr_0 [i_0 - 1] [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) 12327122226468001960ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (signed char)-79)))))) > (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) max((arr_1 [(unsigned char)4]), ((signed char)-72)))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-79)) || (((/* implicit */_Bool) (unsigned short)8192)))))))) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14841679271383427824ULL))))))) : ((-(var_5))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 = (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_3] [i_4]))));
                    var_22 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)12236)) ? (((/* implicit */int) (unsigned short)8217)) : (((/* implicit */int) arr_10 [(unsigned char)18] [(unsigned char)18]))))));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) var_2)))))));
                }
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [12ULL] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) (signed char)-79)))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                arr_15 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((arr_12 [i_1] [1U] [i_2] [i_5]) >> (((((/* implicit */int) (signed char)-1)) + (20)))))) : (((/* implicit */short) ((((arr_12 [i_1] [1U] [i_2] [i_5]) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (20))))));
                var_25 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))), (((var_13) * (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12237)) ? (18411049305320844332ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39366)))))) ? (((/* implicit */int) (short)18009)) : (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) 642687248))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 &= ((((/* implicit */int) var_12)) > (((/* implicit */int) (!(var_0)))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_5] [i_6] [22U]))));
                    var_28 = ((/* implicit */unsigned int) arr_14 [i_1] [i_2]);
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    arr_21 [i_5] [i_1] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (35694768388707303ULL) : (var_7)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)56517)))))));
                    arr_22 [i_1] [i_1] [i_5] [i_7] = ((/* implicit */short) ((arr_11 [i_7 - 1] [i_7] [i_1] [i_7 - 2] [i_7 - 1] [i_7 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [8ULL] [i_1])))));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            var_30 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) arr_20 [i_1] [i_1] [i_8] [i_1] [i_9] [i_10]))))) : (var_9)));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((9342474953882262407ULL), (((/* implicit */unsigned long long int) (signed char)-98)))))));
                            var_32 = max((var_5), (min((var_7), (((((/* implicit */_Bool) (unsigned char)222)) ? (9689094099380718739ULL) : (((/* implicit */unsigned long long int) 3458223535U)))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_14 [(_Bool)0] [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_14 [(unsigned short)6] [i_2]))))))));
        }
    }
    for (unsigned int i_11 = 4; i_11 < 24; i_11 += 3) 
    {
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_30 [i_11] [i_11]), (arr_30 [i_11] [i_11]))), (((/* implicit */unsigned long long int) var_11))))) ? (arr_30 [i_11] [i_11]) : (((/* implicit */unsigned long long int) var_4))));
        arr_31 [i_11] [i_11] = ((/* implicit */unsigned long long int) (~(4091011955U)));
        var_35 = ((/* implicit */unsigned char) arr_30 [i_11] [i_11]);
    }
    var_36 = (+(((((/* implicit */_Bool) 17386592773037270901ULL)) ? (((((/* implicit */_Bool) (signed char)-6)) ? (8265386332909423345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (35694768388707273ULL))));
}
