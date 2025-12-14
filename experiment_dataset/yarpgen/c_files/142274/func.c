/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142274
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
    var_14 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)210)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [(short)3] [(_Bool)1] [(short)3] = arr_4 [i_0] [i_1] [(_Bool)1];
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_3 - 3] [i_3] [i_3 - 1] [i_3 + 4])) ? (((/* implicit */int) arr_11 [i_3 - 3] [i_3] [i_3 - 3] [i_3])) : (((/* implicit */int) var_8)))) << (((((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_11 [i_3 - 3] [i_3] [(unsigned char)4] [i_3])))) - (18899)))));
                        arr_12 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_8 [i_0] [(unsigned char)13] [i_2] [i_3])))))), (min((-1LL), (((/* implicit */long long int) (unsigned char)255))))));
                        arr_13 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [(short)2] [(short)10] [i_3]);
                        arr_14 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)137))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_9))))) ? (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)9), ((unsigned char)227)))))))));
                        var_17 = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_3 + 4])) << (((((/* implicit */int) var_12)) - (221)))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
            arr_15 [(short)4] [(short)4] = ((/* implicit */short) max((max((((-7682702288942039934LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))))), (((/* implicit */long long int) min((arr_2 [i_1]), (var_5)))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [(short)3] [i_1])) + (((/* implicit */int) var_7))))))));
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_18 [i_0] [i_4] [i_4] = (((~(((/* implicit */int) arr_10 [(short)6] [i_4])))) > (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_0])), ((unsigned char)6)))));
            var_18 = ((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_0])) ? (arr_17 [i_4] [i_4] [i_4]) : (arr_17 [i_4] [i_4] [i_0]))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)45)) << (((((/* implicit */int) (unsigned char)235)) - (214)))))));
            arr_19 [(_Bool)1] [(_Bool)1] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_5))) == (((((/* implicit */_Bool) ((short) (unsigned char)240))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) var_4))))))));
            arr_20 [i_4] = ((/* implicit */short) max((((((/* implicit */int) max(((unsigned char)45), (var_12)))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) - (213))))), (((/* implicit */int) (unsigned char)0))));
        }
        arr_21 [i_0] = max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), ((~(-520150114476211639LL))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_26 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1])) ? (((/* implicit */int) arr_24 [i_5] [i_5])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_8)) - (18))))) : (((/* implicit */int) min((var_4), (arr_22 [i_5]))))))) && ((!((_Bool)1)))));
        var_19 = ((/* implicit */long long int) (unsigned char)179);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_20 = (!(((((/* implicit */_Bool) arr_2 [i_6])) && (((/* implicit */_Bool) arr_2 [i_6])))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_34 [i_7] [i_7] = ((/* implicit */long long int) ((_Bool) max(((unsigned char)5), (((/* implicit */unsigned char) (_Bool)1)))));
                    var_21 = ((long long int) (+(((/* implicit */int) (unsigned char)235))));
                    arr_35 [i_8] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)8577))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_6] [i_8]))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_7] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_6]))))), (((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)5321)) - (5272)))))))));
                    arr_36 [(_Bool)1] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6] [i_6])) << (((((/* implicit */int) var_13)) - (236)))))) : (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)58)), (arr_23 [12LL]))))) & (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))))));
                }
            } 
        } 
        arr_37 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)139))))))) ? ((~((~(((/* implicit */int) var_8)))))) : (((((/* implicit */int) (unsigned char)74)) | (((/* implicit */int) arr_25 [i_6]))))));
    }
    var_22 = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) min((((/* implicit */short) var_13)), (var_9)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
    {
        arr_40 [i_9] = min(((+(((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) max((((var_0) ? (((/* implicit */int) (short)5861)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) arr_7 [i_9 + 1] [i_9 + 1] [i_9 - 2])) * (((/* implicit */int) (short)-23079))))))));
        arr_41 [i_9] = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)255))))));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1479060764585736066LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32756)))))) ? (((var_7) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9 + 1] [i_9 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        /* LoopSeq 4 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_44 [i_9 - 2] = ((/* implicit */_Bool) var_4);
            arr_45 [(short)0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9])))))))))) * (arr_8 [i_10] [i_9] [(_Bool)1] [i_9])));
        }
        for (unsigned char i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                arr_52 [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned char) arr_7 [i_11 - 2] [i_9 - 1] [(_Bool)1]);
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_9] [i_11])) * (((/* implicit */int) (short)-32751))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_50 [i_9 + 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9] [i_9 + 1] [(short)0] [i_9]))) : (var_6))))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_12] [i_12])), (var_12)))))));
            }
            arr_53 [(_Bool)1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (short)32767))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned char)81)))))))));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            arr_56 [(short)3] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_9 - 1])) ? (((((/* implicit */int) (short)5418)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (short)-1)))));
            arr_57 [i_13] [i_13] [i_9] = ((/* implicit */long long int) ((arr_39 [i_9 - 2] [i_9]) && (arr_39 [i_9 - 2] [i_9])));
            arr_58 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9 - 2] [i_9 - 1] [i_9 - 1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_6 [i_9 + 1] [i_9]))));
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            arr_61 [i_14] = ((/* implicit */short) var_2);
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_29 [i_9 - 2] [i_9 - 1]), (((/* implicit */unsigned char) arr_39 [i_9 - 1] [i_9 - 2]))))) ? (((arr_39 [i_9 + 1] [i_9 + 1]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9 - 1] [i_9 + 1]))))) : (max((arr_8 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_14]), (((/* implicit */long long int) arr_29 [i_9 - 2] [i_9 - 2]))))));
        }
        var_26 = ((/* implicit */short) (_Bool)1);
    }
}
