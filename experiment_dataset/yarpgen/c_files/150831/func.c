/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150831
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
    var_20 &= ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) <= (var_5))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1)) : (15452565499597692923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55126)))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)10408))))))) : (var_0));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) arr_3 [i_0])) : (var_9))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) var_4)) ? (-1218497475) : (var_11)))))));
                    var_21 = ((/* implicit */unsigned long long int) (unsigned short)8422);
                    arr_10 [i_0] [i_1 + 1] = ((int) ((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) var_4))))) / (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((var_8), (((/* implicit */unsigned int) ((var_10) | (((/* implicit */int) arr_2 [i_1 - 1]))))))) > (((/* implicit */unsigned int) min((122876164), (max((-1), (((/* implicit */int) (unsigned short)8442)))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */long long int) (unsigned short)37898)), (((long long int) var_15)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 3; i_3 < 6; i_3 += 2) 
        {
            arr_17 [i_0] = (-(((/* implicit */int) (unsigned short)55158)));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned int) (-(var_17)))))));
            arr_18 [i_3 - 3] [i_3] [i_0] = ((/* implicit */int) var_19);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_3] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((unsigned int) var_18));
                        var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8436))) : (arr_3 [i_0 + 2]))));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_18);
            var_25 |= ((/* implicit */unsigned int) (~(min((var_6), (((/* implicit */unsigned long long int) var_7))))));
            var_26 = ((((/* implicit */_Bool) -4938179325341723725LL)) ? (((1827077990) & (((/* implicit */int) (unsigned short)8428)))) : (((/* implicit */int) (unsigned short)37914)));
        }
    }
    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
    {
        var_27 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_11) : (var_17)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) - (15180909729812766311ULL))))) % ((-(((11510161656175119569ULL) + (11054601116172563227ULL))))));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((18446744073709551607ULL), (((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 2] [i_7 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27621))))) : (((((/* implicit */_Bool) 2587140658U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) var_4);
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 11; i_8 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_32 [i_8])) && (((/* implicit */_Bool) (-2147483647 - 1))))) && (((/* implicit */_Bool) ((long long int) var_8)))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                {
                    arr_37 [i_9] = ((/* implicit */unsigned int) (((+(var_1))) < (((arr_34 [i_8 - 4] [(unsigned short)13] [i_9]) + (var_12)))));
                    var_30 *= ((/* implicit */signed char) ((unsigned long long int) 7795834539930357853ULL));
                    arr_38 [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10978546107048464471ULL)) ? (((/* implicit */int) ((unsigned short) arr_31 [i_8 + 3]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10380)) && (((/* implicit */_Bool) (unsigned short)65535)))))));
                }
            } 
        } 
        arr_39 [i_8] = ((/* implicit */unsigned long long int) arr_36 [i_8 - 1] [i_8] [i_8 - 4] [i_8]);
    }
    for (int i_11 = 3; i_11 < 18; i_11 += 2) 
    {
        arr_43 [i_11 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) var_18))) && (((/* implicit */_Bool) var_9)))) ? (min((((var_11) + (((/* implicit */int) arr_41 [i_11 + 3])))), (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (unsigned short)56900)) : (((/* implicit */int) (unsigned short)10400)))))) : (((/* implicit */int) (unsigned short)55126))));
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) 678589226)))));
        arr_44 [i_11] = ((/* implicit */signed char) (unsigned short)49311);
    }
}
