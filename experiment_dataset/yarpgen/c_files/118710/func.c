/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118710
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 &= ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned short) arr_3 [i_1]);
                arr_7 [i_0] [i_0] [14] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 17473150081143490962ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))), (((/* implicit */long long int) (+(var_3))))))) ? (max((((/* implicit */long long int) arr_0 [i_1 + 4])), (min((var_2), (((/* implicit */long long int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) : (var_14)))));
            }
            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1111331100)) && (((/* implicit */_Bool) 8267906511050489458LL))));
            var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_9)))) ? (((/* implicit */long long int) (+(var_3)))) : (((long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_1])))) / ((-(((/* implicit */int) (unsigned short)10413)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) 11500464256893908262ULL)))));
            var_26 = ((/* implicit */long long int) arr_8 [i_3] [i_3 + 2]);
            arr_10 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
        }
        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 2147483634)))), (((-2995309915203764166LL) > (((/* implicit */long long int) 392673367))))));
            var_28 = ((/* implicit */int) var_13);
            arr_14 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (arr_9 [i_0])))), (((unsigned long long int) var_7)))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)51067)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32270))) : (3560519488372600836LL))), (((/* implicit */long long int) ((var_15) & (((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
            arr_15 [i_4] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */long long int) -1238379467)) : (var_12))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) | (var_12))))))));
        }
        arr_16 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -6368679507331857319LL)) ? (17693644985638897767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62953)))))) ? (((((/* implicit */int) (unsigned short)5441)) / (arr_13 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) 11521921108373054253ULL)) || (((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1])))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        arr_20 [(unsigned short)14] = ((((/* implicit */int) (!(((/* implicit */_Bool) -5703230579100640495LL))))) * ((~(((/* implicit */int) var_18)))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_17 [i_5] [i_5]) : (((long long int) arr_18 [i_5]))));
        arr_21 [i_5] = ((((/* implicit */_Bool) ((int) arr_18 [i_5]))) ? (arr_19 [i_5]) : (((((/* implicit */int) arr_18 [i_5])) * (((/* implicit */int) arr_18 [i_5])))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_17 [13LL] [i_6]);
        var_30 = (~(((unsigned long long int) arr_11 [i_6])));
    }
    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        arr_29 [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_17 [i_7 - 1] [i_7])) : (var_6)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7 + 1]))) < (arr_3 [i_7])))) : (((/* implicit */int) min((var_11), (arr_12 [i_7] [i_7])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_7]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_3 [i_7 + 1])))))))));
        var_31 = ((/* implicit */_Bool) (~(((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_12 [i_7 + 1] [(unsigned short)1])))) + (((/* implicit */int) var_5))))));
    }
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) -1668929223)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (unsigned short)12831)))))))))));
    var_33 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45357)) >= (((/* implicit */int) (unsigned short)42700)))))))))) > (min((((long long int) var_11)), (max((((/* implicit */long long int) (unsigned short)65533)), (var_2)))))));
}
