/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119455
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
    var_19 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (short)30076)))), (((/* implicit */int) (short)31179))));
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_21 = (-(((/* implicit */int) (unsigned char)10)));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1])))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), ((unsigned char)13)));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_5 [i_0]) : (var_18))) : ((-(((/* implicit */int) arr_4 [8] [i_1])))))))));
            arr_6 [i_1] = var_4;
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_1 + 1] [i_0 - 2])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_1 - 1] [i_0 + 2])))));
                        var_25 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */int) var_2)));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 - 2])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            arr_16 [i_0 + 2] [(unsigned short)13] [i_0 + 2] = (unsigned char)47;
            var_27 = ((((/* implicit */_Bool) var_17)) ? (((-1) / (((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned char)13)));
            /* LoopSeq 3 */
            for (int i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
            {
                arr_19 [i_5] = var_2;
                arr_20 [i_5 - 1] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((int) var_8));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) * (13485402381339485076ULL)))) ? (((/* implicit */int) arr_12 [i_0 + 3] [i_0 - 2])) : (((((/* implicit */_Bool) 12656616074170918464ULL)) ? (((/* implicit */int) (unsigned char)13)) : (304601889)))));
            }
            for (int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 - 2]))));
                var_30 += ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 3])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((0) >= (((/* implicit */int) var_1))))));
            }
            for (int i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) (+(((-1405257311) * (0)))));
                var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) * (arr_18 [i_7 - 1] [i_4] [i_7 + 1] [i_7 - 1])));
            }
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 3] [i_4] [i_4]))) == (var_12))))) : (((((/* implicit */unsigned long long int) 3)) - (6133036824125859541ULL))))))));
            arr_26 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) 2147483647)) : (((((/* implicit */_Bool) (unsigned char)9)) ? (1030528568085234261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18295)))))));
        }
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            var_34 = ((/* implicit */unsigned char) ((int) arr_12 [i_8 + 1] [i_8 - 2]));
            var_35 = ((/* implicit */int) var_15);
            var_36 += ((/* implicit */short) var_5);
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0]))))) << (((/* implicit */int) ((((/* implicit */int) var_1)) < (2147483645))))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_38 = ((((/* implicit */_Bool) arr_32 [i_9])) ? ((~(((/* implicit */int) (unsigned char)235)))) : ((-(arr_31 [i_9] [i_9]))));
        arr_33 [i_9] = var_5;
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 15; i_10 += 4) 
    {
        for (int i_11 = 1; i_11 < 15; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_40 [i_10 + 2]))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((int) arr_38 [i_10] [(unsigned char)4]))))) ? ((-(((/* implicit */int) (unsigned short)48662)))) : (((((/* implicit */_Bool) ((int) 961155536))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (unsigned char)208)) ? (-388794511) : (((/* implicit */int) (short)-6360))))))));
                }
            } 
        } 
    } 
}
