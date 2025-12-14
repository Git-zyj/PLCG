/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148024
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_3)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_0)))) : (var_4)))) ? (((var_3) & (((/* implicit */long long int) (~(-1962609672)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    var_16 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (-((~(((((/* implicit */unsigned int) -1962609675)) & (294656793U)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) arr_2 [i_0])) : ((+(1549188798975457475LL)))))) && (((/* implicit */_Bool) ((int) arr_1 [i_0])))));
            /* LoopSeq 3 */
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_10 [i_0 + 2] = (-(((/* implicit */int) var_11)));
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 3641994859U)) && (((/* implicit */_Bool) (unsigned char)135))))) - (arr_3 [i_3] [i_4])))), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) ^ (-7364373040531624636LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (2U) : (var_5))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 294656806U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)24957))));
                        var_21 = ((/* implicit */short) ((unsigned short) var_4));
                    }
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2 + 2] [i_0] [i_5] = ((/* implicit */signed char) 6532770897153700618LL);
                        var_22 ^= ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_0 [i_0 - 2])) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (9468))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)11526))))) ? (((arr_1 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))) : (((/* implicit */unsigned int) var_6)))), (((4000310502U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)20339))))))))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] &= ((/* implicit */signed char) ((var_7) != (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_1 [i_2])))))))));
                    }
                }
                arr_19 [i_0] [i_1 - 1] [i_2] = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)32767)) ? (-1347983190) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(((/* implicit */int) ((short) (short)20343))))) + (20347)))));
            }
            for (short i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                arr_22 [i_0] [2] [(unsigned char)10] [2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (((850539801924564121LL) % (((/* implicit */long long int) arr_2 [i_0 + 2]))))));
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_6 [i_6] [i_6] [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_12))));
                    var_26 = ((/* implicit */int) 9223372036854775807LL);
                }
                var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_14 [15U] [i_0 - 3] [i_1 - 1] [i_6 + 3] [i_6 - 1]) >= (((/* implicit */int) arr_4 [i_1 + 1])))))));
            }
            for (signed char i_8 = 4; i_8 < 20; i_8 += 1) 
            {
                arr_29 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_27 [i_8 - 2] [i_1 + 1])))) ? (max((278234670116365615LL), (((/* implicit */long long int) (unsigned short)35932)))) : (((((/* implicit */_Bool) arr_27 [i_8 - 3] [i_0])) ? (arr_27 [i_8 - 3] [i_1]) : (arr_27 [i_8 + 1] [i_1])))));
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)47227)), (15U)));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_8]))));
            }
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                var_30 = ((/* implicit */long long int) min((var_30), (arr_16 [i_0] [i_1])));
                arr_32 [i_0] [i_1 + 1] [i_0] [i_1 + 1] = ((((/* implicit */int) (signed char)111)) | (((((/* implicit */_Bool) arr_25 [i_0] [i_1 - 1] [i_9] [i_0 + 2] [(short)20] [i_9 + 1])) ? (arr_25 [i_0 + 2] [i_1 + 1] [i_9] [i_0 - 2] [(short)12] [i_9]) : (arr_25 [i_0 - 1] [i_1 - 1] [i_9] [i_0 - 2] [(_Bool)1] [i_9 + 1]))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((max((arr_5 [i_1 - 1] [i_9] [19]), (var_5))) << (((((((/* implicit */_Bool) -850539801924564134LL)) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_0 [i_9 - 1]), (((/* implicit */unsigned short) (_Bool)1))))))) - (36))))))));
            }
            var_32 += ((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0]);
        }
        for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            arr_36 [i_0] [i_0] = ((/* implicit */short) (~(((var_0) + (((/* implicit */int) arr_26 [i_10 + 1] [i_10 + 2] [i_10]))))));
            var_33 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0 + 1] [i_0] [i_0] [i_10]);
        }
        for (short i_11 = 4; i_11 < 17; i_11 += 2) 
        {
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20113)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57240))) : (var_4)))) || (((/* implicit */_Bool) arr_33 [i_0 - 3] [i_0 - 2]))))), (((((/* implicit */_Bool) var_8)) ? (min((arr_27 [i_11] [i_11]), (arr_16 [i_0] [i_11]))) : (max((((/* implicit */long long int) (_Bool)1)), (var_4))))))))));
            arr_39 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_11 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((arr_20 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned int) (-(((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((((/* implicit */int) (unsigned char)156)) - (156)))))))) : (((((/* implicit */_Bool) (~(9791067321728198385ULL)))) ? (min((4294967294U), (4000310502U))) : (((/* implicit */unsigned int) (-(arr_24 [i_0] [i_0] [i_0 - 2] [i_11] [i_11 - 3]))))))));
        }
        arr_40 [i_0] [i_0] = ((/* implicit */long long int) arr_34 [i_0] [i_0]);
    }
    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        arr_44 [i_12] = ((/* implicit */short) arr_28 [i_12] [i_12] [i_12] [i_12]);
        var_35 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 881666064)) && (((/* implicit */_Bool) max((-7412026342373966483LL), (((/* implicit */long long int) -881666048)))))))), (((((((-850539801924564118LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0))))));
        arr_45 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((832224438U) >> (((/* implicit */int) arr_35 [i_12] [i_12])))), (((/* implicit */unsigned int) ((int) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(short)16])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7754037033679641171LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_12]))) / (arr_27 [i_12] [i_12])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_28 [(short)5] [i_12] [i_12] [4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) 875914599)))))))));
    }
}
