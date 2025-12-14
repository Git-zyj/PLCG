/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161607
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_16 += ((/* implicit */unsigned int) (unsigned char)59);
                    var_17 = ((/* implicit */signed char) min((max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))), (min((((/* implicit */unsigned long long int) ((-8778694711877132102LL) != (((/* implicit */long long int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) / (arr_1 [i_0])))))));
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_3]);
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_18 &= ((/* implicit */long long int) ((unsigned char) max((arr_14 [i_3]), (((/* implicit */unsigned long long int) var_14)))));
                        var_19 = ((/* implicit */long long int) ((unsigned int) ((short) arr_7 [i_4])));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_3])) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_15 [i_4] [(short)5] [i_1] [(unsigned char)9] [i_0] = ((/* implicit */unsigned int) var_11);
                    }
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) | (((/* implicit */long long int) 1426715799))))), (arr_14 [i_1]));
                        arr_19 [i_0] [1U] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_3]);
                    }
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (0ULL) : (((/* implicit */unsigned long long int) 840274524U)))) : (((/* implicit */unsigned long long int) 437130957U)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 3; i_6 < 6; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_10 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 1]), (arr_10 [i_6 - 2] [i_6 + 2] [i_6 + 2] [i_6 + 2]))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-((-(((((/* implicit */long long int) 1292433021U)) / (var_15))))))))));
                        var_24 = var_7;
                        arr_24 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) (unsigned char)210);
                    }
                    for (unsigned int i_7 = 3; i_7 < 6; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((arr_21 [i_0]), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1] [i_3] [i_1] [i_0])), ((unsigned char)83)))) : ((~(var_9)))))));
                        var_26 = ((/* implicit */_Bool) var_3);
                    }
                }
                var_27 = ((/* implicit */unsigned int) max((var_27), (3850588380U)));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_12);
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7941268201811883916LL))));
    /* LoopSeq 1 */
    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_30 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9216573290488583202LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [8LL] [(short)0] [i_10] [i_8] [i_11])))))) / (((((/* implicit */unsigned long long int) arr_31 [i_8] [i_8] [i_8])) / (var_10)))))));
                        arr_40 [i_8] [i_9] [0LL] [i_11] [i_8] [i_9] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8 + 1] [6] [6])) ? (4349344892917076169LL) : (((/* implicit */long long int) arr_34 [i_8] [i_9] [3ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)25386), (((/* implicit */short) (unsigned char)38)))))) : (((((/* implicit */_Bool) (unsigned short)65216)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) (short)20665)), (min((var_1), (var_11)))))));
                    }
                } 
            } 
        } 
        arr_41 [i_8] = (+(min((((/* implicit */int) arr_36 [i_8] [i_8] [i_8])), (((((/* implicit */int) arr_36 [i_8] [i_8] [(unsigned short)5])) >> (((-1850174153) + (1850174176))))))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 1; i_13 < 13; i_13 += 1) 
            {
                {
                    arr_46 [i_8] [(_Bool)1] [i_8] [i_8 + 2] = ((/* implicit */short) ((((((_Bool) arr_31 [i_8] [i_12] [i_8])) ? ((-(arr_28 [i_8] [i_13]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_29 [i_8])), (-7330740297637442608LL)))))) / (max(((-(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)60))) / (var_15))))))));
                    arr_47 [i_8] [i_8] [i_13] = ((/* implicit */long long int) (unsigned short)65535);
                    arr_48 [i_8] [i_8] [i_12] [i_8] = ((/* implicit */long long int) arr_44 [i_8 + 1] [i_8] [(_Bool)1] [(unsigned char)8]);
                }
            } 
        } 
        arr_49 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8 + 2])) ? (var_3) : (arr_28 [i_8] [i_8])))))))) | (max((((/* implicit */long long int) (unsigned short)65535)), (18014261070528512LL)))));
        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) 8258115120738221598ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26526)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8]))) : (arr_35 [i_8 + 2] [i_8] [i_8 - 3] [i_8])))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) arr_38 [i_8] [i_8 - 2] [i_8] [4U] [i_8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15)))) != (5568719542907359171LL)))))));
    }
}
