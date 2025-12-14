/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165184
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
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)8))));
    var_15 = (short)20312;
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [(short)9] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))));
        var_16 = ((/* implicit */short) (unsigned char)0);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((var_8), (((/* implicit */short) (unsigned char)247))))), ((~(arr_5 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (unsigned char)7))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2]))));
            arr_13 [i_1] = ((/* implicit */long long int) (-(arr_9 [i_1 + 1])));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) 253651575962061776LL))));
            var_20 = ((/* implicit */unsigned char) (-(var_5)));
            arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_10 [(short)16] [i_2 - 2] [i_2]))));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_18 [i_3] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((arr_7 [i_3] [i_3 + 2]), (((/* implicit */short) (unsigned char)109))))))));
        var_21 = ((/* implicit */unsigned char) max(((short)32767), (((/* implicit */short) (unsigned char)240))));
    }
    /* LoopSeq 4 */
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_23 [i_4] = ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 4) 
        {
            var_22 = ((/* implicit */short) -4979895635104138553LL);
            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) (short)-9513)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)147)), ((short)8687)))))), (((/* implicit */int) arr_26 [(short)10] [i_4]))));
        }
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            arr_32 [i_4] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 1])))))) : (max((var_5), (((/* implicit */long long int) arr_20 [i_6 - 1] [i_6 + 1]))))));
            arr_33 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-14179))));
            arr_34 [i_4] [i_4] = ((/* implicit */unsigned char) -9223372036854775790LL);
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [(unsigned char)16])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775790LL))))))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (short)371);
                            arr_44 [i_4] [(short)17] [i_8] [i_7] [i_6] [i_4] = ((/* implicit */short) (unsigned char)0);
                            var_26 -= ((/* implicit */short) -253651575962061777LL);
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
    {
        arr_47 [(unsigned char)5] = ((unsigned char) (!(((/* implicit */_Bool) (short)31956))));
        arr_48 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551580ULL)) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551603ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)9)))))));
    }
    for (short i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
    {
        arr_51 [i_11] = ((unsigned char) ((((/* implicit */int) arr_10 [i_11] [i_11] [i_11])) >> (((((/* implicit */int) max((arr_2 [i_11] [i_11]), (((/* implicit */short) (unsigned char)96))))) - (15179)))));
        var_27 = ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)13)), (arr_2 [i_11] [i_11])));
        arr_52 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) (-(var_5))))), ((~(((/* implicit */int) (short)0))))));
    }
    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 13; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                {
                    arr_60 [i_13] [i_13] = max((arr_41 [(short)10] [i_13 - 1] [(short)2] [i_14] [(short)10]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) * (0ULL))));
                    arr_61 [i_13 + 1] [i_13] [i_14] [i_14] = ((/* implicit */short) ((unsigned char) min(((unsigned char)8), (arr_20 [i_13 - 1] [i_13]))));
                    var_29 = (unsigned char)220;
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        arr_66 [i_12] [9LL] [i_15] [i_13] = arr_30 [i_13 - 1] [i_13 + 1];
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) 4630056552193671762ULL)))))) ? (((((/* implicit */_Bool) ((short) 4093046957034378423LL))) ? (((((/* implicit */int) (short)16062)) >> (((/* implicit */int) (unsigned char)20)))) : (((/* implicit */int) (unsigned char)20)))) : (((/* implicit */int) (short)-31221))));
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 12; i_16 += 1) 
                    {
                        arr_69 [i_13] [4LL] [i_13] [i_16 - 4] [i_13] [(short)2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((+(-1708415284277049533LL))) > (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))), (min((((((/* implicit */_Bool) arr_28 [21LL] [21LL] [(short)12])) ? (arr_65 [i_13] [i_13 - 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12]))))), (((unsigned long long int) arr_9 [i_13]))))));
                        arr_70 [i_13] [i_14] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) ((short) min(((short)4096), (((/* implicit */short) (unsigned char)34)))))) * (((/* implicit */int) (unsigned char)153))));
                        arr_71 [i_12] [i_12] [i_13] [(short)8] [i_14] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(9358155477992867594ULL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_13 - 1] [i_13])) ? (((/* implicit */int) (short)14178)) : (((/* implicit */int) (unsigned char)244)))))));
                        arr_72 [i_12] [i_13] [(short)13] = ((/* implicit */short) max(((-((~(((/* implicit */int) (short)6770)))))), (((/* implicit */int) arr_16 [14LL] [14LL]))));
                    }
                }
            } 
        } 
        arr_73 [i_12] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
}
